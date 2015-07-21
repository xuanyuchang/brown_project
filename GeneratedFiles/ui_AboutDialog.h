/********************************************************************************
** Form generated from reading UI file 'AboutDialog.ui'
**
** Created: Tue Jul 21 10:35:03 2015
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *title_label;
    QLabel *course_label;
    QLabel *label_author;
    QFrame *frame;
    QFormLayout *formLayout;
    QLabel *qt_version_title_label;
    QLabel *qt_version_label;
    QLabel *opencv_title_label;
    QLabel *opencv_version_label;
    QLabel *built_date_title_label;
    QLabel *built_date_label;
    QLabel *url_title_label;
    QLabel *url_label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *author_label;
    QSpacerItem *horizontalSpacer;
    QPushButton *close_button;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->setWindowModality(Qt::ApplicationModal);
        AboutDialog->resize(546, 240);
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        title_label = new QLabel(AboutDialog);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        QFont font;
        font.setPointSize(16);
        title_label->setFont(font);
        title_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(title_label);

        course_label = new QLabel(AboutDialog);
        course_label->setObjectName(QString::fromUtf8("course_label"));
        QFont font1;
        font1.setPointSize(11);
        course_label->setFont(font1);
        course_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(course_label);

        label_author = new QLabel(AboutDialog);
        label_author->setObjectName(QString::fromUtf8("label_author"));
        QFont font2;
        font2.setPointSize(10);
        label_author->setFont(font2);
        label_author->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_author);

        frame = new QFrame(AboutDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(frame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        qt_version_title_label = new QLabel(frame);
        qt_version_title_label->setObjectName(QString::fromUtf8("qt_version_title_label"));
        qt_version_title_label->setFont(font2);

        formLayout->setWidget(2, QFormLayout::LabelRole, qt_version_title_label);

        qt_version_label = new QLabel(frame);
        qt_version_label->setObjectName(QString::fromUtf8("qt_version_label"));
        qt_version_label->setFont(font2);

        formLayout->setWidget(2, QFormLayout::FieldRole, qt_version_label);

        opencv_title_label = new QLabel(frame);
        opencv_title_label->setObjectName(QString::fromUtf8("opencv_title_label"));
        opencv_title_label->setFont(font2);

        formLayout->setWidget(3, QFormLayout::LabelRole, opencv_title_label);

        opencv_version_label = new QLabel(frame);
        opencv_version_label->setObjectName(QString::fromUtf8("opencv_version_label"));
        opencv_version_label->setFont(font2);

        formLayout->setWidget(3, QFormLayout::FieldRole, opencv_version_label);

        built_date_title_label = new QLabel(frame);
        built_date_title_label->setObjectName(QString::fromUtf8("built_date_title_label"));
        built_date_title_label->setFont(font2);

        formLayout->setWidget(4, QFormLayout::LabelRole, built_date_title_label);

        built_date_label = new QLabel(frame);
        built_date_label->setObjectName(QString::fromUtf8("built_date_label"));
        built_date_label->setFont(font2);

        formLayout->setWidget(4, QFormLayout::FieldRole, built_date_label);

        url_title_label = new QLabel(frame);
        url_title_label->setObjectName(QString::fromUtf8("url_title_label"));
        url_title_label->setFont(font2);

        formLayout->setWidget(1, QFormLayout::LabelRole, url_title_label);

        url_label = new QLabel(frame);
        url_label->setObjectName(QString::fromUtf8("url_label"));
        url_label->setFont(font2);
        url_label->setTextFormat(Qt::RichText);
        url_label->setOpenExternalLinks(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, url_label);


        verticalLayout->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        author_label = new QLabel(AboutDialog);
        author_label->setObjectName(QString::fromUtf8("author_label"));
        author_label->setFont(font2);

        horizontalLayout->addWidget(author_label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        close_button = new QPushButton(AboutDialog);
        close_button->setObjectName(QString::fromUtf8("close_button"));

        horizontalLayout->addWidget(close_button);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AboutDialog);

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About Camera-Projector Calibration", 0, QApplication::UnicodeUTF8));
        title_label->setText(QApplication::translate("AboutDialog", "3D Scanning Software", 0, QApplication::UnicodeUTF8));
        course_label->setText(QApplication::translate("AboutDialog", "Simple, Accurate, and Robust Projector-Camera Calibration", 0, QApplication::UnicodeUTF8));
        label_author->setText(QApplication::translate("AboutDialog", "Daniel Moreno and Gabriel Taubin", 0, QApplication::UnicodeUTF8));
        qt_version_title_label->setText(QApplication::translate("AboutDialog", "Qt Version:", 0, QApplication::UnicodeUTF8));
        qt_version_label->setText(QApplication::translate("AboutDialog", "qt ver", 0, QApplication::UnicodeUTF8));
        opencv_title_label->setText(QApplication::translate("AboutDialog", "OpenCV Version:", 0, QApplication::UnicodeUTF8));
        opencv_version_label->setText(QApplication::translate("AboutDialog", "opencv ver", 0, QApplication::UnicodeUTF8));
        built_date_title_label->setText(QApplication::translate("AboutDialog", "Built on:", 0, QApplication::UnicodeUTF8));
        built_date_label->setText(QApplication::translate("AboutDialog", "build date time", 0, QApplication::UnicodeUTF8));
        url_title_label->setText(QApplication::translate("AboutDialog", "URL:", 0, QApplication::UnicodeUTF8));
        url_label->setText(QApplication::translate("AboutDialog", "<html><head/><body><p><a href=\"http://mesh.brown.edu/calibration/\">http://mesh.brown.edu/calibration/</a></p></body></html>", 0, QApplication::UnicodeUTF8));
        author_label->setText(QApplication::translate("AboutDialog", "(c) 2012 Daniel Moreno and Gabriel Taubin", 0, QApplication::UnicodeUTF8));
        close_button->setText(QApplication::translate("AboutDialog", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
