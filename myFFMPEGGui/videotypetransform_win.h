#ifndef VIDEOTYPETRANSFORM_WIN_H
#define VIDEOTYPETRANSFORM_WIN_H

#include <QDialog>

namespace Ui {
class VideoTypeTransform_win;
}

class VideoTypeTransform_win : public QDialog
{
    Q_OBJECT

public:
    explicit VideoTypeTransform_win(QWidget *parent = nullptr);
    ~VideoTypeTransform_win();

private slots:
    void on_step_1_button_clicked();

    void on_step_2_button_clicked();

    void on_step_3_button_clicked();

    void on_step_4_button_clicked();

    void on_step_5_button_clicked();

      void showoutput();
private:
    Ui::VideoTypeTransform_win *ui;
};

#endif // VIDEOTYPETRANSFORM_WIN_H
