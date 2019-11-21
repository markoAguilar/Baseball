#include "widget.h"
#include "ui_widget.h"
#include "stadium.h"
#include "stadium_container.h"
#include "files.h"
#include <QLabel>
#include <QtCore>
#include <QtGui>
#include <QColor>

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

    font.setPointSize(14);
    ui->pushButton_Menu->setFont(font);
    ui->pushButton_Exit->setFont(font);
    ui->pushButton_Major_League->setFont(font);
    ui->pushButton_National_League->setFont(font);
    ui->pushButton_American_League->setFont(font);
    ui->pushButton_Custom_trip->setFont(font);
    ui->pushButton_Update_Info->setFont(font);
    ui->pushButton_ReturnToMenu->setFont(font);

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
    ui->stackedWidget->setCurrentIndex(6);
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
