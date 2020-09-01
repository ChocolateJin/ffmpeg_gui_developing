#include "videotypetransform_win.h"
#include "ui_videotypetransform_win.h"
#include <QFileDialog>
#include <QFileInfo>
#include <QProcess>
static QProcess *ffm;
static QFileInfo InputFileInfo;
static QString InputFilePath,InputFileName;
static QString OutputFilePath,OutputFileName,OutputFileSuffix;
static QStringList argu;
VideoTypeTransform_win::VideoTypeTransform_win(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VideoTypeTransform_win)
{
    ui->setupUi(this);

}

VideoTypeTransform_win::~VideoTypeTransform_win()
{
    delete ui;
}

void VideoTypeTransform_win::on_step_1_button_clicked()
{
 QFileDialog *dia_win = new QFileDialog;
 QString file_path = dia_win->getOpenFileName();
 InputFileInfo = QFileInfo(file_path);
 InputFilePath = InputFileInfo.filePath();
 InputFileName = InputFileInfo.fileName();
 ui->step_1_line->setText(InputFilePath);
}

void VideoTypeTransform_win::on_step_2_button_clicked()
{
    QFileDialog *dia_win = new QFileDialog;
    OutputFilePath = dia_win->getExistingDirectory();
    ui->step_2_line->setText(OutputFilePath);
}

void VideoTypeTransform_win::on_step_3_button_clicked()
{
    OutputFileSuffix=ui->step_3_line->text();
    ui->textEdit->append(ui->step_3_line->text());
}


void VideoTypeTransform_win::on_step_4_button_clicked()
{
    QString tmp = ui->step_4_line->text();
    if(tmp.isEmpty() == 1)
    {
        OutputFileName = InputFileInfo.fileName();
        QByteArray ba = OutputFileName.toLatin1();
        char* tmp2 = ba.data();
        int doc_poc = 0;
        for(int i = 0;i<=int(strlen(tmp2));i=i+1)
            if(tmp2[i] == '.')
                doc_poc = i;
        QString doc = QString::number(doc_poc);
        QString realname = NULL;
        for(int i = 0;i<doc_poc;i=i+1)
            realname += QString(QLatin1Char(tmp2[i]));
        ui->textEdit->append(realname);
        OutputFileName = realname;
    }
    else {
        OutputFileName = ui->step_4_line->text();
        ui->textEdit->append(OutputFileName);
    }
}

void VideoTypeTransform_win::on_step_5_button_clicked()
{

    argu << "-i";
    argu << InputFileInfo.filePath();
    QString output = OutputFilePath+'/'+OutputFileName+'.'+OutputFileSuffix;
    argu<< output;
    for(int i = 0;i<argu.size();i=i+1)
        ui->textEdit->append(argu[i]);
    ffm = new QProcess(this);
    ffm->setProcessChannelMode(QProcess::MergedChannels);
    ffm->start("F:\\ffmpeg",argu);
    bool is_open = ffm->waitForStarted();
    ui->textEdit->clear();
    if (is_open == true)
        ui->textEdit->append("程序成功启动");
    else {
        ui->textEdit->append("程序启动失败");
    };
    connect(ffm,SIGNAL(readyReadStandardOutput()),this,SLOT(showoutput()));
}

void VideoTypeTransform_win::showoutput()
{
    QString tmp = ffm->readAllStandardOutput();
    ui->textEdit->setText(tmp);
}
