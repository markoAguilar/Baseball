#include "widget.h"
#include "ui_widget.h"
#include "stadium.h"
#include "stadium_container.h"
#include "files.h"
#include <string>
#include <QLabel>
#include <QtCore>
#include <QtGui>
#include <QColor>
#include <QMessageBox>
#include <QFormLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("Baseball Vacation");

    QString fullpath;
    QStringList title1;

    QFont font = ui->pushButton_Menu->font();
    font.setPointSize(16);

    ui->pushButton_Menu->setFont(font);
    ui->pushButton_Exit->setFont(font);

    font.setPointSize(32);
    font.setBold(true);
    ui->label_3->setFont(font);
    ui->label_3->setAlignment(Qt::AlignCenter);
    ui->label_3->setStyleSheet("QLabel {background-color: rgba(0,0,0,0%); color: cyan;}");

    font.setPointSize(12);
    ui->label_4->setFont(font);
    ui->label_4->setStyleSheet("QLabel {background-color: rgba(0,0,0,0%); color: cyan;}");

    QString background_path = QApplication::applicationDirPath() + "/Baseball_Background.png";
    QPixmap background(background_path);
    background = background.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, background);
    this->setPalette(palette);

    QPixmap title(QApplication::applicationDirPath() + "/Baseball_Title.png");
    ui->label->setScaledContents(true);
    ui->label->setPixmap(title);

    QPixmap title_vacation(QApplication::applicationDirPath() + "/large_vacation_time_title.png");
    ui->label_2->setScaledContents(true);
    ui->label_2->setPixmap(title_vacation);

    ui->comboBox_Major_Sort->addItem("Sort By");
    ui->comboBox_Major_Sort->addItem("Stadium Name");
    ui->comboBox_Major_Sort->addItem("Team Name");
    ui->comboBox_Major_Sort->addItem("Date Open");

    ui->comboBox_Major_Sort_Grass->addItem("Grass Type");
    ui->comboBox_Major_Sort_Grass->addItem("Real Grass");
    ui->comboBox_Major_Sort_Grass->addItem("Artificial Grass");

    ui->comboBox_National_Sort->addItem("Sort By");
    ui->comboBox_National_Sort->addItem("Stadium Name");
    ui->comboBox_National_Sort->addItem("Team Name");
    ui->comboBox_National_Sort->addItem("Date Open");

    ui->comboBox_National_Sort_Grass->addItem("Grass Type");
    ui->comboBox_National_Sort_Grass->addItem("Real Grass");
    ui->comboBox_National_Sort_Grass->addItem("Artificial Grass");

    ui->comboBox_American_Sort->addItem("Sort By");
    ui->comboBox_American_Sort->addItem("Stadium Name");
    ui->comboBox_American_Sort->addItem("Team Name");
    ui->comboBox_American_Sort->addItem("Date Open");

    ui->comboBox_American_Sort_Grass->addItem("Grass Type");
    ui->comboBox_American_Sort_Grass->addItem("Real Grass");
    ui->comboBox_American_Sort_Grass->addItem("Artificial Grass");

    ui->comboBox_Major_Sort_Admin->addItem("Sort By");
    ui->comboBox_Major_Sort_Admin->addItem("Stadium Name");
    ui->comboBox_Major_Sort_Admin->addItem("Team Name");
    ui->comboBox_Major_Sort_Admin->addItem("Date Open");

    ui->comboBox_Major_Sort_Grass_Admin->addItem("Grass Type");
    ui->comboBox_Major_Sort_Grass_Admin->addItem("Real Grass");
    ui->comboBox_Major_Sort_Grass_Admin->addItem("Artificial Grass");


    QString format = "QPushButton {background-color: #A3C1DA; color: black;}";

    ui->pushButton_Menu->setStyleSheet(format);
    ui->pushButton_Exit->setStyleSheet(format);
    ui->pushButton_Major_League->setStyleSheet(format);
    ui->pushButton_National_League->setStyleSheet(format);
    ui->pushButton_American_League->setStyleSheet(format);
    ui->pushButton_Custom_trip->setStyleSheet(format);
    ui->pushButton_Update_Info->setStyleSheet(format);
    ui->pushButton_ReturnToMenu->setStyleSheet(format);
    ui->pushButton_SelectMajor->setStyleSheet(format);
    ui->pushButton_DisplayMajorLeague->setStyleSheet(format);
    ui->pushButton_ReturnToMain1->setStyleSheet(format);
    ui->pushButton_ReturnToMajor->setStyleSheet(format);
    ui->pushButton_SelectNational->setStyleSheet(format);
    ui->pushButton_DisplayNationalLeague->setStyleSheet(format);
    ui->pushButton_ReturnToMain2->setStyleSheet(format);
    ui->pushButton_ReturnToNational->setStyleSheet(format);
    ui->pushButton_SelectAmerican->setStyleSheet(format);
    ui->pushButton_DisplayAmericanLeague->setStyleSheet(format);
    ui->pushButton_ReturnToMain3->setStyleSheet(format);
    ui->pushButton_ReturnToAmerican->setStyleSheet(format);
    ui->pushButton_AddNewTeam->setStyleSheet(format);
    ui->pushButton_ModifyStadium->setStyleSheet(format);
    ui->pushButton_SouvenirUpdate->setStyleSheet(format);
    ui->pushButton_ReturnToMain4->setStyleSheet(format);

    font.setPointSize(14);
    ui->pushButton_Menu->setFont(font);
    ui->pushButton_Exit->setFont(font);
    ui->pushButton_Major_League->setFont(font);
    ui->pushButton_National_League->setFont(font);
    ui->pushButton_American_League->setFont(font);
    ui->pushButton_Custom_trip->setFont(font);
    ui->pushButton_Update_Info->setFont(font);
    ui->pushButton_ReturnToMenu->setFont(font);

    font.setPointSize(10);
    ui->pushButton_AddNewTeam->setFont(font);
    ui->pushButton_ModifyStadium->setFont(font);
    ui->pushButton_SouvenirUpdate->setFont(font);
    ui->pushButton_ReturnToMain4->setFont(font);

    font.setPointSize(16);
    ui->textBrowser->setFont(font);

    ui->textBrowser->setAlignment(Qt::AlignCenter);

    ui->tableWidget_Major->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_Major->horizontalHeader()->setFrameStyle(QFrame::Box | QFrame::Plain);
    ui->tableWidget_Major->setLineWidth(2);
    ui->tableWidget_Major->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget_Major->setColumnCount(7);
    title1 << "Stadium Name" << "Team Name" << "Address" << "Box Office" << "Date Opened" <<"Seat Capacity" << "Grass Type";
    ui->tableWidget_Major->setHorizontalHeaderLabels(title1);

    ui->tableWidget_National->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_National->horizontalHeader()->setFrameStyle(QFrame::Box | QFrame::Plain);
    ui->tableWidget_National->setLineWidth(2);
    ui->tableWidget_National->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget_National->setColumnCount(7);
    ui->tableWidget_National->setHorizontalHeaderLabels(title1);

    ui->tableWidget_American->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_American->horizontalHeader()->setFrameStyle(QFrame::Box | QFrame::Plain);
    ui->tableWidget_American->setLineWidth(2);
    ui->tableWidget_American->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget_American->setColumnCount(7);
    ui->tableWidget_American->setHorizontalHeaderLabels(title1);

    ui->tableWidget_Major_Admin->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_Major_Admin->horizontalHeader()->setFrameStyle(QFrame::Box | QFrame::Plain);
    ui->tableWidget_Major_Admin->setLineWidth(2);
    ui->tableWidget_Major_Admin->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget_Major_Admin->setColumnCount(7);
    ui->tableWidget_Major_Admin->setHorizontalHeaderLabels(title1);

    ui->tableWidget_Major_Admin_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_Major_Admin_2->horizontalHeader()->setFrameStyle(QFrame::Box | QFrame::Plain);
    ui->tableWidget_Major_Admin_2->setLineWidth(2);
    ui->tableWidget_Major_Admin_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget_Major_Admin_2->setColumnCount(7);
    ui->tableWidget_Major_Admin_2->setHorizontalHeaderLabels(title1);


    fullpath = QApplication::applicationDirPath() + "/data.txt";
    importStadium(fullpath, stadium);

}

