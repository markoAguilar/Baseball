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

    void on_pushButton_ReturnToMajor_clicked();

    void on_pushButton_SelectMajor_clicked();

    void DisplayTable_MajorLeague();

    void DisplayTable_MajorLeagueRealGrass();

    void DisplayTable_MajorLeagueArtifGrass();

    void DisplayTable_MajorLeagueStadiumName();

    void DisplayTable_MajorLeagueStadiumRealGrass();

    void DisplayTable_MajorLeagueStadiumArtifGrass();

    void DisplayTable_MajorLeageTeamName();

    void DisplayTable_MajorLeagueTeamRealGrass();

    void DisplayTable_MajorLeagueTeamArtifGrass();

    void DisplayTable_MajorLeagueDateOpen();

    void DisplayTable_MajorLeagueDateRealGrass();

    void DisplayTable_MajorLeagueDateArtifGrass();

private:
    QString Month[13] = {"January", "February", "March", "April", "May", "June",
                         "July", "August", "September", "October", "November", "December"};
    stadium_container stadium;
    Ui::Widget *ui;
    QGraphicsScene * scene;
    QImage * img_Object;

    enum Column {
        STADIUM_NAME, TEAM_NAME, ADDRESS, BOX_OFFICE,DATE_OPENED,CAPACITY, GRASS
    };

};

/*******************************************************************************
****************************** Display tables **********************************
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_MajorLeague();
*   Accessor: This function displays all major league
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_MajorLeagueRealGrass();
*   Accessor: This function displays all major league with grass surface
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_MajorLeagueArtifGrass();
*   Accessor: This function displays all major league with artificial surface
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_MajorLeagueStadiumName();
*   Accessor: This function displays all major league stadium name sorted
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_MajorLeagueStadiumRealGrass();
*   Accessor: This function displays all major league stadium name sorted
*             with grass surface
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_MajorLeagueStadiumArtifGrass();
*   Accessor: This function displays all major league stadium name sorted
*             with artificial surface
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_MajorLeageTeamName();
*   Accessor: This function displays all major league team name sorted
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_MajorLeagueTeamRealGrass();
*   Accessor: This function displays all major league team name sorted
*             with grass surface
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_MajorLeagueTeamArtifGrass();
*   Accessor: This function displays all major league team name sorted
*             with artificial surface
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_MajorLeagueDateOpen();
*   Accessor: This function displays all major league date open sorted
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_MajorLeagueDateRealGrass();
*   Accessor: This function displays all major league date open sorted
*             with grass surface
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_MajorLeagueDateArtifGrass();
*   Accessor: This function displays all major league date open sorted
*             with artificial surface
*   Parameters: none
*   Return: none
*******************************************************************************/
#endif // WIDGET_H
