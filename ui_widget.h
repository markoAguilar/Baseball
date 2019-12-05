/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page_Menu;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_Menu;
    QPushButton *pushButton_Exit;
    QWidget *page_MainMenu;
    QLabel *label_3;
    QPushButton *pushButton_Major_League;
    QPushButton *pushButton_National_League;
    QPushButton *pushButton_American_League;
    QPushButton *pushButton_Custom_trip;
    QPushButton *pushButton_Update_Info;
    QPushButton *pushButton_ReturnToMenu;
    QWidget *page_Major;
    QTableWidget *tableWidget_Major;
    QPushButton *pushButton_ReturnToMain1;
    QPushButton *pushButton_DisplayMajorLeague;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_Major_Sort;
    QComboBox *comboBox_Major_Sort_Grass;
    QPushButton *pushButton_SelectMajor;
    QLabel *label_9;
    QComboBox *comboBox_PurchaseSouvenir;
    QPushButton *pushButton_Add_Purchase;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_10;
    QLineEdit *lineEdit_QuantityPurchase;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_11;
    QTextBrowser *textBrowser_Total_Purchase;
    QWidget *page_National;
    QTableWidget *tableWidget_National;
    QPushButton *pushButton_ReturnToMain2;
    QPushButton *pushButton_DisplayNationalLeague;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox_National_Sort;
    QComboBox *comboBox_National_Sort_Grass;
    QPushButton *pushButton_SelectNational;
    QLabel *label_14;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_12;
    QTextBrowser *textBrowser_Total_Purchase_2;
    QPushButton *pushButton_Add_Purchase_2;
    QComboBox *comboBox_PurchaseSouvenir_2;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_13;
    QLineEdit *lineEdit_QuantityPurchase_2;
    QWidget *page_American;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox_American_Sort;
    QComboBox *comboBox_American_Sort_Grass;
    QPushButton *pushButton_SelectAmerican;
    QPushButton *pushButton_ReturnToMain3;
    QTableWidget *tableWidget_American;
    QPushButton *pushButton_DisplayAmericanLeague;
    QLabel *label_17;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_16;
    QLineEdit *lineEdit_QuantityPurchase_3;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_15;
    QTextBrowser *textBrowser_Total_Purchase_3;
    QPushButton *pushButton_Add_Purchase_3;
    QComboBox *comboBox_PurchaseSouvenir_3;
    QWidget *page_CustomTrip;
    QWidget *page_UpdateInfo;
    QPushButton *pushButton_AddNewTeam;
    QPushButton *pushButton_ModifyStadium;
    QPushButton *pushButton_SouvenirUpdate;
    QPushButton *pushButton_ReturnToMain4;
    QTextBrowser *textBrowser;
    QWidget *page_DisplayMapMajor;
    QPushButton *pushButton_ReturnToMajor;
    QLabel *label_MajorLeagueMap;
    QWidget *page_DisplayMapNational;
    QLabel *label_NationalLeagueMap;
    QPushButton *pushButton_ReturnToNational;
    QWidget *page_DisplayMapAmerican;
    QLabel *label_AmericanLeagueMap;
    QPushButton *pushButton_ReturnToAmerican;
    QWidget *page_AddNewTeam;
    QPushButton *pushButton_DisplayMajorLeague_Admin;
    QPushButton *pushButton_ReturnToAdminSelection;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *comboBox_Major_Sort_Admin;
    QComboBox *comboBox_Major_Sort_Grass_Admin;
    QPushButton *pushButton_SelectMajor_Admin;
    QTableWidget *tableWidget_Major_Admin;
    QPushButton *pushButton_AddTeam;
    QWidget *page_ModifyStadium;
    QTableWidget *tableWidget_Major_Admin_2;
    QPushButton *pushButton_ModifyInformation;
    QPushButton *pushButton_ReturnToAdminMenu;
    QLabel *label_4;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit_Search;
    QPushButton *pushButton_Search;
    QWidget *page_SouvenirUpdate;
    QTableWidget *tableWidget_Souvenir;
    QPushButton *pushButton_AddSouvenir;
    QPushButton *pushButton_DeleteSouvenir;
    QPushButton *pushButton_PriceChange;
    QPushButton *pushButton_ReturnToAdminMenu2;
    QComboBox *comboBox_CurrentSouvenir;
    QTextBrowser *textBrowser_SouvenirTitle;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *lineEdit_AddSouvenirName;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLineEdit *lineEdit_AddSouvenirPrice;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *lineEdit_DeleteSouvenir;
    QWidget *widget5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QLineEdit *lineEdit_PriceChange;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1181, 724);
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 0, 1161, 711));
        page_Menu = new QWidget();
        page_Menu->setObjectName(QString::fromUtf8("page_Menu"));
        label = new QLabel(page_Menu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, -50, 681, 231));
        label_2 = new QLabel(page_Menu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(420, 30, 541, 201));
        pushButton_Menu = new QPushButton(page_Menu);
        pushButton_Menu->setObjectName(QString::fromUtf8("pushButton_Menu"));
        pushButton_Menu->setGeometry(QRect(290, 290, 201, 101));
        pushButton_Exit = new QPushButton(page_Menu);
        pushButton_Exit->setObjectName(QString::fromUtf8("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(680, 290, 201, 101));
        stackedWidget->addWidget(page_Menu);
        page_MainMenu = new QWidget();
        page_MainMenu->setObjectName(QString::fromUtf8("page_MainMenu"));
        label_3 = new QLabel(page_MainMenu);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 20, 721, 91));
        pushButton_Major_League = new QPushButton(page_MainMenu);
        pushButton_Major_League->setObjectName(QString::fromUtf8("pushButton_Major_League"));
        pushButton_Major_League->setGeometry(QRect(250, 240, 271, 81));
        pushButton_National_League = new QPushButton(page_MainMenu);
        pushButton_National_League->setObjectName(QString::fromUtf8("pushButton_National_League"));
        pushButton_National_League->setGeometry(QRect(630, 240, 271, 81));
        pushButton_American_League = new QPushButton(page_MainMenu);
        pushButton_American_League->setObjectName(QString::fromUtf8("pushButton_American_League"));
        pushButton_American_League->setGeometry(QRect(250, 370, 271, 81));
        pushButton_Custom_trip = new QPushButton(page_MainMenu);
        pushButton_Custom_trip->setObjectName(QString::fromUtf8("pushButton_Custom_trip"));
        pushButton_Custom_trip->setGeometry(QRect(630, 370, 271, 81));
        pushButton_Update_Info = new QPushButton(page_MainMenu);
        pushButton_Update_Info->setObjectName(QString::fromUtf8("pushButton_Update_Info"));
        pushButton_Update_Info->setGeometry(QRect(250, 500, 271, 81));
        pushButton_ReturnToMenu = new QPushButton(page_MainMenu);
        pushButton_ReturnToMenu->setObjectName(QString::fromUtf8("pushButton_ReturnToMenu"));
        pushButton_ReturnToMenu->setGeometry(QRect(630, 500, 271, 81));
        stackedWidget->addWidget(page_MainMenu);
        page_Major = new QWidget();
        page_Major->setObjectName(QString::fromUtf8("page_Major"));
        tableWidget_Major = new QTableWidget(page_Major);
        tableWidget_Major->setObjectName(QString::fromUtf8("tableWidget_Major"));
        tableWidget_Major->setGeometry(QRect(0, 50, 971, 661));
        pushButton_ReturnToMain1 = new QPushButton(page_Major);
        pushButton_ReturnToMain1->setObjectName(QString::fromUtf8("pushButton_ReturnToMain1"));
        pushButton_ReturnToMain1->setGeometry(QRect(980, 650, 151, 61));
        pushButton_DisplayMajorLeague = new QPushButton(page_Major);
        pushButton_DisplayMajorLeague->setObjectName(QString::fromUtf8("pushButton_DisplayMajorLeague"));
        pushButton_DisplayMajorLeague->setGeometry(QRect(980, 60, 151, 61));
        layoutWidget = new QWidget(page_Major);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 391, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox_Major_Sort = new QComboBox(layoutWidget);
        comboBox_Major_Sort->setObjectName(QString::fromUtf8("comboBox_Major_Sort"));

        horizontalLayout->addWidget(comboBox_Major_Sort);

        comboBox_Major_Sort_Grass = new QComboBox(layoutWidget);
        comboBox_Major_Sort_Grass->setObjectName(QString::fromUtf8("comboBox_Major_Sort_Grass"));

        horizontalLayout->addWidget(comboBox_Major_Sort_Grass);

        pushButton_SelectMajor = new QPushButton(layoutWidget);
        pushButton_SelectMajor->setObjectName(QString::fromUtf8("pushButton_SelectMajor"));

        horizontalLayout->addWidget(pushButton_SelectMajor);

        label_9 = new QLabel(page_Major);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(980, 160, 151, 41));
        comboBox_PurchaseSouvenir = new QComboBox(page_Major);
        comboBox_PurchaseSouvenir->setObjectName(QString::fromUtf8("comboBox_PurchaseSouvenir"));
        comboBox_PurchaseSouvenir->setGeometry(QRect(980, 200, 151, 22));
        pushButton_Add_Purchase = new QPushButton(page_Major);
        pushButton_Add_Purchase->setObjectName(QString::fromUtf8("pushButton_Add_Purchase"));
        pushButton_Add_Purchase->setGeometry(QRect(980, 310, 151, 41));
        widget = new QWidget(page_Major);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(980, 240, 151, 41));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout->addWidget(label_10);

        lineEdit_QuantityPurchase = new QLineEdit(widget);
        lineEdit_QuantityPurchase->setObjectName(QString::fromUtf8("lineEdit_QuantityPurchase"));

        verticalLayout->addWidget(lineEdit_QuantityPurchase);

        widget1 = new QWidget(page_Major);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(980, 360, 153, 52));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(widget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_2->addWidget(label_11);

        textBrowser_Total_Purchase = new QTextBrowser(widget1);
        textBrowser_Total_Purchase->setObjectName(QString::fromUtf8("textBrowser_Total_Purchase"));
        textBrowser_Total_Purchase->setMinimumSize(QSize(151, 31));
        textBrowser_Total_Purchase->setMaximumSize(QSize(151, 31));

        verticalLayout_2->addWidget(textBrowser_Total_Purchase);

        stackedWidget->addWidget(page_Major);
        page_National = new QWidget();
        page_National->setObjectName(QString::fromUtf8("page_National"));
        tableWidget_National = new QTableWidget(page_National);
        tableWidget_National->setObjectName(QString::fromUtf8("tableWidget_National"));
        tableWidget_National->setGeometry(QRect(0, 50, 971, 661));
        pushButton_ReturnToMain2 = new QPushButton(page_National);
        pushButton_ReturnToMain2->setObjectName(QString::fromUtf8("pushButton_ReturnToMain2"));
        pushButton_ReturnToMain2->setGeometry(QRect(980, 650, 151, 61));
        pushButton_DisplayNationalLeague = new QPushButton(page_National);
        pushButton_DisplayNationalLeague->setObjectName(QString::fromUtf8("pushButton_DisplayNationalLeague"));
        pushButton_DisplayNationalLeague->setGeometry(QRect(980, 60, 151, 61));
        layoutWidget1 = new QWidget(page_National);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 10, 391, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBox_National_Sort = new QComboBox(layoutWidget1);
        comboBox_National_Sort->setObjectName(QString::fromUtf8("comboBox_National_Sort"));

        horizontalLayout_2->addWidget(comboBox_National_Sort);

        comboBox_National_Sort_Grass = new QComboBox(layoutWidget1);
        comboBox_National_Sort_Grass->setObjectName(QString::fromUtf8("comboBox_National_Sort_Grass"));

        horizontalLayout_2->addWidget(comboBox_National_Sort_Grass);

        pushButton_SelectNational = new QPushButton(layoutWidget1);
        pushButton_SelectNational->setObjectName(QString::fromUtf8("pushButton_SelectNational"));

        horizontalLayout_2->addWidget(pushButton_SelectNational);

        label_14 = new QLabel(page_National);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(980, 160, 151, 41));
        layoutWidget_4 = new QWidget(page_National);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(980, 360, 153, 52));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_3->addWidget(label_12);

        textBrowser_Total_Purchase_2 = new QTextBrowser(layoutWidget_4);
        textBrowser_Total_Purchase_2->setObjectName(QString::fromUtf8("textBrowser_Total_Purchase_2"));
        textBrowser_Total_Purchase_2->setMinimumSize(QSize(151, 31));
        textBrowser_Total_Purchase_2->setMaximumSize(QSize(151, 31));

        verticalLayout_3->addWidget(textBrowser_Total_Purchase_2);

        pushButton_Add_Purchase_2 = new QPushButton(page_National);
        pushButton_Add_Purchase_2->setObjectName(QString::fromUtf8("pushButton_Add_Purchase_2"));
        pushButton_Add_Purchase_2->setGeometry(QRect(980, 310, 151, 41));
        comboBox_PurchaseSouvenir_2 = new QComboBox(page_National);
        comboBox_PurchaseSouvenir_2->setObjectName(QString::fromUtf8("comboBox_PurchaseSouvenir_2"));
        comboBox_PurchaseSouvenir_2->setGeometry(QRect(980, 200, 151, 22));
        layoutWidget_5 = new QWidget(page_National);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(980, 240, 151, 41));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_4->addWidget(label_13);

        lineEdit_QuantityPurchase_2 = new QLineEdit(layoutWidget_5);
        lineEdit_QuantityPurchase_2->setObjectName(QString::fromUtf8("lineEdit_QuantityPurchase_2"));

        verticalLayout_4->addWidget(lineEdit_QuantityPurchase_2);

        stackedWidget->addWidget(page_National);
        page_American = new QWidget();
        page_American->setObjectName(QString::fromUtf8("page_American"));
        layoutWidget_2 = new QWidget(page_American);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 10, 391, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        comboBox_American_Sort = new QComboBox(layoutWidget_2);
        comboBox_American_Sort->setObjectName(QString::fromUtf8("comboBox_American_Sort"));

        horizontalLayout_3->addWidget(comboBox_American_Sort);

        comboBox_American_Sort_Grass = new QComboBox(layoutWidget_2);
        comboBox_American_Sort_Grass->setObjectName(QString::fromUtf8("comboBox_American_Sort_Grass"));

        horizontalLayout_3->addWidget(comboBox_American_Sort_Grass);

        pushButton_SelectAmerican = new QPushButton(layoutWidget_2);
        pushButton_SelectAmerican->setObjectName(QString::fromUtf8("pushButton_SelectAmerican"));

        horizontalLayout_3->addWidget(pushButton_SelectAmerican);

        pushButton_ReturnToMain3 = new QPushButton(page_American);
        pushButton_ReturnToMain3->setObjectName(QString::fromUtf8("pushButton_ReturnToMain3"));
        pushButton_ReturnToMain3->setGeometry(QRect(980, 650, 151, 61));
        tableWidget_American = new QTableWidget(page_American);
        tableWidget_American->setObjectName(QString::fromUtf8("tableWidget_American"));
        tableWidget_American->setGeometry(QRect(0, 50, 971, 661));
        pushButton_DisplayAmericanLeague = new QPushButton(page_American);
        pushButton_DisplayAmericanLeague->setObjectName(QString::fromUtf8("pushButton_DisplayAmericanLeague"));
        pushButton_DisplayAmericanLeague->setGeometry(QRect(980, 60, 151, 61));
        label_17 = new QLabel(page_American);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(980, 160, 151, 41));
        layoutWidget_7 = new QWidget(page_American);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(980, 240, 151, 41));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget_7);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_6->addWidget(label_16);

        lineEdit_QuantityPurchase_3 = new QLineEdit(layoutWidget_7);
        lineEdit_QuantityPurchase_3->setObjectName(QString::fromUtf8("lineEdit_QuantityPurchase_3"));

        verticalLayout_6->addWidget(lineEdit_QuantityPurchase_3);

        layoutWidget_6 = new QWidget(page_American);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(980, 360, 153, 52));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget_6);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_5->addWidget(label_15);

        textBrowser_Total_Purchase_3 = new QTextBrowser(layoutWidget_6);
        textBrowser_Total_Purchase_3->setObjectName(QString::fromUtf8("textBrowser_Total_Purchase_3"));
        textBrowser_Total_Purchase_3->setMinimumSize(QSize(151, 31));
        textBrowser_Total_Purchase_3->setMaximumSize(QSize(151, 31));

        verticalLayout_5->addWidget(textBrowser_Total_Purchase_3);

        pushButton_Add_Purchase_3 = new QPushButton(page_American);
        pushButton_Add_Purchase_3->setObjectName(QString::fromUtf8("pushButton_Add_Purchase_3"));
        pushButton_Add_Purchase_3->setGeometry(QRect(980, 310, 151, 41));
        comboBox_PurchaseSouvenir_3 = new QComboBox(page_American);
        comboBox_PurchaseSouvenir_3->setObjectName(QString::fromUtf8("comboBox_PurchaseSouvenir_3"));
        comboBox_PurchaseSouvenir_3->setGeometry(QRect(980, 200, 151, 22));
        stackedWidget->addWidget(page_American);
        page_CustomTrip = new QWidget();
        page_CustomTrip->setObjectName(QString::fromUtf8("page_CustomTrip"));
        stackedWidget->addWidget(page_CustomTrip);
        page_UpdateInfo = new QWidget();
        page_UpdateInfo->setObjectName(QString::fromUtf8("page_UpdateInfo"));
        pushButton_AddNewTeam = new QPushButton(page_UpdateInfo);
        pushButton_AddNewTeam->setObjectName(QString::fromUtf8("pushButton_AddNewTeam"));
        pushButton_AddNewTeam->setGeometry(QRect(310, 210, 191, 81));
        pushButton_ModifyStadium = new QPushButton(page_UpdateInfo);
        pushButton_ModifyStadium->setObjectName(QString::fromUtf8("pushButton_ModifyStadium"));
        pushButton_ModifyStadium->setGeometry(QRect(660, 210, 191, 81));
        pushButton_SouvenirUpdate = new QPushButton(page_UpdateInfo);
        pushButton_SouvenirUpdate->setObjectName(QString::fromUtf8("pushButton_SouvenirUpdate"));
        pushButton_SouvenirUpdate->setGeometry(QRect(310, 380, 191, 81));
        pushButton_ReturnToMain4 = new QPushButton(page_UpdateInfo);
        pushButton_ReturnToMain4->setObjectName(QString::fromUtf8("pushButton_ReturnToMain4"));
        pushButton_ReturnToMain4->setGeometry(QRect(660, 380, 191, 81));
        textBrowser = new QTextBrowser(page_UpdateInfo);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(260, 20, 641, 81));
        textBrowser->setMinimumSize(QSize(641, 81));
        textBrowser->setMaximumSize(QSize(641, 81));
        stackedWidget->addWidget(page_UpdateInfo);
        page_DisplayMapMajor = new QWidget();
        page_DisplayMapMajor->setObjectName(QString::fromUtf8("page_DisplayMapMajor"));
        pushButton_ReturnToMajor = new QPushButton(page_DisplayMapMajor);
        pushButton_ReturnToMajor->setObjectName(QString::fromUtf8("pushButton_ReturnToMajor"));
        pushButton_ReturnToMajor->setGeometry(QRect(610, 550, 161, 41));
        label_MajorLeagueMap = new QLabel(page_DisplayMapMajor);
        label_MajorLeagueMap->setObjectName(QString::fromUtf8("label_MajorLeagueMap"));
        label_MajorLeagueMap->setGeometry(QRect(30, 10, 741, 511));
        stackedWidget->addWidget(page_DisplayMapMajor);
        page_DisplayMapNational = new QWidget();
        page_DisplayMapNational->setObjectName(QString::fromUtf8("page_DisplayMapNational"));
        label_NationalLeagueMap = new QLabel(page_DisplayMapNational);
        label_NationalLeagueMap->setObjectName(QString::fromUtf8("label_NationalLeagueMap"));
        label_NationalLeagueMap->setGeometry(QRect(30, 10, 741, 511));
        pushButton_ReturnToNational = new QPushButton(page_DisplayMapNational);
        pushButton_ReturnToNational->setObjectName(QString::fromUtf8("pushButton_ReturnToNational"));
        pushButton_ReturnToNational->setGeometry(QRect(610, 550, 161, 41));
        stackedWidget->addWidget(page_DisplayMapNational);
        page_DisplayMapAmerican = new QWidget();
        page_DisplayMapAmerican->setObjectName(QString::fromUtf8("page_DisplayMapAmerican"));
        label_AmericanLeagueMap = new QLabel(page_DisplayMapAmerican);
        label_AmericanLeagueMap->setObjectName(QString::fromUtf8("label_AmericanLeagueMap"));
        label_AmericanLeagueMap->setGeometry(QRect(30, 10, 741, 511));
        pushButton_ReturnToAmerican = new QPushButton(page_DisplayMapAmerican);
        pushButton_ReturnToAmerican->setObjectName(QString::fromUtf8("pushButton_ReturnToAmerican"));
        pushButton_ReturnToAmerican->setGeometry(QRect(610, 550, 161, 41));
        stackedWidget->addWidget(page_DisplayMapAmerican);
        page_AddNewTeam = new QWidget();
        page_AddNewTeam->setObjectName(QString::fromUtf8("page_AddNewTeam"));
        pushButton_DisplayMajorLeague_Admin = new QPushButton(page_AddNewTeam);
        pushButton_DisplayMajorLeague_Admin->setObjectName(QString::fromUtf8("pushButton_DisplayMajorLeague_Admin"));
        pushButton_DisplayMajorLeague_Admin->setGeometry(QRect(980, 140, 151, 61));
        pushButton_ReturnToAdminSelection = new QPushButton(page_AddNewTeam);
        pushButton_ReturnToAdminSelection->setObjectName(QString::fromUtf8("pushButton_ReturnToAdminSelection"));
        pushButton_ReturnToAdminSelection->setGeometry(QRect(980, 650, 151, 61));
        layoutWidget_3 = new QWidget(page_AddNewTeam);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(0, 10, 391, 30));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        comboBox_Major_Sort_Admin = new QComboBox(layoutWidget_3);
        comboBox_Major_Sort_Admin->setObjectName(QString::fromUtf8("comboBox_Major_Sort_Admin"));

        horizontalLayout_4->addWidget(comboBox_Major_Sort_Admin);

        comboBox_Major_Sort_Grass_Admin = new QComboBox(layoutWidget_3);
        comboBox_Major_Sort_Grass_Admin->setObjectName(QString::fromUtf8("comboBox_Major_Sort_Grass_Admin"));

        horizontalLayout_4->addWidget(comboBox_Major_Sort_Grass_Admin);

        pushButton_SelectMajor_Admin = new QPushButton(layoutWidget_3);
        pushButton_SelectMajor_Admin->setObjectName(QString::fromUtf8("pushButton_SelectMajor_Admin"));

        horizontalLayout_4->addWidget(pushButton_SelectMajor_Admin);

        tableWidget_Major_Admin = new QTableWidget(page_AddNewTeam);
        tableWidget_Major_Admin->setObjectName(QString::fromUtf8("tableWidget_Major_Admin"));
        tableWidget_Major_Admin->setGeometry(QRect(0, 50, 971, 661));
        pushButton_AddTeam = new QPushButton(page_AddNewTeam);
        pushButton_AddTeam->setObjectName(QString::fromUtf8("pushButton_AddTeam"));
        pushButton_AddTeam->setGeometry(QRect(980, 60, 151, 61));
        stackedWidget->addWidget(page_AddNewTeam);
        page_ModifyStadium = new QWidget();
        page_ModifyStadium->setObjectName(QString::fromUtf8("page_ModifyStadium"));
        tableWidget_Major_Admin_2 = new QTableWidget(page_ModifyStadium);
        tableWidget_Major_Admin_2->setObjectName(QString::fromUtf8("tableWidget_Major_Admin_2"));
        tableWidget_Major_Admin_2->setGeometry(QRect(10, 40, 1141, 601));
        pushButton_ModifyInformation = new QPushButton(page_ModifyStadium);
        pushButton_ModifyInformation->setObjectName(QString::fromUtf8("pushButton_ModifyInformation"));
        pushButton_ModifyInformation->setGeometry(QRect(10, 650, 161, 51));
        pushButton_ReturnToAdminMenu = new QPushButton(page_ModifyStadium);
        pushButton_ReturnToAdminMenu->setObjectName(QString::fromUtf8("pushButton_ReturnToAdminMenu"));
        pushButton_ReturnToAdminMenu->setGeometry(QRect(990, 650, 161, 51));
        label_4 = new QLabel(page_ModifyStadium);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(340, 12, 811, 21));
        layoutWidget2 = new QWidget(page_ModifyStadium);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 10, 311, 25));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        lineEdit_Search = new QLineEdit(layoutWidget2);
        lineEdit_Search->setObjectName(QString::fromUtf8("lineEdit_Search"));

        horizontalLayout_5->addWidget(lineEdit_Search);

        pushButton_Search = new QPushButton(layoutWidget2);
        pushButton_Search->setObjectName(QString::fromUtf8("pushButton_Search"));

        horizontalLayout_5->addWidget(pushButton_Search);

        stackedWidget->addWidget(page_ModifyStadium);
        page_SouvenirUpdate = new QWidget();
        page_SouvenirUpdate->setObjectName(QString::fromUtf8("page_SouvenirUpdate"));
        tableWidget_Souvenir = new QTableWidget(page_SouvenirUpdate);
        tableWidget_Souvenir->setObjectName(QString::fromUtf8("tableWidget_Souvenir"));
        tableWidget_Souvenir->setGeometry(QRect(70, 70, 461, 591));
        pushButton_AddSouvenir = new QPushButton(page_SouvenirUpdate);
        pushButton_AddSouvenir->setObjectName(QString::fromUtf8("pushButton_AddSouvenir"));
        pushButton_AddSouvenir->setGeometry(QRect(810, 150, 121, 31));
        pushButton_DeleteSouvenir = new QPushButton(page_SouvenirUpdate);
        pushButton_DeleteSouvenir->setObjectName(QString::fromUtf8("pushButton_DeleteSouvenir"));
        pushButton_DeleteSouvenir->setGeometry(QRect(810, 290, 121, 31));
        pushButton_PriceChange = new QPushButton(page_SouvenirUpdate);
        pushButton_PriceChange->setObjectName(QString::fromUtf8("pushButton_PriceChange"));
        pushButton_PriceChange->setGeometry(QRect(800, 460, 131, 31));
        pushButton_ReturnToAdminMenu2 = new QPushButton(page_SouvenirUpdate);
        pushButton_ReturnToAdminMenu2->setObjectName(QString::fromUtf8("pushButton_ReturnToAdminMenu2"));
        pushButton_ReturnToAdminMenu2->setGeometry(QRect(640, 580, 291, 71));
        comboBox_CurrentSouvenir = new QComboBox(page_SouvenirUpdate);
        comboBox_CurrentSouvenir->setObjectName(QString::fromUtf8("comboBox_CurrentSouvenir"));
        comboBox_CurrentSouvenir->setGeometry(QRect(640, 380, 291, 22));
        textBrowser_SouvenirTitle = new QTextBrowser(page_SouvenirUpdate);
        textBrowser_SouvenirTitle->setObjectName(QString::fromUtf8("textBrowser_SouvenirTitle"));
        textBrowser_SouvenirTitle->setGeometry(QRect(240, 10, 651, 51));
        textBrowser_SouvenirTitle->setMinimumSize(QSize(651, 51));
        textBrowser_SouvenirTitle->setMaximumSize(QSize(651, 51));
        widget2 = new QWidget(page_SouvenirUpdate);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(640, 80, 291, 22));
        horizontalLayout_6 = new QHBoxLayout(widget2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        lineEdit_AddSouvenirName = new QLineEdit(widget2);
        lineEdit_AddSouvenirName->setObjectName(QString::fromUtf8("lineEdit_AddSouvenirName"));

        horizontalLayout_6->addWidget(lineEdit_AddSouvenirName);

        widget3 = new QWidget(page_SouvenirUpdate);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(640, 110, 291, 22));
        horizontalLayout_7 = new QHBoxLayout(widget3);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);

        lineEdit_AddSouvenirPrice = new QLineEdit(widget3);
        lineEdit_AddSouvenirPrice->setObjectName(QString::fromUtf8("lineEdit_AddSouvenirPrice"));

        horizontalLayout_7->addWidget(lineEdit_AddSouvenirPrice);

        widget4 = new QWidget(page_SouvenirUpdate);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(640, 250, 291, 22));
        horizontalLayout_8 = new QHBoxLayout(widget4);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_8->addWidget(label_7);

        lineEdit_DeleteSouvenir = new QLineEdit(widget4);
        lineEdit_DeleteSouvenir->setObjectName(QString::fromUtf8("lineEdit_DeleteSouvenir"));

        horizontalLayout_8->addWidget(lineEdit_DeleteSouvenir);

        widget5 = new QWidget(page_SouvenirUpdate);
        widget5->setObjectName(QString::fromUtf8("widget5"));
        widget5->setGeometry(QRect(640, 420, 291, 22));
        horizontalLayout_9 = new QHBoxLayout(widget5);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget5);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_9->addWidget(label_8);

        lineEdit_PriceChange = new QLineEdit(widget5);
        lineEdit_PriceChange->setObjectName(QString::fromUtf8("lineEdit_PriceChange"));

        horizontalLayout_9->addWidget(lineEdit_PriceChange);

        stackedWidget->addWidget(page_SouvenirUpdate);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        pushButton_Menu->setText(QCoreApplication::translate("Widget", "Menu", nullptr));
        pushButton_Exit->setText(QCoreApplication::translate("Widget", "Exit", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Main Menu Options:", nullptr));
        pushButton_Major_League->setText(QCoreApplication::translate("Widget", "Major League", nullptr));
        pushButton_National_League->setText(QCoreApplication::translate("Widget", "National League", nullptr));
        pushButton_American_League->setText(QCoreApplication::translate("Widget", "American League", nullptr));
        pushButton_Custom_trip->setText(QCoreApplication::translate("Widget", "Custom Trip", nullptr));
        pushButton_Update_Info->setText(QCoreApplication::translate("Widget", "Update Information", nullptr));
        pushButton_ReturnToMenu->setText(QCoreApplication::translate("Widget", "Return To Menu", nullptr));
        pushButton_ReturnToMain1->setText(QCoreApplication::translate("Widget", "Return To Main Menu", nullptr));
        pushButton_DisplayMajorLeague->setText(QCoreApplication::translate("Widget", "Display Map", nullptr));
        pushButton_SelectMajor->setText(QCoreApplication::translate("Widget", "Select", nullptr));
        label_9->setText(QCoreApplication::translate("Widget", "Souvenir Purchase:", nullptr));
        pushButton_Add_Purchase->setText(QCoreApplication::translate("Widget", "Add Purchase", nullptr));
        label_10->setText(QCoreApplication::translate("Widget", "Quantity:", nullptr));
        label_11->setText(QCoreApplication::translate("Widget", "Total Purchase:", nullptr));
        pushButton_ReturnToMain2->setText(QCoreApplication::translate("Widget", "Return To Main Menu", nullptr));
        pushButton_DisplayNationalLeague->setText(QCoreApplication::translate("Widget", "Display Map", nullptr));
        pushButton_SelectNational->setText(QCoreApplication::translate("Widget", "Select", nullptr));
        label_14->setText(QCoreApplication::translate("Widget", "Souvenir Purchase:", nullptr));
        label_12->setText(QCoreApplication::translate("Widget", "Total Purchase:", nullptr));
        pushButton_Add_Purchase_2->setText(QCoreApplication::translate("Widget", "Add Purchase", nullptr));
        label_13->setText(QCoreApplication::translate("Widget", "Quantity:", nullptr));
        pushButton_SelectAmerican->setText(QCoreApplication::translate("Widget", "Select", nullptr));
        pushButton_ReturnToMain3->setText(QCoreApplication::translate("Widget", "Return To Main Menu", nullptr));
        pushButton_DisplayAmericanLeague->setText(QCoreApplication::translate("Widget", "Display Map", nullptr));
        label_17->setText(QCoreApplication::translate("Widget", "Souvenir Purchase:", nullptr));
        label_16->setText(QCoreApplication::translate("Widget", "Quantity:", nullptr));
        label_15->setText(QCoreApplication::translate("Widget", "Total Purchase:", nullptr));
        pushButton_Add_Purchase_3->setText(QCoreApplication::translate("Widget", "Add Purchase", nullptr));
        pushButton_AddNewTeam->setText(QCoreApplication::translate("Widget", "ADD NEW TEAM", nullptr));
        pushButton_ModifyStadium->setText(QCoreApplication::translate("Widget", "STADIUM UPDATE", nullptr));
        pushButton_SouvenirUpdate->setText(QCoreApplication::translate("Widget", "SOUVERNIR CHANGE", nullptr));
        pushButton_ReturnToMain4->setText(QCoreApplication::translate("Widget", "RETURN TO MENU", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:6.6pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:20pt; font-weight:600; font-style:italic; color:#0055ff;\">Welcome Admin! Please Pick An Option Below.</span></p></body></html>", nullptr));
        pushButton_ReturnToMajor->setText(QCoreApplication::translate("Widget", "Return To Previous Menu", nullptr));
        label_MajorLeagueMap->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_NationalLeagueMap->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        pushButton_ReturnToNational->setText(QCoreApplication::translate("Widget", "Return To Previous Menu", nullptr));
        label_AmericanLeagueMap->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        pushButton_ReturnToAmerican->setText(QCoreApplication::translate("Widget", "Return To Previous Menu", nullptr));
        pushButton_DisplayMajorLeague_Admin->setText(QCoreApplication::translate("Widget", "Display Map", nullptr));
        pushButton_ReturnToAdminSelection->setText(QCoreApplication::translate("Widget", "Return To Admin Menu", nullptr));
        pushButton_SelectMajor_Admin->setText(QCoreApplication::translate("Widget", "Select", nullptr));
        pushButton_AddTeam->setText(QCoreApplication::translate("Widget", "Add New Team", nullptr));
        pushButton_ModifyInformation->setText(QCoreApplication::translate("Widget", "Modify", nullptr));
        pushButton_ReturnToAdminMenu->setText(QCoreApplication::translate("Widget", "Return To Admin Menu", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "Please Select The Row (One At A Time) Then Click Modify To Update Stadium Information:", nullptr));
        pushButton_Search->setText(QCoreApplication::translate("Widget", "Search", nullptr));
        pushButton_AddSouvenir->setText(QCoreApplication::translate("Widget", "ADD SOUVENIR", nullptr));
        pushButton_DeleteSouvenir->setText(QCoreApplication::translate("Widget", "DELETE SOUVENIR", nullptr));
        pushButton_PriceChange->setText(QCoreApplication::translate("Widget", "PRICE CHANGE", nullptr));
        pushButton_ReturnToAdminMenu2->setText(QCoreApplication::translate("Widget", "RETURN TO ADMIN MENU", nullptr));
        textBrowser_SouvenirTitle->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:24pt; font-weight:600; color:#64e9f7;\">Souvenir Update:</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "Item Name", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "Item Price", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "Item Name", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "Item Price", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
