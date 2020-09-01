/********************************************************************************
** Form generated from reading UI file 'video_to_pic.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEO_TO_PIC_H
#define UI_VIDEO_TO_PIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_video_to_pic
{
public:
    QPushButton *set_video;
    QPushButton *set_frame;
    QPushButton *set_output_dir;
    QPushButton *set_pic_name;
    QComboBox *set_pic_quality;
    QTextEdit *pic_name_info;
    QTextEdit *output_dir_info;
    QTextEdit *frame_info;
    QTextEdit *video_info;
    QPushButton *Start_transform;
    QTextEdit *Process_text;

    void setupUi(QDialog *video_to_pic)
    {
        if (video_to_pic->objectName().isEmpty())
            video_to_pic->setObjectName(QString::fromUtf8("video_to_pic"));
        video_to_pic->resize(800, 553);
        set_video = new QPushButton(video_to_pic);
        set_video->setObjectName(QString::fromUtf8("set_video"));
        set_video->setGeometry(QRect(10, 20, 101, 51));
        set_frame = new QPushButton(video_to_pic);
        set_frame->setObjectName(QString::fromUtf8("set_frame"));
        set_frame->setGeometry(QRect(140, 20, 101, 51));
        set_output_dir = new QPushButton(video_to_pic);
        set_output_dir->setObjectName(QString::fromUtf8("set_output_dir"));
        set_output_dir->setGeometry(QRect(280, 20, 101, 51));
        set_pic_name = new QPushButton(video_to_pic);
        set_pic_name->setObjectName(QString::fromUtf8("set_pic_name"));
        set_pic_name->setGeometry(QRect(420, 0, 141, 91));
        set_pic_quality = new QComboBox(video_to_pic);
        set_pic_quality->addItem(QString());
        set_pic_quality->addItem(QString());
        set_pic_quality->addItem(QString());
        set_pic_quality->addItem(QString());
        set_pic_quality->addItem(QString());
        set_pic_quality->addItem(QString());
        set_pic_quality->setObjectName(QString::fromUtf8("set_pic_quality"));
        set_pic_quality->setGeometry(QRect(570, 20, 101, 22));
        pic_name_info = new QTextEdit(video_to_pic);
        pic_name_info->setObjectName(QString::fromUtf8("pic_name_info"));
        pic_name_info->setGeometry(QRect(420, 100, 111, 71));
        output_dir_info = new QTextEdit(video_to_pic);
        output_dir_info->setObjectName(QString::fromUtf8("output_dir_info"));
        output_dir_info->setGeometry(QRect(280, 100, 111, 71));
        frame_info = new QTextEdit(video_to_pic);
        frame_info->setObjectName(QString::fromUtf8("frame_info"));
        frame_info->setGeometry(QRect(140, 100, 111, 71));
        video_info = new QTextEdit(video_to_pic);
        video_info->setObjectName(QString::fromUtf8("video_info"));
        video_info->setGeometry(QRect(10, 100, 111, 71));
        Start_transform = new QPushButton(video_to_pic);
        Start_transform->setObjectName(QString::fromUtf8("Start_transform"));
        Start_transform->setGeometry(QRect(60, 220, 611, 31));
        Process_text = new QTextEdit(video_to_pic);
        Process_text->setObjectName(QString::fromUtf8("Process_text"));
        Process_text->setGeometry(QRect(51, 251, 631, 261));

        retranslateUi(video_to_pic);

        QMetaObject::connectSlotsByName(video_to_pic);
    } // setupUi

    void retranslateUi(QDialog *video_to_pic)
    {
        video_to_pic->setWindowTitle(QCoreApplication::translate("video_to_pic", "Dialog", nullptr));
        set_video->setText(QCoreApplication::translate("video_to_pic", "\351\200\211\346\213\251\350\247\206\351\242\221", nullptr));
        set_frame->setText(QCoreApplication::translate("video_to_pic", "\345\241\253\345\206\231\345\270\247\346\225\260", nullptr));
        set_output_dir->setText(QCoreApplication::translate("video_to_pic", "\350\256\276\347\275\256\350\276\223\345\207\272\347\233\256\345\275\225", nullptr));
        set_pic_name->setText(QCoreApplication::translate("video_to_pic", "\350\256\276\347\275\256\346\226\207\344\273\266\345\220\215\345\255\227(\345\214\205\346\213\254\345\220\216\347\274\200)", nullptr));
        set_pic_quality->setItemText(0, QCoreApplication::translate("video_to_pic", "\351\200\211\346\213\251\345\233\276\347\211\207\350\264\250\351\207\217", nullptr));
        set_pic_quality->setItemText(1, QCoreApplication::translate("video_to_pic", "\346\234\200\345\245\275", nullptr));
        set_pic_quality->setItemText(2, QCoreApplication::translate("video_to_pic", "\350\276\203\345\245\275", nullptr));
        set_pic_quality->setItemText(3, QCoreApplication::translate("video_to_pic", "\346\240\207\345\207\206", nullptr));
        set_pic_quality->setItemText(4, QCoreApplication::translate("video_to_pic", "\350\276\203\345\267\256", nullptr));
        set_pic_quality->setItemText(5, QCoreApplication::translate("video_to_pic", "\346\234\200\345\267\256", nullptr));

        Start_transform->setText(QCoreApplication::translate("video_to_pic", "\345\274\200\345\247\213\350\275\254\346\215\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class video_to_pic: public Ui_video_to_pic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEO_TO_PIC_H
