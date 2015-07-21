/********************************************************************************
** Form generated from reading UI file 'CalibrationDialog.ui'
**
** Created: Tue Jul 21 10:35:03 2015
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIBRATIONDIALOG_H
#define UI_CALIBRATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CalibrationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *file_label;
    QLineEdit *file_line;
    QPushButton *load_button;
    QPushButton *save_button;
    QTextEdit *message_text;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *close_button;

    void setupUi(QDialog *CalibrationDialog)
    {
        if (CalibrationDialog->objectName().isEmpty())
            CalibrationDialog->setObjectName(QString::fromUtf8("CalibrationDialog"));
        CalibrationDialog->setWindowModality(Qt::WindowModal);
        CalibrationDialog->resize(666, 325);
        verticalLayout = new QVBoxLayout(CalibrationDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        file_label = new QLabel(CalibrationDialog);
        file_label->setObjectName(QString::fromUtf8("file_label"));

        horizontalLayout_2->addWidget(file_label);

        file_line = new QLineEdit(CalibrationDialog);
        file_line->setObjectName(QString::fromUtf8("file_line"));
        file_line->setEnabled(false);
        file_line->setReadOnly(true);

        horizontalLayout_2->addWidget(file_line);

        load_button = new QPushButton(CalibrationDialog);
        load_button->setObjectName(QString::fromUtf8("load_button"));
        load_button->setAutoDefault(false);

        horizontalLayout_2->addWidget(load_button);

        save_button = new QPushButton(CalibrationDialog);
        save_button->setObjectName(QString::fromUtf8("save_button"));
        save_button->setAutoDefault(false);

        horizontalLayout_2->addWidget(save_button);


        verticalLayout->addLayout(horizontalLayout_2);

        message_text = new QTextEdit(CalibrationDialog);
        message_text->setObjectName(QString::fromUtf8("message_text"));
        message_text->setReadOnly(true);

        verticalLayout->addWidget(message_text);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        close_button = new QPushButton(CalibrationDialog);
        close_button->setObjectName(QString::fromUtf8("close_button"));

        horizontalLayout->addWidget(close_button);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CalibrationDialog);

        QMetaObject::connectSlotsByName(CalibrationDialog);
    } // setupUi

    void retranslateUi(QDialog *CalibrationDialog)
    {
        CalibrationDialog->setWindowTitle(QApplication::translate("CalibrationDialog", "Calibration", 0, QApplication::UnicodeUTF8));
        file_label->setText(QApplication::translate("CalibrationDialog", "Calibration file", 0, QApplication::UnicodeUTF8));
        load_button->setText(QApplication::translate("CalibrationDialog", "Load...", 0, QApplication::UnicodeUTF8));
        save_button->setText(QApplication::translate("CalibrationDialog", "Save...", 0, QApplication::UnicodeUTF8));
        close_button->setText(QApplication::translate("CalibrationDialog", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CalibrationDialog: public Ui_CalibrationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATIONDIALOG_H
