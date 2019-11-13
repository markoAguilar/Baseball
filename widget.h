#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsLineItem>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

#include "stadium_container.h"

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:

    void on_pushButton_Menu_clicked();

    void on_pushButton_Exit_clicked();

    void on_pushButton_Major_League_clicked();

    void on_pushButton_National_League_clicked();

    void on_pushButton_American_League_clicked();

    void on_pushButton_Custom_trip_clicked();

    void on_pushButton_Update_Info_clicked();

    void on_pushButton_ReturnToMenu_clicked();

    void on_pushButton_ReturnToMain1_clicked();

    void on_pushButton_DisplayMajorLeague_clicked();

    void DisplayTable_MajorLeague();

    void on_pushButton_ReturnToMajor_clicked();

    void on_pushButton_SelectMajor_clicked();

private:
    stadium_container stadium;
    Ui::Widget *ui;
    QGraphicsScene * scene;
    QImage * img_Object;

    enum Column {
        STADIUM_NAME, TEAM_NAME, ADDRESS, BOX_OFFICE,DATE_OPENED,CAPACITY, GRASS
    };

};
#endif // WIDGET_H
