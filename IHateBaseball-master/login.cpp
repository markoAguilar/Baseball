#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    setWindowTitle("Login Panel");

    QFont font = ui->label_Title->font();
    font.setPointSize(14);
    font.setBold(true);

    ui->label_Title->setFont(font);
    ui->label_Title->setAlignment(Qt::AlignCenter);
    ui->label_Username->setAlignment(Qt::AlignCenter);
    ui->label_Password->setAlignment(Qt::AlignCenter);
}

login::~login()
{
    delete ui;
}

void login::on_buttonBox_accepted()
{
    count++;
    close();
}

void login::on_buttonBox_rejected() {
    ui->lineEdit_Username->clear();
    ui->lineEdit_Password->clear();
    count += 5;
    close();
}

QString login::getName()
{
    return ui->lineEdit_Username->text();
}

QString login::getPass()
{
    return ui->lineEdit_Password->text();
}

int login::getCount() {
    return count;
}