Widget::~Widget()
{
    delete ui;
}

//void Widget::on_pushButton_clicked()
//{

//    ui->stackedWidget->setCurrentIndex(1);
//    QString fullpath = QApplication::applicationDirPath() + "/Major_League_Baseball_team_locations.png";

//    img_Object = new QImage();
//    img_Object->load(fullpath);
//    QPixmap image = QPixmap::fromImage(*img_Object);
//    QPixmap pixmap = image.scaledToHeight(ui->graphicsView->height(), Qt::SmoothTransformation);
//    QFile file(fullpath);
//    file.open(QIODevice::WriteOnly);
//    pixmap.save(&file, "PNG");

//    QPainter painter(&pixmap);
//    QPen Red((QColor(255,0,0)),1);
//    Red.setWidth(2);
//    painter.setPen(Red);
//    painter.drawLine(77,52,241,201);
//    QPen redPen (Qt::red);
//    redPen.setWidth(1);

//    scene = new QGraphicsScene();
//    scene->addPixmap(pixmap);
//    scene->addLine(75,50,244,204, redPen);
//    ui->graphicsView->setScene(scene);
//    ui->graphicsView->setSceneRect(pixmap.rect());
//    ui->graphicsView->fitInView(scene->itemsBoundingRect(), Qt::KeepAspectRatio);
//}


