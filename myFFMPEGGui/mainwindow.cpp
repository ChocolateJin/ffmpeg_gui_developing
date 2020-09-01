#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "videotypetransform_win.h"
#include "Qprocess"
static QProcess *ffm;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_StartButton_clicked()
{
    ffm = new QProcess(this);
    QStringList argu;
    argu<<"-i";
    argu<<"F:\\test.mp4";
    argu<<"F:\\test.avi";
    ffm->setProcessChannelMode(QProcess::MergedChannels);

    ffm->start("F:\\ffmpeg",argu);
    bool is_open = ffm->waitForStarted();
    if (is_open == true)
        ui->ResultText->append("程序成功启动");
    else {
        ui->ResultText->append("程序启动失败");
    };
    connect(ffm,SIGNAL(readyReadStandardOutput()),this,SLOT(showoutput()));

}

void MainWindow::showoutput()
{
    QString tmp = ffm->readAllStandardOutput();
    ui->ResultText->setText(tmp);
}
void MainWindow::startapp()
{
    ui->ResultText->append("程序启动成功");
}
void MainWindow::stopapp()
{
    ui->ResultText->append("程序结束成功");
}

void MainWindow::on_pushButton_clicked()
{
    VideoTypeTransform_win *sub_win = new VideoTypeTransform_win();
    sub_win->exec();
}
