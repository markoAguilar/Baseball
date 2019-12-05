#include "modifyinfo.h"
#include "ui_modifyinfo.h"
#include <QDebug>

modifyInfo::modifyInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifyInfo)
{
    ui->setupUi(this);
    setWindowTitle("Update Stadium Information");
    ui->comboBox_GrassSurface->addItem("Grass Type");
    ui->comboBox_GrassSurface->addItem("Real Grass");
    ui->comboBox_GrassSurface->addItem("Artificial Grass");
}

modifyInfo::~modifyInfo()
{
    delete ui;
}

void modifyInfo::setData(const QString &stadL, const QString &stadN, const QString &teamN,
                         const QString &addr, const QString &city, const QString &state,
                         const QString &zipcode, const QString &phone, const QString &date,
                         const QString &capacity, const QString &surface) {
    int space, day, month, year, index;
    QString tempDate;
    QDate Date;
    tempDate = date;
    space = date.indexOf(' ');

    if (stadL == "N")
        ui->radioButton_National->setChecked(true);
    if (stadL == "A")
        ui->radioButton_American->setChecked(true);
    ui->lineEdit_StadiumName->setText(stadN);
    ui->lineEdit_TeamName->setText(teamN);
    ui->lineEdit_StadiumAddress->setText(addr);
    ui->lineEdit_City->setText(city);
    ui->lineEdit_State->setText(state);
    ui->lineEdit_Zip_Code->setText(zipcode);
    ui->lineEdit_PhoneNumber->setText(phone);
    for (int i = 0; i < Month->size(); i++) {
        if (date.left(3) == Month[i].left(3)) {
            month = i + 1;
            if (date.at(space+2) == ',')
                day = QString(date.at(space + 1)).toInt();
            else
                day = (QString(date.at(space + 1)) + QString(date.at(space + 2))).toInt();
            year = date.right(4).toInt();
        }

    }
    if (month > 9) {
        if (day > 9) {
            tempDate = QString::number(day) + "/" + QString::number(month) + "/" + QString::number(year);
        }
        else
            tempDate = "0" + QString::number(day) + "/" + QString::number(month) + "/" + QString::number(year);
    }
    else if (month < 10) {
        if (day > 9) {
            tempDate = QString::number(day) + "/0" + QString::number(month) + "/" + QString::number(year);
        }
        else
            tempDate =  "0" + QString::number(day) + "/0" + QString::number(month) + "/" + QString::number(year);
    }

    Date = QDate::fromString(tempDate, "dd/MM/yyyy");
    ui->dateEdit->setDate(Date);
    ui->lineEdit_Capacity->setText(capacity);
    if (surface == "Y") {
        index = 1;
        ui->comboBox_GrassSurface->setCurrentIndex(index);
    }
    if (surface == "N") {
        index = 2;
        ui->comboBox_GrassSurface->setCurrentIndex(index);
    }
}

void modifyInfo::on_buttonBox_accepted()
{
    close();
}

void modifyInfo::on_buttonBox_rejected()
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

QString modifyInfo::getStadiumLeague() {
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

QString modifyInfo::getStadiumName() {
    QRegExp re("\\d*");
    if (!re.exactMatch(ui->lineEdit_StadiumName->text())) {
        return ui->lineEdit_StadiumName->text();
    }
    else
        return "";
}

QString modifyInfo::getTeamName() {
    QRegExp re("\\d*");
    if (!re.exactMatch(ui->lineEdit_TeamName->text())) {
        return ui->lineEdit_TeamName->text();
    }
    else
        return "";
}

QString modifyInfo::getAddress() {
    QString address;
    QRegExp re("\\d*");
    if (!re.exactMatch(ui->lineEdit_StadiumAddress->text())) {
        address = ui->lineEdit_StadiumAddress->text() + ",";
        return address;
    }
    else
        return "";
}

QString modifyInfo::getCity() {
    QRegExp re("\\d*");
    if (!re.exactMatch(ui->lineEdit_City->text())) {
        return ui->lineEdit_City->text();
    }
    else
        return "";
}

QString modifyInfo::getState() {
    QRegExp re("\\d*");
    if (!re.exactMatch(ui->lineEdit_State->text())) {
        return ui->lineEdit_State->text();
    }
    else
        return "";
}

QString modifyInfo::getZip() {
    QRegExp re("\\d*");
    if (re.exactMatch(ui->lineEdit_Zip_Code->text())) {
        return ui->lineEdit_Zip_Code->text();
    }
    else
        return "";
}

QString modifyInfo::getPhoneNumber() {
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

QString modifyInfo::getDate() {
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

QString modifyInfo::getCapacity() {
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

QString modifyInfo::getSurface() {
    if (ui->comboBox_GrassSurface->currentIndex() == 1) {
        return "Y";
    }
    else if (ui->comboBox_GrassSurface->currentIndex() == 2) {
        return "N";
    }
    else
        return "";
}