void Widget::on_pushButton_Menu_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Widget::on_pushButton_Exit_clicked()
{
    close();
}

void Widget::on_pushButton_Major_League_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    DisplayTable_MajorLeague();
}

void Widget::on_pushButton_National_League_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    DisplayTable_NationalLeague();
}

void Widget::on_pushButton_American_League_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    DisplayTable_AmericanLeague();
}

void Widget::on_pushButton_Custom_trip_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void Widget::on_pushButton_Update_Info_clicked()
{
    int count = 3;
    bool correct = false;

    while(count != 0 && count != -1 && count > -2) {
        admin_Login = new login(this);
        admin_Login->exec();
        count -= admin_Login->getCount();
        QString username = admin_Login->getName();
        QString password = admin_Login->getPass();
        if (username == "admin" && password == "admin" && count > -2) {
            count = 0;
            correct = true;
            admin_Login->close();
            ui->stackedWidget->setCurrentIndex(6);
        }
        else if (count != 0 && count != -1 && count > -2)
            QMessageBox::warning(this, "Invalid Username or ID", "You have " + QString::number(count) + " attempt left.");
        }

    if (count == 0 && correct == false) {
        QMessageBox::information(this, "Invalid Input", "You have exceeded your attempt to login.");
        ui->stackedWidget->setCurrentIndex(1);
    }

    else if (count == -1) {
        ui->stackedWidget->setCurrentIndex(1);
    }
}

void Widget::on_pushButton_ReturnToMenu_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Widget::on_pushButton_SelectMajor_clicked()
{
    switch (ui->comboBox_Major_Sort->currentIndex()) {
        case 0: switch (ui->comboBox_Major_Sort_Grass->currentIndex()) {
            case 0: DisplayTable_MajorLeague();
                break;
            case 1: DisplayTable_MajorLeagueRealGrass();
                break;
            case 2: DisplayTable_MajorLeagueArtifGrass();
                break;
        } break;

        case 1: switch (ui->comboBox_Major_Sort_Grass->currentIndex()) {
            case 0: DisplayTable_MajorLeagueStadiumName();
                    break;
            case 1: DisplayTable_MajorLeagueStadiumRealGrass();
                    break;
            case 2: DisplayTable_MajorLeagueStadiumArtifGrass();
                    break;
        } break;

        case 2: switch (ui->comboBox_Major_Sort_Grass->currentIndex()) {
            case 0: DisplayTable_MajorLeageTeamName();
                    break;
            case 1: DisplayTable_MajorLeagueTeamRealGrass();
                    break;
            case 2: DisplayTable_MajorLeagueTeamArtifGrass();
                    break;
        } break;

        case 3: switch (ui->comboBox_Major_Sort_Grass->currentIndex()) {
            case 0: DisplayTable_MajorLeagueDateOpen();
                    break;
            case 1: DisplayTable_MajorLeagueDateRealGrass();
                    break;
            case 2: DisplayTable_MajorLeagueDateArtifGrass();
                    break;
        } break;
    }
}

