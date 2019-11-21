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

    void on_pushButton_SelectMajor_clicked();

    void on_pushButton_ReturnToMain1_clicked();

    void on_pushButton_DisplayMajorLeague_clicked();

    void on_pushButton_ReturnToMajor_clicked();

    void on_pushButton_SelectNational_clicked();

    void on_pushButton_ReturnToMain2_clicked();

    void on_pushButton_DisplayNationalLeague_clicked();

    void on_pushButton_ReturnToNational_clicked();

    void on_pushButton_SelectAmerican_clicked();

    void on_pushButton_ReturnToMain3_clicked();

    void on_pushButton_DisplayAmericanLeague_clicked();

    void on_pushButton_ReturnToAmerican_clicked();

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

    void DisplayTable_NationalLeague();

    void DisplayTable_NationalLeagueRealGrass();

    void DisplayTable_NationalLeagueArtifGrass();

    void DisplayTable_NationalLeagueStadiumName();

    void DisplayTable_NationalLeagueStadiumRealGrass();

    void DisplayTable_NationalLeagueStadiumArtifGrass();

    void DisplayTable_NationalLeageTeamName();

    void DisplayTable_NationalLeagueTeamRealGrass();

    void DisplayTable_NationalLeagueTeamArtifGrass();

    void DisplayTable_NationalLeagueDateOpen();

    void DisplayTable_NationalLeagueDateRealGrass();

    void DisplayTable_NationalLeagueDateArtifGrass();

    void DisplayTable_AmericanLeague();

    void DisplayTable_AmericanLeagueRealGrass();

    void DisplayTable_AmericanLeagueArtifGrass();

    void DisplayTable_AmericanLeagueStadiumName();

    void DisplayTable_AmericanLeagueStadiumRealGrass();

    void DisplayTable_AmericanLeagueStadiumArtifGrass();

    void DisplayTable_AmericanLeageTeamName();

    void DisplayTable_AmericanLeagueTeamRealGrass();

    void DisplayTable_AmericanLeagueTeamArtifGrass();

    void DisplayTable_AmericanLeagueDateOpen();

    void DisplayTable_AmericanLeagueDateRealGrass();

    void DisplayTable_AmericanLeagueDateArtifGrass();

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

/*******************
*** Major League ***
*******************/

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

/**********************
*** National League ***
**********************/

/*******************************************************************************
* void DisplayTable_NationalLeague();
*   Accessor: This function displays all national league
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_NationalLeagueRealGrass();
*   Accessor: This function displays all national league with grass surface
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_NationalLeagueArtifGrass();
*   Accessor: This function displays all national league with artificial surface
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_NationalLeagueStadiumName();
*   Accessor: This function displays all national league stadium name sorted
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_NationalLeagueStadiumRealGrass();
*   Accessor: This function displays all natioanl league stadium name sorted
*             with grass surface
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_NationalLeagueStadiumArtifGrass();
*   Accessor: This function displays all national league stadium name sorted
*             with artificial surface
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_NationalLeageTeamName();
*   Accessor: This function displays all national league team name sorted
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_NationalLeagueTeamRealGrass();
*   Accessor: This function displays all national league team name sorted
*             with grass surface
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_NationalLeagueTeamArtifGrass();
*   Accessor: This function displays all national league team name sorted
*             with artificial surface
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_NationalLeagueDateOpen();
*   Accessor: This function displays all national league date open sorted
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_NationalLeagueDateRealGrass();
*   Accessor: This function displays all national league date open sorted
*             with grass surface
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_NationalLeagueDateArtifGrass();
*   Accessor: This function displays all national league date open sorted
*             with artificial surface
*   Parameters: none
*   Return: none
*******************************************************************************/

/**********************
*** American League ***
**********************/

/*******************************************************************************
* void DisplayTable_AmericanLeague();
*   Accessor: This function displays all american league
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_AmericanLeagueRealGrass();
*   Accessor: This function displays all american league with grass surface
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_AmericanLeagueArtifGrass();
*   Accessor: This function displays all american league with artificial surface
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_AmericanLeagueStadiumName();
*   Accessor: This function displays all american league stadium name sorted
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_AmericanLeagueStadiumRealGrass();
*   Accessor: This function displays all american league stadium name sorted
*             with grass surface
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_AmericanLeagueStadiumArtifGrass();
*   Accessor: This function displays all american league stadium name sorted
*             with artificial surface
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_AmericanLeageTeamName();
*   Accessor: This function displays all american league team name sorted
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_AmericanLeagueTeamRealGrass();
*   Accessor: This function displays all american league team name sorted
*             with grass surface
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_AmericanLeagueTeamArtifGrass();
*   Accessor: This function displays all american league team name sorted
*             with artificial surface
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_AmericanLeagueDateOpen();
*   Accessor: This function displays all american league date open sorted
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_AmericanLeagueDateRealGrass();
*   Accessor: This function displays all american league date open sorted
*             with grass surface
*   Parameters: none
*   Return: none
*******************************************************************************/

/*******************************************************************************
* void DisplayTable_AmericanLeagueDateArtifGrass();
*   Accessor: This function displays all american league date open sorted
*             with artificial surface
*   Parameters: none
*   Return: none
*******************************************************************************/
#endif // WIDGET_H
