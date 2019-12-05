/********************************************************************************
** Form generated from reading UI file 'modifyinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYINFO_H
#define UI_MODIFYINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modifyInfo
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *lineEdit_StadiumName;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_PhoneNumber;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_8;
    QDateEdit *dateEdit;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEdit_City;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *lineEdit_State;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLineEdit *lineEdit_TeamName;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QLineEdit *lineEdit_StadiumAddress;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_National;
    QSpacerItem *horizontalSpacer;
    QRadioButton *radioButton_American;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_5;
    QLineEdit *lineEdit_Zip_Code;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLineEdit *lineEdit_Capacity;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_10;
    QComboBox *comboBox_GrassSurface;
    QTextBrowser *textBrowser;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *modifyInfo)
    {
        if (modifyInfo->objectName().isEmpty())
            modifyInfo->setObjectName(QString::fromUtf8("modifyInfo"));
        modifyInfo->resize(561, 442);
        layoutWidget = new QWidget(modifyInfo);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 120, 401, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        lineEdit_StadiumName = new QLineEdit(layoutWidget);
        lineEdit_StadiumName->setObjectName(QString::fromUtf8("lineEdit_StadiumName"));

        horizontalLayout_5->addWidget(lineEdit_StadiumName);

        layoutWidget_2 = new QWidget(modifyInfo);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(80, 320, 379, 24));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_12->addWidget(label_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEdit_PhoneNumber = new QLineEdit(layoutWidget_2);
        lineEdit_PhoneNumber->setObjectName(QString::fromUtf8("lineEdit_PhoneNumber"));

        horizontalLayout_3->addWidget(lineEdit_PhoneNumber);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_3->addWidget(label_8);

        dateEdit = new QDateEdit(layoutWidget_2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_3->addWidget(dateEdit);


        horizontalLayout_12->addLayout(horizontalLayout_3);

        layoutWidget_3 = new QWidget(modifyInfo);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(81, 240, 401, 26));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_9->addWidget(label_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lineEdit_City = new QLineEdit(layoutWidget_3);
        lineEdit_City->setObjectName(QString::fromUtf8("lineEdit_City"));

        horizontalLayout_7->addWidget(lineEdit_City);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(layoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        lineEdit_State = new QLineEdit(layoutWidget_3);
        lineEdit_State->setObjectName(QString::fromUtf8("lineEdit_State"));

        horizontalLayout_2->addWidget(lineEdit_State);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        horizontalLayout_7->addLayout(horizontalLayout_2);


        horizontalLayout_9->addLayout(horizontalLayout_7);

        layoutWidget_4 = new QWidget(modifyInfo);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(80, 160, 401, 22));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_6->addWidget(label_2);

        lineEdit_TeamName = new QLineEdit(layoutWidget_4);
        lineEdit_TeamName->setObjectName(QString::fromUtf8("lineEdit_TeamName"));

        horizontalLayout_6->addWidget(lineEdit_TeamName);

        layoutWidget_5 = new QWidget(modifyInfo);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(80, 200, 401, 22));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_8->addWidget(label_3);

        lineEdit_StadiumAddress = new QLineEdit(layoutWidget_5);
        lineEdit_StadiumAddress->setObjectName(QString::fromUtf8("lineEdit_StadiumAddress"));

        horizontalLayout_8->addWidget(lineEdit_StadiumAddress);

        layoutWidget_6 = new QWidget(modifyInfo);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(180, 80, 211, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget_6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_National = new QRadioButton(layoutWidget_6);
        radioButton_National->setObjectName(QString::fromUtf8("radioButton_National"));

        horizontalLayout->addWidget(radioButton_National);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        radioButton_American = new QRadioButton(layoutWidget_6);
        radioButton_American->setObjectName(QString::fromUtf8("radioButton_American"));

        horizontalLayout->addWidget(radioButton_American);

        layoutWidget_7 = new QWidget(modifyInfo);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(80, 280, 187, 22));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_7);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_10->addWidget(label_5);

        lineEdit_Zip_Code = new QLineEdit(layoutWidget_7);
        lineEdit_Zip_Code->setObjectName(QString::fromUtf8("lineEdit_Zip_Code"));

        horizontalLayout_10->addWidget(lineEdit_Zip_Code);

        layoutWidget_8 = new QWidget(modifyInfo);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(80, 360, 401, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_8);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_4->addWidget(label_9);

        lineEdit_Capacity = new QLineEdit(layoutWidget_8);
        lineEdit_Capacity->setObjectName(QString::fromUtf8("lineEdit_Capacity"));

        horizontalLayout_4->addWidget(lineEdit_Capacity);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        label_10 = new QLabel(layoutWidget_8);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_4->addWidget(label_10);

        comboBox_GrassSurface = new QComboBox(layoutWidget_8);
        comboBox_GrassSurface->setObjectName(QString::fromUtf8("comboBox_GrassSurface"));

        horizontalLayout_4->addWidget(comboBox_GrassSurface);

        textBrowser = new QTextBrowser(modifyInfo);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(60, 10, 441, 51));
        textBrowser->setMinimumSize(QSize(441, 51));
        textBrowser->setMaximumSize(QSize(441, 51));
        buttonBox = new QDialogButtonBox(modifyInfo);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(210, 400, 151, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(modifyInfo);

        QMetaObject::connectSlotsByName(modifyInfo);
    } // setupUi

    void retranslateUi(QDialog *modifyInfo)
    {
        modifyInfo->setWindowTitle(QCoreApplication::translate("modifyInfo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("modifyInfo", "Stadium Name:", nullptr));
        label_7->setText(QCoreApplication::translate("modifyInfo", "Phone Number:", nullptr));
        label_8->setText(QCoreApplication::translate("modifyInfo", "Date:", nullptr));
        label_4->setText(QCoreApplication::translate("modifyInfo", "City:", nullptr));
        label_6->setText(QCoreApplication::translate("modifyInfo", "State:", nullptr));
        label_2->setText(QCoreApplication::translate("modifyInfo", "Team Name:", nullptr));
        label_3->setText(QCoreApplication::translate("modifyInfo", "Address:", nullptr));
        radioButton_National->setText(QCoreApplication::translate("modifyInfo", "National", nullptr));
        radioButton_American->setText(QCoreApplication::translate("modifyInfo", "American", nullptr));
        label_5->setText(QCoreApplication::translate("modifyInfo", "Zip Code:", nullptr));
        label_9->setText(QCoreApplication::translate("modifyInfo", "Capacity:", nullptr));
        label_10->setText(QCoreApplication::translate("modifyInfo", "Stadium Surface:", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("modifyInfo", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:24pt; font-weight:600; color:#d41448;\">UPDATE INFORMATION</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modifyInfo: public Ui_modifyInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYINFO_H