void Widget::on_pushButton_ReturnToMain1_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Widget::on_pushButton_DisplayMajorLeague_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
        QString fullpath = QApplication::applicationDirPath() + "/Major_League_Baseball_team_locations.png";

        QPixmap pixmap = fullpath;
        QFile file(fullpath);
        file.open(QIODevice::WriteOnly);
        pixmap.save(&file, "PNG");

        QPainter painter(&pixmap);
        QPen Red((QColor(255,0,0)),1);
        Red.setWidth(2);
        painter.setPen(Red);
        painter.drawLine(75,322,466,154);
        QPen redPen (Qt::red);
        redPen.setWidth(1);

        ui->label_MajorLeagueMap->setScaledContents(true);
        ui->label_MajorLeagueMap->setPixmap(pixmap);

}

void Widget::on_pushButton_ReturnToMajor_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void Widget::on_pushButton_SelectNational_clicked()
{
    switch (ui->comboBox_National_Sort->currentIndex()) {
        case 0: switch (ui->comboBox_National_Sort_Grass->currentIndex()) {
            case 0: DisplayTable_NationalLeague();
                break;
            case 1: DisplayTable_NationalLeagueRealGrass();
                break;
            case 2: DisplayTable_NationalLeagueArtifGrass();
                break;
        } break;

        case 1: switch (ui->comboBox_National_Sort_Grass->currentIndex()) {
            case 0: DisplayTable_NationalLeagueStadiumName();
                    break;
            case 1: DisplayTable_NationalLeagueStadiumRealGrass();
                    break;
            case 2: DisplayTable_NationalLeagueStadiumArtifGrass();
                    break;
        } break;

        case 2: switch (ui->comboBox_National_Sort_Grass->currentIndex()) {
            case 0: DisplayTable_NationalLeageTeamName();
                    break;
            case 1: DisplayTable_NationalLeagueTeamRealGrass();
                    break;
            case 2: DisplayTable_NationalLeagueTeamArtifGrass();
                    break;
        } break;

        case 3: switch (ui->comboBox_National_Sort_Grass->currentIndex()) {
            case 0: DisplayTable_NationalLeagueDateOpen();
                    break;
            case 1: DisplayTable_NationalLeagueDateRealGrass();
                    break;
            case 2: DisplayTable_NationalLeagueDateArtifGrass();
                    break;
        } break;
    }
}

void Widget::on_pushButton_ReturnToMain2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Widget::on_pushButton_DisplayNationalLeague_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
        QString fullpath = QApplication::applicationDirPath() + "/Major_League_Baseball_team_locations.png";

        QPixmap pixmap = fullpath;
        QFile file(fullpath);
        file.open(QIODevice::WriteOnly);
        pixmap.save(&file, "PNG");

        QPainter painter(&pixmap);
        QPen Red((QColor(255,0,0)),1);
        Red.setWidth(2);
        painter.setPen(Red);
        painter.drawLine(75,322,466,154);
        QPen redPen (Qt::red);
        redPen.setWidth(1);

        ui->label_NationalLeagueMap->setScaledContents(true);
        ui->label_NationalLeagueMap->setPixmap(pixmap);
}

void Widget::on_pushButton_ReturnToNational_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void Widget::on_pushButton_SelectAmerican_clicked()
{
    switch (ui->comboBox_American_Sort->currentIndex()) {
        case 0: switch (ui->comboBox_American_Sort_Grass->currentIndex()) {
            case 0: DisplayTable_AmericanLeague();
                break;
            case 1: DisplayTable_AmericanLeagueRealGrass();
                break;
            case 2: DisplayTable_AmericanLeagueArtifGrass();
                break;
        } break;

        case 1: switch (ui->comboBox_American_Sort_Grass->currentIndex()) {
            case 0: DisplayTable_AmericanLeagueStadiumName();
                    break;
            case 1: DisplayTable_AmericanLeagueStadiumRealGrass();
                    break;
            case 2: DisplayTable_AmericanLeagueStadiumArtifGrass();
                    break;
        } break;

        case 2: switch (ui->comboBox_American_Sort_Grass->currentIndex()) {
            case 0: DisplayTable_AmericanLeageTeamName();
                    break;
            case 1: DisplayTable_AmericanLeagueTeamRealGrass();
                    break;
            case 2: DisplayTable_AmericanLeagueTeamArtifGrass();
                    break;
        } break;

        case 3: switch (ui->comboBox_American_Sort_Grass->currentIndex()) {
            case 0: DisplayTable_AmericanLeagueDateOpen();
                    break;
            case 1: DisplayTable_AmericanLeagueDateRealGrass();
                    break;
            case 2: DisplayTable_AmericanLeagueDateArtifGrass();
                    break;
        } break;
    }
}

