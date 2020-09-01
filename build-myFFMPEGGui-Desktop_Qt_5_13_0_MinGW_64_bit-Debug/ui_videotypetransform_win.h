/********************************************************************************
** Form generated from reading UI file 'videotypetransform_win.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOTYPETRANSFORM_WIN_H
#define UI_VIDEOTYPETRANSFORM_WIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_VideoTypeTransform_win
{
public:
    QPushButton *step_1_button;
    QLabel *step_1_label;
    QLineEdit *step_1_line;
    QPushButton *step_2_button;
    QLabel *step_2_label;
    QLineEdit *step_2_line;
    QLabel *step_3_label;
    QLineEdit *step_4_line;
    QLabel *step_4_label;
    QPushButton *step_4_button;
    QPushButton *step_5_button;
    QTextEdit *textEdit;
    QLineEdit *step_3_line;
    QPushButton *step_3_button;

    void setupUi(QDialog *VideoTypeTransform_win)
    {
        if (VideoTypeTransform_win->objectName().isEmpty())
            VideoTypeTransform_win->setObjectName(QString::fromUtf8("VideoTypeTransform_win"));
        VideoTypeTransform_win->resize(1003, 783);
        step_1_button = new QPushButton(VideoTypeTransform_win);
        step_1_button->setObjectName(QString::fromUtf8("step_1_button"));
        step_1_button->setGeometry(QRect(20, 10, 101, 51));
        step_1_label = new QLabel(VideoTypeTransform_win);
        step_1_label->setObjectName(QString::fromUtf8("step_1_label"));
        step_1_label->setGeometry(QRect(20, 60, 101, 21));
        step_1_line = new QLineEdit(VideoTypeTransform_win);
        step_1_line->setObjectName(QString::fromUtf8("step_1_line"));
        step_1_line->setGeometry(QRect(10, 90, 121, 51));
        step_1_line->setReadOnly(true);
        step_2_button = new QPushButton(VideoTypeTransform_win);
        step_2_button->setObjectName(QString::fromUtf8("step_2_button"));
        step_2_button->setGeometry(QRect(170, 10, 121, 51));
        step_2_label = new QLabel(VideoTypeTransform_win);
        step_2_label->setObjectName(QString::fromUtf8("step_2_label"));
        step_2_label->setGeometry(QRect(170, 70, 111, 16));
        step_2_line = new QLineEdit(VideoTypeTransform_win);
        step_2_line->setObjectName(QString::fromUtf8("step_2_line"));
        step_2_line->setGeometry(QRect(170, 100, 131, 41));
        step_2_line->setReadOnly(true);
        step_2_line->setClearButtonEnabled(false);
        step_3_label = new QLabel(VideoTypeTransform_win);
        step_3_label->setObjectName(QString::fromUtf8("step_3_label"));
        step_3_label->setGeometry(QRect(340, 10, 121, 41));
        step_4_line = new QLineEdit(VideoTypeTransform_win);
        step_4_line->setObjectName(QString::fromUtf8("step_4_line"));
        step_4_line->setGeometry(QRect(490, 90, 141, 41));
        step_4_label = new QLabel(VideoTypeTransform_win);
        step_4_label->setObjectName(QString::fromUtf8("step_4_label"));
        step_4_label->setGeometry(QRect(480, 30, 231, 41));
        step_4_button = new QPushButton(VideoTypeTransform_win);
        step_4_button->setObjectName(QString::fromUtf8("step_4_button"));
        step_4_button->setGeometry(QRect(490, 140, 75, 23));
        step_5_button = new QPushButton(VideoTypeTransform_win);
        step_5_button->setObjectName(QString::fromUtf8("step_5_button"));
        step_5_button->setGeometry(QRect(30, 330, 71, 91));
        textEdit = new QTextEdit(VideoTypeTransform_win);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(200, 270, 261, 271));
        step_3_line = new QLineEdit(VideoTypeTransform_win);
        step_3_line->setObjectName(QString::fromUtf8("step_3_line"));
        step_3_line->setGeometry(QRect(340, 50, 111, 61));
        step_3_button = new QPushButton(VideoTypeTransform_win);
        step_3_button->setObjectName(QString::fromUtf8("step_3_button"));
        step_3_button->setGeometry(QRect(360, 120, 75, 23));

        retranslateUi(VideoTypeTransform_win);

        QMetaObject::connectSlotsByName(VideoTypeTransform_win);
    } // setupUi

    void retranslateUi(QDialog *VideoTypeTransform_win)
    {
        VideoTypeTransform_win->setWindowTitle(QCoreApplication::translate("VideoTypeTransform_win", "Dialog", nullptr));
        step_1_button->setText(QCoreApplication::translate("VideoTypeTransform_win", "1\343\200\201\351\200\211\346\213\251\350\247\206\351\242\221\346\226\207\344\273\266", nullptr));
        step_1_label->setText(QCoreApplication::translate("VideoTypeTransform_win", "\345\275\223\345\211\215\351\200\211\345\256\232\350\247\206\351\242\221\346\226\207\344\273\266", nullptr));
        step_2_button->setText(QCoreApplication::translate("VideoTypeTransform_win", "2\343\200\201\351\200\211\346\213\251\350\276\223\345\207\272\346\226\207\344\273\266\345\244\271", nullptr));
        step_2_label->setText(QCoreApplication::translate("VideoTypeTransform_win", "\345\275\223\345\211\215\351\200\211\345\256\232\350\276\223\345\207\272\346\226\207\344\273\266\345\244\271", nullptr));
        step_3_label->setText(QCoreApplication::translate("VideoTypeTransform_win", "3\343\200\201\350\276\223\345\205\245\350\276\223\345\207\272\346\226\207\344\273\266\346\240\274\345\274\217", nullptr));
        step_4_label->setText(QCoreApplication::translate("VideoTypeTransform_win", "4\343\200\201\350\276\223\345\205\245\350\276\223\345\207\272\346\226\207\344\273\266\345\220\215(\344\270\215\345\241\253\351\273\230\350\256\244\347\233\270\345\220\214\345\220\215\345\255\227)", nullptr));
        step_4_button->setText(QCoreApplication::translate("VideoTypeTransform_win", "\347\241\256\345\256\232", nullptr));
        step_5_button->setText(QCoreApplication::translate("VideoTypeTransform_win", "\345\274\200\345\247\213\350\275\254\346\215\242", nullptr));
        step_3_button->setText(QCoreApplication::translate("VideoTypeTransform_win", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VideoTypeTransform_win: public Ui_VideoTypeTransform_win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOTYPETRANSFORM_WIN_H
