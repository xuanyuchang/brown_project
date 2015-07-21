/********************************************************************************
** Form generated from reading UI file 'ProcessingDialog.ui'
**
** Created: Tue Jul 21 10:35:03 2015
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSINGDIALOG_H
#define UI_PROCESSINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ProcessingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *progress_label;
    QProgressBar *progress_bar;
    QLabel *current_message_label;
    QTextEdit *message_text;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *close_cancel_button;

    void setupUi(QDialog *ProcessingDialog)
    {
        if (ProcessingDialog->objectName().isEmpty())
            ProcessingDialog->setObjectName(QString::fromUtf8("ProcessingDialog"));
        ProcessingDialog->setWindowModality(Qt::WindowModal);
        ProcessingDialog->resize(666, 325);
        verticalLayout = new QVBoxLayout(ProcessingDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        progress_label = new QLabel(ProcessingDialog);
        progress_label->setObjectName(QString::fromUtf8("progress_label"));

        horizontalLayout_2->addWidget(progress_label);

        progress_bar = new QProgressBar(ProcessingDialog);
        progress_bar->setObjectName(QString::fromUtf8("progress_bar"));
        progress_bar->setValue(24);

        horizontalLayout_2->addWidget(progress_bar);


        verticalLayout->addLayout(horizontalLayout_2);

        current_message_label = new QLabel(ProcessingDialog);
        current_message_label->setObjectName(QString::fromUtf8("current_message_label"));

        verticalLayout->addWidget(current_message_label);

        message_text = new QTextEdit(ProcessingDialog);
        message_text->setObjectName(QString::fromUtf8("message_text"));
        message_text->setReadOnly(true);

        verticalLayout->addWidget(message_text);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        close_cancel_button = new QPushButton(ProcessingDialog);
        close_cancel_button->setObjectName(QString::fromUtf8("close_cancel_button"));

        horizontalLayout->addWidget(close_cancel_button);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ProcessingDialog);

        QMetaObject::connectSlotsByName(ProcessingDialog);
    } // setupUi

    void retranslateUi(QDialog *ProcessingDialog)
    {
        ProcessingDialog->setWindowTitle(QApplication::translate("ProcessingDialog", "Progress", 0, QApplication::UnicodeUTF8));
        progress_label->setText(QApplication::translate("ProcessingDialog", "Progress", 0, QApplication::UnicodeUTF8));
        current_message_label->setText(QApplication::translate("ProcessingDialog", "message", 0, QApplication::UnicodeUTF8));
        close_cancel_button->setText(QApplication::translate("ProcessingDialog", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ProcessingDialog: public Ui_ProcessingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSINGDIALOG_H