void Widget::on_pushButton_ReturnToMain3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Widget::on_pushButton_DisplayAmericanLeague_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
        QString fullpath = QApplication::applicationDirPath() + "/Major_League_Baseball_team_locations.png";

        QPixmap pixmap = fullpath;
        QFile file(fullpath);
        file.open(QIODevice::WriteOnly);
        pixmap.save(&file, "PNG");

        QPainter painter(&pixmap);
        QPen Red((QColor(255,0,0)),1);
        Red.setWidth(2);
        painter.setPen(Red);
        painter.drawLine(75,322,466,154);
        QPen redPen (Qt::red);
        redPen.setWidth(1);

        ui->label_AmericanLeagueMap->setScaledContents(true);
        ui->label_AmericanLeagueMap->setPixmap(pixmap);
}

void Widget::on_pushButton_ReturnToAmerican_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void Widget::on_pushButton_AddNewTeam_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
    DisplayTable_MajorLeague_Admin();
}

void Widget::on_pushButton_ModifyStadium_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
    DisplayTable_MajorLeague_Admin_2();
}

void Widget::on_pushButton_SouvenirUpdate_clicked()
{

}

void Widget::on_pushButton_ReturnToMain4_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Widget::on_pushButton_SelectMajor_Admin_clicked()
{
    switch (ui->comboBox_Major_Sort_Admin->currentIndex()) {
        case 0: switch (ui->comboBox_Major_Sort_Grass_Admin->currentIndex()) {
            case 0: DisplayTable_MajorLeague_Admin();
                break;
            case 1: DisplayTable_MajorLeagueRealGrass_Admin();
                break;
            case 2: DisplayTable_MajorLeagueArtifGrass_Admin();
                break;
        } break;

        case 1: switch (ui->comboBox_Major_Sort_Grass_Admin->currentIndex()) {
            case 0: DisplayTable_MajorLeagueStadiumName_Admin();
                    break;
            case 1: DisplayTable_MajorLeagueStadiumRealGrass_Admin();
                    break;
            case 2: DisplayTable_MajorLeagueStadiumArtifGrass_Admin();
                    break;
        } break;

        case 2: switch (ui->comboBox_Major_Sort_Grass_Admin->currentIndex()) {
            case 0: DisplayTable_MajorLeageTeamName_Admin();
                    break;
            case 1: DisplayTable_MajorLeagueTeamRealGrass_Admin();
                    break;
            case 2: DisplayTable_MajorLeagueTeamArtifGrass_Admin();
                    break;
        } break;

        case 3: switch (ui->comboBox_Major_Sort_Grass_Admin->currentIndex()) {
            case 0: DisplayTable_MajorLeagueDateOpen_Admin();
                    break;
            case 1: DisplayTable_MajorLeagueDateRealGrass_Admin();
                    break;
            case 2: DisplayTable_MajorLeagueDateArtifGrass_Admin();
                    break;
        } break;
    }
}

