#ifndef MODIFYINFO_H
#define MODIFYINFO_H

#include <QDialog>

namespace Ui {
class modifyInfo;
}

class modifyInfo : public QDialog
{
    Q_OBJECT

public:
    explicit modifyInfo(QWidget *parent = nullptr);
    ~modifyInfo();
    void setData(const QString &stadL, const QString &stadN, const QString &teamN,
                 const QString &addr, const QString &city, const QString &state,
                 const QString &zipcode, const QString &phone, const QString &date,
                 const QString & capacity, const QString & surface);
    QString getStadiumLeague();
    QString getStadiumName();
    QString getTeamName();
    QString getAddress();
    QString getCity();
    QString getState();
    QString getZip();
    QString getPhoneNumber();
    QString getDate();
    QString getCapacity();
    QString getSurface();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::modifyInfo *ui;
    QString Month[13] = {"January", "February", "March", "April", "May", "June",
                         "July", "August", "September", "October", "November", "December"};
};

#endif // MODIFYINFO_H
