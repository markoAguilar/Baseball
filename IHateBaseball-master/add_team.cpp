#include "add_team.h"
#include "ui_add_team.h"
#include <QDebug>

add_Team::add_Team(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_Team)
{
    ui->setupUi(this);
    setWindowTitle("Add New Team");
    ui->comboBox_GrassSurface->addItem("Grass Type");
    ui->comboBox_GrassSurface->addItem("Real Grass");
    ui->comboBox_GrassSurface->addItem("Artificial Grass");
}

add_Team::~add_Team()
{
    delete ui;
}

void add_Team::on_buttonBox_accepted()
{
    close();
}

void add_Team::on_buttonBox_rejected()
{
    ui->radioButton_National->setChecked(false);
    ui->radioButton_American->setChecked(false);
    ui->lineEdit_StadiumName->clear();
    ui->lineEdit_TeamName->clear();
    ui->lineEdit_City->clear();
    ui->lineEdit_State->clear();
    ui->lineEdit_Zip_Code->clear();
    ui->lineEdit_PhoneNumber->clear();
    ui->dateEdit->clear();
    ui->lineEdit_Capacity->clear();
    ui->comboBox_GrassSurface->setCurrentIndex(0);
    close();
}

QString add_Team::getStadiumLeague() {
    if (ui->radioButton_National->isChecked()) {
        return "N";
    }
    else if (ui->radioButton_American->isChecked()) {
        return "A";
    }
    else {
        return "";
    }
}

QString add_Team::getStadiumName() {
    QRegExp re("\\d*");
    if (!re.exactMatch(ui->lineEdit_StadiumName->text())) {
        return ui->lineEdit_StadiumName->text();
    }
    else
        return "";
}

QString add_Team::getTeamName() {
    QRegExp re("\\d*");
    if (!re.exactMatch(ui->lineEdit_TeamName->text())) {
        return ui->lineEdit_TeamName->text();
    }
    else
        return "";
}

QString add_Team::getAddress() {
    QString address;
    QRegExp re("\\d*");
    if (!re.exactMatch(ui->lineEdit_StadiumAddress->text())) {
        address = ui->lineEdit_StadiumAddress->text() + ",";
        return address;
    }
    else
        return "";
}

QString add_Team::getCity() {
    QRegExp re("\\d*");
    if (!re.exactMatch(ui->lineEdit_City->text())) {
        return ui->lineEdit_City->text();
    }
    else
        return "";
}

QString add_Team::getState() {
    QRegExp re("\\d*");
    if (!re.exactMatch(ui->lineEdit_State->text())) {
        return ui->lineEdit_State->text();
    }
    else
        return "";
}

QString add_Team::getZip() {
    QRegExp re("\\d*");
    if (re.exactMatch(ui->lineEdit_Zip_Code->text())) {
        return ui->lineEdit_Zip_Code->text();
    }
    else
        return "";
}

QString add_Team::getPhoneNumber() {
    QString phone, number;
    QRegExp re("\\d*");
    if (re.exactMatch(ui->lineEdit_PhoneNumber->text())) {
        number = ui->lineEdit_PhoneNumber->text();
        if (number.size() > 10) {
            phone = "+" + number.left(1) + " " + number.mid(1, 3) + "-" + number.mid(4, 3) + "-" + number.right(4);
            return phone;
        }
        else {
            phone = "(" + number.left(3) + ") " + number.mid(3, 3) + "-" + number.right(4);
            return phone;
        }
    }
    else
        return "";
}

QString add_Team::getDate() {
    int space;
    QString month, day, year, newDate, tempDay;
    QDate date = ui->dateEdit->date();
    QString openDate = date.toString();
    space = openDate.indexOf(' ');
    openDate.remove(0, space + 1);
    month = openDate.left(space);
    tempDay = openDate.mid(4, 2);
    day = QString(tempDay.at(0)) + tempDay.at(1);
    year = openDate.right(space + 1);
    for (int i = 0; i < Month->size() - 1; i++) {
        if (month == Month[i].left(3) && day.toInt() > 10)
            newDate = Month[i] + " " + day + ", " + year;
        else if (month == Month[i].left(3) && (QString(day.at(0))).toInt() < 10)
            newDate = Month[i] + " " + day.at(0) + ", " + year;
    }
    return newDate;
}

QString add_Team::getCapacity() {
    QString cap;
    QRegExp re("\\d*");
    if (re.exactMatch(ui->lineEdit_Capacity->text())) {
        cap = ui->lineEdit_Capacity->text();
        if (cap.toInt() > 9999 && cap.toInt() < 99999) {
            cap = cap.left(2) + ',' + cap.right(3);
            return cap;
        }
        else if (cap.toInt() > 99999) {
            cap = cap.left(3) + ',' + cap.right(3);
            return cap;
        }
        else
            return ui->lineEdit_Capacity->text();
    }
    else
        return "";
}

QString add_Team::getSurface() {
    if (ui->comboBox_GrassSurface->currentIndex() == 1) {
        return "Y";
    }
    else if (ui->comboBox_GrassSurface->currentIndex() == 2) {
        return "N";
    }
    else
        return "";
}