void Widget::on_pushButton_AddTeam_clicked()
{
    QString fullpath = QApplication::applicationDirPath() + "/data.txt";
    int currentCount, count;
    string stadiumLeague, stadiumName, teamName, address, city_state_zip, phone, date, capacity, surface;
    bool check, empty;

    check = false;
    empty = false;

    while (check != true) {

        add_NewTeam = new add_Team(this);
        add_NewTeam->exec();

        stadiumLeague = add_NewTeam->getStadiumLeague().toStdString();
        stadiumName = add_NewTeam->getStadiumName().toStdString();
        teamName = add_NewTeam->getTeamName().toStdString();
        address = add_NewTeam->getAddress().toStdString();
        city_state_zip = (add_NewTeam->getCity().toStdString() + ", "
                          + add_NewTeam->getState().toStdString() + " "
                          + add_NewTeam->getZip().toStdString());
        phone = add_NewTeam->getPhoneNumber().toStdString();
        date = add_NewTeam->getDate().toStdString();
        capacity = add_NewTeam->getCapacity().toStdString();
        surface = add_NewTeam->getSurface().toStdString();

        if (stadiumLeague != "" && stadiumName != "" && teamName != ""
                && address != "" && city_state_zip != "" && phone != ""
                && date != "" && capacity != "" && surface != "") {

            stadium.addStadium(stadiumLeague, stadiumName, teamName, address, city_state_zip, phone, date, capacity, surface, stadium);

            currentCount = stadium.getSize() - 1;

            if (QString::fromStdString(stadium[currentCount].get_grass_type()) == "Y") {
                count = ui->tableWidget_Major->rowCount();
                ui->tableWidget_Major->insertRow(ui->tableWidget_Major->rowCount());

                QTableWidgetItem * stadium_Name = new QTableWidgetItem(QString::fromStdString(stadium[currentCount].get_stadium_name()));
                QTableWidgetItem * team_Name = new QTableWidgetItem(QString::fromStdString(stadium[currentCount].get_team_name()));
                QTableWidgetItem * address = new QTableWidgetItem(QString::fromStdString(stadium[currentCount].get_street_address()) + "\n" +
                                                                 QString::fromStdString(stadium[currentCount].get_city_state_zip()));
                QTableWidgetItem * box_Office = new QTableWidgetItem(QString::fromStdString(stadium[currentCount].get_box_office()));
                QTableWidgetItem * date_Opened = new QTableWidgetItem(QString::fromStdString(stadium[currentCount].get_date_opened()));
                QTableWidgetItem * capacity = new QTableWidgetItem(QString::fromStdString(stadium[currentCount].get_seating_capacity()));
                QTableWidgetItem * grass_Type = new QTableWidgetItem("Real");


                stadium_Name->setTextAlignment(Qt::AlignCenter);
                team_Name->setTextAlignment(Qt::AlignCenter);
                address->setTextAlignment(Qt::AlignCenter);
                box_Office->setTextAlignment(Qt::AlignCenter);
                date_Opened->setTextAlignment(Qt::AlignCenter);
                capacity->setTextAlignment(Qt::AlignCenter);
                grass_Type->setTextAlignment(Qt::AlignCenter);

                ui->tableWidget_Major->setItem(count, STADIUM_NAME, stadium_Name);
                ui->tableWidget_Major->setItem(count, TEAM_NAME, team_Name);
                ui->tableWidget_Major->setItem(count, ADDRESS, address);
                ui->tableWidget_Major->setItem(count, BOX_OFFICE, box_Office);
                ui->tableWidget_Major->setItem(count, DATE_OPENED, date_Opened);
                ui->tableWidget_Major->setItem(count, CAPACITY, capacity);
                ui->tableWidget_Major->setItem(count, GRASS, grass_Type);
                ui->tableWidget_Major->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

                check = true;
            }
            else {
                count = ui->tableWidget_Major->rowCount();
                ui->tableWidget_Major->insertRow(ui->tableWidget_Major->rowCount());

                QTableWidgetItem * stadium_Name = new QTableWidgetItem(QString::fromStdString(stadium[currentCount].get_stadium_name()));
                QTableWidgetItem * team_Name = new QTableWidgetItem(QString::fromStdString(stadium[currentCount].get_team_name()));
                QTableWidgetItem * address = new QTableWidgetItem(QString::fromStdString(stadium[currentCount].get_street_address()) + "\n" +
                                                                 QString::fromStdString(stadium[currentCount].get_city_state_zip()));
                QTableWidgetItem * box_Office = new QTableWidgetItem(QString::fromStdString(stadium[currentCount].get_box_office()));
                QTableWidgetItem * date_Opened = new QTableWidgetItem(QString::fromStdString(stadium[currentCount].get_date_opened()));
                QTableWidgetItem * capacity = new QTableWidgetItem(QString::fromStdString(stadium[currentCount].get_seating_capacity()));
                QTableWidgetItem * grass_Type = new QTableWidgetItem("Artificial");


                stadium_Name->setTextAlignment(Qt::AlignCenter);
                team_Name->setTextAlignment(Qt::AlignCenter);
                address->setTextAlignment(Qt::AlignCenter);
                box_Office->setTextAlignment(Qt::AlignCenter);
                date_Opened->setTextAlignment(Qt::AlignCenter);
                capacity->setTextAlignment(Qt::AlignCenter);
                grass_Type->setTextAlignment(Qt::AlignCenter);

                ui->tableWidget_Major->setItem(count, STADIUM_NAME, stadium_Name);
                ui->tableWidget_Major->setItem(count, TEAM_NAME, team_Name);
                ui->tableWidget_Major->setItem(count, ADDRESS, address);
                ui->tableWidget_Major->setItem(count, BOX_OFFICE, box_Office);
                ui->tableWidget_Major->setItem(count, DATE_OPENED, date_Opened);
                ui->tableWidget_Major->setItem(count, CAPACITY, capacity);
                ui->tableWidget_Major->setItem(count, GRASS, grass_Type);
                ui->tableWidget_Major->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

                check = true;

            }
        }
        else if (checkInfo(add_NewTeam->getStadiumLeague(), add_NewTeam->getStadiumName(), add_NewTeam->getTeamName(),
                       add_NewTeam->getAddress(), add_NewTeam->getCity(), add_NewTeam->getState(), add_NewTeam->getZip(),
                       add_NewTeam->getPhoneNumber(), add_NewTeam->getCapacity(), add_NewTeam->getSurface()) == true) {
            check = true;
            empty = true;
        }
        else {
            QMessageBox::warning(this, "Invalid Input", "The some information is invalid or left blank.");
            stadiumLeague.clear();
            stadiumName.clear();
            teamName.clear();
            address.clear();
            city_state_zip.clear();
            phone.clear();
            date.clear();
            capacity.clear();
            surface.clear();
        }
    }

    if (check == true && empty == false) {
        saveStadium(fullpath, stadium);
        DisplayTable_MajorLeague_Admin();
    }
}

