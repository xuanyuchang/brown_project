/********************************************************************************
** Form generated from reading UI file 'CaptureDialog.ui'
**
** Created: Tue Jul 21 10:35:03 2015
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTUREDIALOG_H
#define UI_CAPTUREDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include "ImageLabel.hpp"

QT_BEGIN_NAMESPACE

class Ui_CaptureDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *projector_group;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *screen_label;
    QComboBox *screen_combo;
    QLabel *projector_patterns_label;
    QSpinBox *projector_patterns_spin;
    ImageLabel *projector_image;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *test_check;
    QPushButton *test_prev_button;
    QPushButton *test_next_button;
    QGroupBox *camera_group;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *camera_label;
    QComboBox *camera_combo;
    QLabel *camera_resolution_label;
    ImageLabel *camera_image;
    QHBoxLayout *horizontalLayout_7;
    QLabel *camera_exposure_label;
    QSpinBox *camera_exposure_spin;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *other_group;
    QHBoxLayout *horizontalLayout_6;
    QLabel *output_dir_label;
    QLineEdit *output_dir_line;
    QPushButton *output_dir_button;
    QLabel *current_message_label;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *progress_label;
    QProgressBar *progress_bar;
    QSpacerItem *horizontalSpacer;
    QPushButton *capture_button;
    QPushButton *close_cancel_button;

    void setupUi(QDialog *CaptureDialog)
    {
        if (CaptureDialog->objectName().isEmpty())
            CaptureDialog->setObjectName(QString::fromUtf8("CaptureDialog"));
        CaptureDialog->resize(695, 391);
        verticalLayout = new QVBoxLayout(CaptureDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        projector_group = new QGroupBox(CaptureDialog);
        projector_group->setObjectName(QString::fromUtf8("projector_group"));
        verticalLayout_2 = new QVBoxLayout(projector_group);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        screen_label = new QLabel(projector_group);
        screen_label->setObjectName(QString::fromUtf8("screen_label"));

        horizontalLayout_5->addWidget(screen_label);

        screen_combo = new QComboBox(projector_group);
        screen_combo->setObjectName(QString::fromUtf8("screen_combo"));

        horizontalLayout_5->addWidget(screen_combo);

        projector_patterns_label = new QLabel(projector_group);
        projector_patterns_label->setObjectName(QString::fromUtf8("projector_patterns_label"));

        horizontalLayout_5->addWidget(projector_patterns_label);

        projector_patterns_spin = new QSpinBox(projector_group);
        projector_patterns_spin->setObjectName(QString::fromUtf8("projector_patterns_spin"));

        horizontalLayout_5->addWidget(projector_patterns_spin);


        verticalLayout_2->addLayout(horizontalLayout_5);

        projector_image = new ImageLabel(projector_group);
        projector_image->setObjectName(QString::fromUtf8("projector_image"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(projector_image->sizePolicy().hasHeightForWidth());
        projector_image->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(projector_image);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        test_check = new QCheckBox(projector_group);
        test_check->setObjectName(QString::fromUtf8("test_check"));

        horizontalLayout_8->addWidget(test_check);

        test_prev_button = new QPushButton(projector_group);
        test_prev_button->setObjectName(QString::fromUtf8("test_prev_button"));
        test_prev_button->setMaximumSize(QSize(64, 16777215));

        horizontalLayout_8->addWidget(test_prev_button);

        test_next_button = new QPushButton(projector_group);
        test_next_button->setObjectName(QString::fromUtf8("test_next_button"));
        test_next_button->setMaximumSize(QSize(64, 16777215));

        horizontalLayout_8->addWidget(test_next_button);


        verticalLayout_2->addLayout(horizontalLayout_8);


        horizontalLayout->addWidget(projector_group);

        camera_group = new QGroupBox(CaptureDialog);
        camera_group->setObjectName(QString::fromUtf8("camera_group"));
        verticalLayout_3 = new QVBoxLayout(camera_group);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        camera_label = new QLabel(camera_group);
        camera_label->setObjectName(QString::fromUtf8("camera_label"));

        horizontalLayout_4->addWidget(camera_label);

        camera_combo = new QComboBox(camera_group);
        camera_combo->setObjectName(QString::fromUtf8("camera_combo"));

        horizontalLayout_4->addWidget(camera_combo);

        camera_resolution_label = new QLabel(camera_group);
        camera_resolution_label->setObjectName(QString::fromUtf8("camera_resolution_label"));

        horizontalLayout_4->addWidget(camera_resolution_label);


        verticalLayout_3->addLayout(horizontalLayout_4);

        camera_image = new ImageLabel(camera_group);
        camera_image->setObjectName(QString::fromUtf8("camera_image"));
        sizePolicy.setHeightForWidth(camera_image->sizePolicy().hasHeightForWidth());
        camera_image->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(camera_image);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        camera_exposure_label = new QLabel(camera_group);
        camera_exposure_label->setObjectName(QString::fromUtf8("camera_exposure_label"));

        horizontalLayout_7->addWidget(camera_exposure_label);

        camera_exposure_spin = new QSpinBox(camera_group);
        camera_exposure_spin->setObjectName(QString::fromUtf8("camera_exposure_spin"));
        camera_exposure_spin->setMinimumSize(QSize(64, 0));

        horizontalLayout_7->addWidget(camera_exposure_spin);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_7);


        horizontalLayout->addWidget(camera_group);


        verticalLayout->addLayout(horizontalLayout);

        other_group = new QGroupBox(CaptureDialog);
        other_group->setObjectName(QString::fromUtf8("other_group"));
        horizontalLayout_6 = new QHBoxLayout(other_group);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        output_dir_label = new QLabel(other_group);
        output_dir_label->setObjectName(QString::fromUtf8("output_dir_label"));

        horizontalLayout_6->addWidget(output_dir_label);

        output_dir_line = new QLineEdit(other_group);
        output_dir_line->setObjectName(QString::fromUtf8("output_dir_line"));

        horizontalLayout_6->addWidget(output_dir_line);

        output_dir_button = new QPushButton(other_group);
        output_dir_button->setObjectName(QString::fromUtf8("output_dir_button"));
        output_dir_button->setMaximumSize(QSize(30, 16777215));
        output_dir_button->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_6->addWidget(output_dir_button);


        verticalLayout->addWidget(other_group);

        current_message_label = new QLabel(CaptureDialog);
        current_message_label->setObjectName(QString::fromUtf8("current_message_label"));

        verticalLayout->addWidget(current_message_label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        progress_label = new QLabel(CaptureDialog);
        progress_label->setObjectName(QString::fromUtf8("progress_label"));

        horizontalLayout_3->addWidget(progress_label);

        progress_bar = new QProgressBar(CaptureDialog);
        progress_bar->setObjectName(QString::fromUtf8("progress_bar"));
        progress_bar->setValue(24);

        horizontalLayout_3->addWidget(progress_bar);


        horizontalLayout_2->addLayout(horizontalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        capture_button = new QPushButton(CaptureDialog);
        capture_button->setObjectName(QString::fromUtf8("capture_button"));

        horizontalLayout_2->addWidget(capture_button);

        close_cancel_button = new QPushButton(CaptureDialog);
        close_cancel_button->setObjectName(QString::fromUtf8("close_cancel_button"));

        horizontalLayout_2->addWidget(close_cancel_button);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(CaptureDialog);

        QMetaObject::connectSlotsByName(CaptureDialog);
    } // setupUi

    void retranslateUi(QDialog *CaptureDialog)
    {
        CaptureDialog->setWindowTitle(QApplication::translate("CaptureDialog", "Capture", 0, QApplication::UnicodeUTF8));
        projector_group->setTitle(QApplication::translate("CaptureDialog", "Projector", 0, QApplication::UnicodeUTF8));
        screen_label->setText(QApplication::translate("CaptureDialog", "Screen:", 0, QApplication::UnicodeUTF8));
        projector_patterns_label->setText(QApplication::translate("CaptureDialog", "Patterns:", 0, QApplication::UnicodeUTF8));
        test_check->setText(QApplication::translate("CaptureDialog", "Preview", 0, QApplication::UnicodeUTF8));
        test_prev_button->setText(QApplication::translate("CaptureDialog", "Prev", 0, QApplication::UnicodeUTF8));
        test_next_button->setText(QApplication::translate("CaptureDialog", "Next", 0, QApplication::UnicodeUTF8));
        camera_group->setTitle(QApplication::translate("CaptureDialog", "Camera", 0, QApplication::UnicodeUTF8));
        camera_label->setText(QApplication::translate("CaptureDialog", "Camera:", 0, QApplication::UnicodeUTF8));
        camera_resolution_label->setText(QApplication::translate("CaptureDialog", "image size", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        camera_exposure_label->setToolTip(QApplication::translate("CaptureDialog", "<html><head/><body><p>Adjust to be at least the value of the camera (or larger). This control does not change the actual camera settings.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        camera_exposure_label->setText(QApplication::translate("CaptureDialog", "Wait/Exposure time[ms]:", 0, QApplication::UnicodeUTF8));
        other_group->setTitle(QApplication::translate("CaptureDialog", "Other", 0, QApplication::UnicodeUTF8));
        output_dir_label->setText(QApplication::translate("CaptureDialog", "Output folder:", 0, QApplication::UnicodeUTF8));
        output_dir_button->setText(QApplication::translate("CaptureDialog", "...", 0, QApplication::UnicodeUTF8));
        current_message_label->setText(QApplication::translate("CaptureDialog", "message", 0, QApplication::UnicodeUTF8));
        progress_label->setText(QApplication::translate("CaptureDialog", "Progress", 0, QApplication::UnicodeUTF8));
        capture_button->setText(QApplication::translate("CaptureDialog", "Capture", 0, QApplication::UnicodeUTF8));
        close_cancel_button->setText(QApplication::translate("CaptureDialog", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CaptureDialog: public Ui_CaptureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTUREDIALOG_H
