#ifndef ADD_TEAM_H
#define ADD_TEAM_H

#include <QDialog>

namespace Ui {
class add_Team;
}

class add_Team : public QDialog
{
    Q_OBJECT

public:
    explicit add_Team(QWidget *parent = nullptr);
    ~add_Team();
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
    Ui::add_Team *ui;
    QString Month[13] = {"January", "February", "March", "April", "May", "June",
                         "July", "August", "September", "October", "November", "December"};
};

#endif // ADD_TEAM_H