void Widget::on_pushButton_DisplayMajorLeague_Admin_clicked()
{

}

void Widget::on_pushButton_ReturnToAdminSelection_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void Widget::on_pushButton_Search_clicked()
{
    QString find_stadium;

    bool found = false;

    QString stadium_Name = ui->lineEdit_Search->text();

    if (stadium_Name == NULL) {

        QMessageBox::information(this, "SearchBar", "No Stadium Name Was Type In For Search.");

        DisplayTable_MajorLeague_Admin_2();

        return;

    }

    for (int i = 0; i < stadium.getSize(); i++) {

        find_stadium = ui->tableWidget_Major_Admin_2->item(i, STADIUM_NAME)->text();

        if (find_stadium.toLower().toStdString().find(stadium_Name.toLower().toStdString())!=std::string::npos) {
            ui->tableWidget_Major_Admin_2->setRowHidden(i, false);
            found = true;
        }
        else
            ui->tableWidget_Major_Admin_2->setRowHidden(i, true);

    }
    if (found != true) {
        QMessageBox::information(this, "SearchBar", "No Such Stadium Exist.");
        for (int j = 0; j < stadium.getSize(); j++) {
            ui->tableWidget_Major_Admin_2->setRowHidden(j, false);
        }
        ui->lineEdit_Search->clear();
    }

    ui->lineEdit_Search->clear();
}

