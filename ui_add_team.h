/********************************************************************************
** Form generated from reading UI file 'add_team.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_TEAM_H
#define UI_ADD_TEAM_H

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

class Ui_add_Team
{
public:
    QTextBrowser *textBrowser;
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLineEdit *lineEdit_Capacity;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_10;
    QComboBox *comboBox_GrassSurface;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_National;
    QSpacerItem *horizontalSpacer;
    QRadioButton *radioButton_American;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *lineEdit_StadiumName;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLineEdit *lineEdit_TeamName;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QLineEdit *lineEdit_StadiumAddress;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_5;
    QLineEdit *lineEdit_Zip_Code;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_PhoneNumber;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_8;
    QDateEdit *dateEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEdit_City;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *lineEdit_State;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *add_Team)
    {
        if (add_Team->objectName().isEmpty())
            add_Team->setObjectName(QString::fromUtf8("add_Team"));
        add_Team->resize(598, 431);
        textBrowser = new QTextBrowser(add_Team);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(30, 10, 531, 41));
        textBrowser->setMinimumSize(QSize(531, 41));
        textBrowser->setMaximumSize(QSize(531, 41));
        buttonBox = new QDialogButtonBox(add_Team);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(220, 390, 151, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(add_Team);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 360, 401, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_4->addWidget(label_9);

        lineEdit_Capacity = new QLineEdit(layoutWidget);
        lineEdit_Capacity->setObjectName(QString::fromUtf8("lineEdit_Capacity"));

        horizontalLayout_4->addWidget(lineEdit_Capacity);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_4->addWidget(label_10);

        comboBox_GrassSurface = new QComboBox(layoutWidget);
        comboBox_GrassSurface->setObjectName(QString::fromUtf8("comboBox_GrassSurface"));

        horizontalLayout_4->addWidget(comboBox_GrassSurface);

        layoutWidget1 = new QWidget(add_Team);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(190, 80, 211, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_National = new QRadioButton(layoutWidget1);
        radioButton_National->setObjectName(QString::fromUtf8("radioButton_National"));

        horizontalLayout->addWidget(radioButton_National);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        radioButton_American = new QRadioButton(layoutWidget1);
        radioButton_American->setObjectName(QString::fromUtf8("radioButton_American"));

        horizontalLayout->addWidget(radioButton_American);

        layoutWidget2 = new QWidget(add_Team);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(90, 120, 401, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        lineEdit_StadiumName = new QLineEdit(layoutWidget2);
        lineEdit_StadiumName->setObjectName(QString::fromUtf8("lineEdit_StadiumName"));

        horizontalLayout_5->addWidget(lineEdit_StadiumName);

        layoutWidget3 = new QWidget(add_Team);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(90, 160, 401, 22));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_6->addWidget(label_2);

        lineEdit_TeamName = new QLineEdit(layoutWidget3);
        lineEdit_TeamName->setObjectName(QString::fromUtf8("lineEdit_TeamName"));

        horizontalLayout_6->addWidget(lineEdit_TeamName);

        layoutWidget4 = new QWidget(add_Team);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(90, 200, 401, 22));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_8->addWidget(label_3);

        lineEdit_StadiumAddress = new QLineEdit(layoutWidget4);
        lineEdit_StadiumAddress->setObjectName(QString::fromUtf8("lineEdit_StadiumAddress"));

        horizontalLayout_8->addWidget(lineEdit_StadiumAddress);

        layoutWidget5 = new QWidget(add_Team);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(90, 280, 187, 22));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_10->addWidget(label_5);

        lineEdit_Zip_Code = new QLineEdit(layoutWidget5);
        lineEdit_Zip_Code->setObjectName(QString::fromUtf8("lineEdit_Zip_Code"));

        horizontalLayout_10->addWidget(lineEdit_Zip_Code);

        layoutWidget6 = new QWidget(add_Team);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(90, 320, 379, 24));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget6);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_12->addWidget(label_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEdit_PhoneNumber = new QLineEdit(layoutWidget6);
        lineEdit_PhoneNumber->setObjectName(QString::fromUtf8("lineEdit_PhoneNumber"));

        horizontalLayout_3->addWidget(lineEdit_PhoneNumber);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        label_8 = new QLabel(layoutWidget6);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_3->addWidget(label_8);

        dateEdit = new QDateEdit(layoutWidget6);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_3->addWidget(dateEdit);


        horizontalLayout_12->addLayout(horizontalLayout_3);

        widget = new QWidget(add_Team);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(91, 240, 401, 26));
        horizontalLayout_9 = new QHBoxLayout(widget);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_9->addWidget(label_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lineEdit_City = new QLineEdit(widget);
        lineEdit_City->setObjectName(QString::fromUtf8("lineEdit_City"));

        horizontalLayout_7->addWidget(lineEdit_City);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        lineEdit_State = new QLineEdit(widget);
        lineEdit_State->setObjectName(QString::fromUtf8("lineEdit_State"));

        horizontalLayout_2->addWidget(lineEdit_State);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        horizontalLayout_7->addLayout(horizontalLayout_2);


        horizontalLayout_9->addLayout(horizontalLayout_7);


        retranslateUi(add_Team);

        QMetaObject::connectSlotsByName(add_Team);
    } // setupUi

    void retranslateUi(QDialog *add_Team)
    {
        add_Team->setWindowTitle(QCoreApplication::translate("add_Team", "Dialog", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("add_Team", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:18pt; font-weight:600; color:#b80000;\">Fill out the form below to add a new team:</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("add_Team", "Capacity:", nullptr));
        label_10->setText(QCoreApplication::translate("add_Team", "Stadium Surface:", nullptr));
        radioButton_National->setText(QCoreApplication::translate("add_Team", "National", nullptr));
        radioButton_American->setText(QCoreApplication::translate("add_Team", "American", nullptr));
        label->setText(QCoreApplication::translate("add_Team", "Stadium Name:", nullptr));
        label_2->setText(QCoreApplication::translate("add_Team", "Team Name:", nullptr));
        label_3->setText(QCoreApplication::translate("add_Team", "Address:", nullptr));
        label_5->setText(QCoreApplication::translate("add_Team", "Zip Code:", nullptr));
        label_7->setText(QCoreApplication::translate("add_Team", "Phone Number:", nullptr));
        label_8->setText(QCoreApplication::translate("add_Team", "Date:", nullptr));
        label_4->setText(QCoreApplication::translate("add_Team", "City:", nullptr));
        label_6->setText(QCoreApplication::translate("add_Team", "State:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_Team: public Ui_add_Team {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_TEAM_H