void Widget::on_pushButton_ModifyInformation_clicked()
{
    QString fullpath = QApplication::applicationDirPath() + "/data.txt";
    QModelIndexList data;
    int count;
    QString checkStadiumName;
    QString stadiumLeague, stadiumName, teamName, address, city,
            state, zipcode, phone, date, capacity, surface, temp;
    string stadLeague_s, stadName_s, teamName_s, addr_s, city_state_zip_s, phone_s, date_s, capacity_s, surface_s;

    int comma, comma2, space;

    count = 0;

    data = ui->tableWidget_Major_Admin_2->selectionModel()->selectedRows();

    for (int i = 0; i < data.size(); i++) {
        checkStadiumName = data[i].data().toString();
    }

    if (checkStadiumName == NULL) {
        QMessageBox::warning(this, "Error", "No Selection Was Made.");
        return;
    }

    for (int i = 0; i < stadium.getSize(); i++) {
        if (stadium[i].get_stadium_name() == checkStadiumName.toStdString()) {
            stadiumLeague = QString::fromStdString(stadium[i].get_stadium_type());
            stadiumName = QString::fromStdString(stadium[i].get_stadium_name());
            teamName = QString::fromStdString(stadium[i].get_team_name());
            comma = QString::fromStdString(stadium[i].get_street_address()).indexOf(',');
            address = QString::fromStdString(stadium[i].get_street_address()).mid(0, comma - 1);
            comma = QString::fromStdString(stadium[i].get_city_state_zip()).indexOf(',');
            space = QString::fromStdString(stadium[i].get_city_state_zip()).indexOf(' ');
            temp = QString::fromStdString(stadium[i].get_city_state_zip());
            for (int i = 0; i < stadium[i].get_city_state_zip().size(); i++) {
                if (temp[i] == ',')
                    count++;
                if (count == 2) {
                    comma2 = i;
                }
            }
            if (count < 2) {
                city = QString::fromStdString(stadium[i].get_city_state_zip()).left(comma);
                state = QString::fromStdString(stadium[i].get_city_state_zip()).mid(comma + 2, 2);
                zipcode = QString::fromStdString(stadium[i].get_city_state_zip()).right(5);
            }
            else {
                city = QString::fromStdString(stadium[i].get_city_state_zip()).left(comma);
                state = QString::fromStdString(stadium[i].get_city_state_zip()).mid(space + 1, comma2);
                zipcode = QString::fromStdString(stadium[i].get_city_state_zip()).right(space - 2);
            }
            if (QString::fromStdString(stadium[i].get_box_office()).size() > 14) {
                phone = (QString::fromStdString(stadium[i].get_box_office()).mid(1, 1) + QString::fromStdString(stadium[i].get_box_office()).mid(3, 3)
                        + QString::fromStdString(stadium[i].get_box_office()).mid(7, 3)) + QString::fromStdString(stadium[i].get_box_office()).right(4);
            }
            else {
                phone = (QString::fromStdString(stadium[i].get_box_office()).mid(1, 3) + QString::fromStdString(stadium[i].get_box_office()).mid(6, 3)
                         + QString::fromStdString(stadium[i].get_box_office()).right(4));
            }
            date = QString::fromStdString(stadium[i].get_date_opened());
            comma = QString::fromStdString(stadium[i].get_seating_capacity()).indexOf(',');
            capacity = QString::fromStdString(stadium[i].get_seating_capacity()).mid(0, comma)
                    + QString::fromStdString(stadium[i].get_seating_capacity()).mid(comma + 1, int (stadium[i].get_seating_capacity().size() - 1));
            surface = QString::fromStdString(stadium[i].get_grass_type());

            update = new modifyInfo(this);
            update->setData(stadiumLeague, stadiumName, teamName, address, city, state, zipcode, phone, date, capacity, surface);
            update->exec();

            stadLeague_s = update->getStadiumLeague().toStdString();
            stadName_s = update->getStadiumName().toStdString();
            teamName_s = update->getTeamName().toStdString();
            addr_s = update->getAddress().toStdString();
            city_state_zip_s = (update->getCity().toStdString() + ", "
                              + update->getState().toStdString() + " "
                              + update->getZip().toStdString());
            phone_s = update->getPhoneNumber().toStdString();
            date_s = update->getDate().toStdString();
            capacity_s = update->getCapacity().toStdString();
            surface_s = update->getSurface().toStdString();

            if (stadLeague_s != "" && stadName_s != "" && teamName_s != ""
                    && addr_s != "" && city_state_zip_s != "" && phone_s != ""
                    && date_s != "" && capacity_s != "" && surface_s != "") {
                stadium[i].set_stadium_type(stadLeague_s);
                stadium[i].set_stadium_name(stadName_s);
                stadium[i].set_team_name(teamName_s);
                stadium[i].set_street_address(addr_s);
                stadium[i].set_city_state_zip(city_state_zip_s);
                stadium[i].set_box_office(phone_s);
                stadium[i].set_date_opened(date_s);
                stadium[i].set_seating_capacity(capacity_s);
                stadium[i].set_grass_type(surface_s);
                saveStadium(fullpath, stadium);
            }
            else {
                QMessageBox::information(this, "Invalid Input", "Nothing was update due to invalid input.");
            }
        }
    }
    DisplayTable_MajorLeague_Admin_2();
}

void Widget::on_pushButton_ReturnToAdminMenu_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}
