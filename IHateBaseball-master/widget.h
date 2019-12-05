#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsLineItem>

#include "Coordinates.h"
#include "dijkstra_mlb.h"
#include <QMainWindow>
#include <QLabel>
#include <QPainter>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QPixmap>
#include <QComboBox>
#include <QString>
#include <QRadioButton>
#include <QStackedWidget>
#include <vector>
#include <QGraphicsLineItem>
#include <login.h>
#include <add_team.h>
#include <modifyinfo.h>
#include "stadium_container.h"
#include "souvenir_container.h"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE


class Widget : public QWidget
{
    Q_OBJECT

public:
    const static int MLB_S = 25;
    const static int AL_S = 15;
    const static int NL_S = 15;
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
    void on_pushButton_DisplayAL_clicked();

    void on_pushButton_ReturnToMainAL_clicked();

    void on_pushButton_DisplayNL_clicked();

    void on_pushButton_ReturnToMain_NL_clicked();

    void on_pushButton_LosAngelesAnaheim_clicked();

    void on_pushButton_Generate_clicked();

    void on_pushButton_CustomTrip_Restart_clicked();

    void on_pushButton_ComericaPark_8_clicked();

    void on_pushButton_FenwayPark_8_clicked();

    void on_pushButton_GlobeLifeParkArlington_8_clicked();

    void on_pushButton_KauffmanStadium_8_clicked();

    void on_pushButton_MinuteMadePark_8_clicked();

    void on_pushButton_OcoColiseum_8_clicked();

    void on_pushButton_OrioleParkCamdenYards_8_clicked();

    void on_pushButton_ProgressiveField_8_clicked();

    void on_pushButton_RogersCentre_8_clicked();

    void on_pushButton_SafeCoField_8_clicked();

    void on_pushButton_TargetField_8_clicked();

    void on_pushButton_TropicanaField_8_clicked();

    void on_pushButton_USCellularField_8_clicked();

    void on_pushButton_YankeeStadium_8_clicked();

    void on_customTrip1_Next_Button_7_clicked();

    void on_pushButton_PreviousCustomTrip2_8_clicked();

    void on_pushButton_GenerateA_clicked();

    //ADMIN STUFF
    void on_pushButton_AddNewTeam_clicked();
    void on_pushButton_ModifyStadium_clicked();
    void on_pushButton_SouvenirUpdate_clicked();
    void on_pushButton_ReturnToMain4_clicked();
    void on_pushButton_SelectMajor_Admin_clicked();
    void on_pushButton_AddTeam_clicked();
    void on_pushButton_DisplayMajorLeague_Admin_clicked();
    void on_pushButton_ReturnToAdminSelection_clicked();
    void on_pushButton_Search_clicked();
    void on_pushButton_ModifyInformation_clicked();
    void on_pushButton_ReturnToAdminMenu_clicked();
    void on_pushButton_AddSouvenir_clicked();
    void on_pushButton_DeleteSouvenir_clicked();
    void on_pushButton_PriceChange_clicked();
    void on_pushButton_ReturnToAdminMenu2_clicked();

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
    vector<string> custom_destinations; //CALC: used for custom trip
    QString Month[13] = {"January", "February", "March", "April", "May", "June",
                         "July", "August", "September", "October", "November", "December"};
    stadium_container stadium;
    Ui::Widget *ui;
    QGraphicsScene * scene;
    QImage * img_Object;

    souvenir_container souvenir;
    login *admin_Login;
    add_Team *add_NewTeam;
    modifyInfo *update;
    double total_Purchase = 0.00;

    enum Column {
        STADIUM_NAME, TEAM_NAME, ADDRESS, BOX_OFFICE,DATE_OPENED,CAPACITY, GRASS
    };

    enum Column1 {
        SOUVENIR_NAME, SOUVENIR_PRICE
    };

    Coordinates cords_arr[MLB_S] {Coordinates("PETCO Park", 94, 349),
        Coordinates("Dodger Stadium - Angel Stadium", 75, 322),
        Coordinates("AT&T Park - O.co Coliseum", 34, 236),
        Coordinates("Safeco Field", 91, 61),Coordinates("Chase Field", 174, 354),
        Coordinates("Coors Field", 296, 246),Coordinates("Minute Maid Park", 439, 453),
        Coordinates("Rangers Ballpark", 416, 392),Coordinates("Kauffman Stadium", 455, 266),
        Coordinates("Target Field", 466, 154),Coordinates("Busch Stadium", 512, 275),
        Coordinates("Wringley Field - US. Cellular Field", 545, 208),
        Coordinates("Miller Park", 542, 183),Coordinates("Marlins Park", 702, 506),
        Coordinates("Tropicana Field", 666, 468),Coordinates("Turner Field", 618, 361),
        Coordinates("Great American Ballpark", 605, 254), Coordinates("PNC Park", 669, 220),
        Coordinates("Progressive Field", 634, 211),Coordinates("Comerica Park", 608, 193),
        Coordinates("Rogers Center", 667, 153),
        Coordinates("Camden Yards - Nationals Park", 712, 241),
        Coordinates("Citizens Bank Park", 732, 214),
        Coordinates("Yankee Stadium - Citi Field", 751, 195),
        Coordinates("Fenway Park", 780, 161) };


        vector<string> MLB_stadiums {"PETCO Park",  //0
                                    "Dodger Stadium - Angel Stadium",   //1
                                    "AT&T Park - O.co Coliseum", //2
                                    "Safeco Field", //3
                                    "Chase Field", //4
                                    "Coors Field", //5
                                    "Minute Maid Park", //6
                                    "Rangers Ballpark", //7
                                    "Kauffman Stadium",//8
                                    "Target Field", //9
                                    "Busch Stadium", //10
                                    "Wringley Field - US. Cellular Field",//11
                                    "Miller Park", //12
                                    "Marlins Park", //13
                                    "Tropicana Field", //14
                                    "Turner Field", //15
                                    "Great American Ballpark",  //16
                                    "PNC Park", //17
                                    "Progressive Field",    //18
                                    "Comerica Park",    //19
                                    "Rogers Center",    //20
                                    "Camden Yards - Nationals Park", //21
                                    "Citizens Bank Park",   //22
                                    "Yankee Stadium - Citi Field", //23
                                    "Fenway Park"}; //24

        int MLB_graph[MLB_S][MLB_S]
    { {0,110,0,0,300, 830, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //PETCO Park
    {110,0,340,0,0,0,0,0,0,1500,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //Dodger Stadium - Angel Stadium
    {0,340,0,680,650,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},  //AT&T Park - O.co Coliseum
    {0,0,680,0,0,0,0,0,0,1390,0,0,0,0,0,0,0,0,0,0,2070,0,0,0,0}, //Safeco Field
    {300,0,650,0,0,580,1115,870,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //Chase Field
    {830,0,0,0,580,0,0,650,560,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //Coors Field
    {0,0,0,0,1115,0,0,230,0,0,680,0,0,965,790,0,0,0,0,0,0,0,0,0,0}, //Minute Maid Park
    {0,0,0,0,870,650,230,0,460,0,0,0,0,0,0,740,0,0,0,0,0,0,0,0,0}, //Rangers Ballpark
    {0,0,0,0,0,560,0,460,0,0,235,415,0,0,0,0,0,0,0,0,0,0,0,0,0}, //Kauffman Stadium
    {0,1500,0,1390,0,0,0,0,0,0,465,0,300,0,0,0,0,0,0,0,0,0,0,0,0}, //Target Field
    {0,0,0,0,0,0,680,0,235,465,0,0,0,0,0,0,310,0,0,0,0,0,0,0,0},  //Busch Stadium
    {0,0,0,0,0,0,0,0,415,0,0,0,80,0,0,0,250,0,0,240,0,0,0,0,0},  //Wringley Field - US. Cellular Field
    {0,0,0,0,0,0,0,0,0,300,0,80,0,0,0,0,0,0,0,0,430,0,0,0,0}, //Miller Park
    {0,0,0,0,0,0,965,0,0,0,0,0,0,0,210,600,0,0,0,0,0,930,0,0,1255}, //Marlins Park
    {0,0,0,0,0,0,790,0,0,0,0,0,0,210,0,0,790,0,0,0,0,0,0,0,0}, //Tropicana Field
    {0,0,0,0,0,0,0,740,0,0,0,0,0,600,0,0,375,0,0,0,0,560,0,0,0}, //Turner Field
    {0,0,0,0,0,0,0,0,0,0,310,250,0,0,790,375,0,260,225,0,0,0,0,0,0}, //Great American Ballpark
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,260,0,115,0,225,195,0,315,0}, //PNC Park
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,225,115,0,90,0,0,0,0,0}, //Progressive Field
    {0,0,0,0,0,0,0,0,0,0,0,240,0,0,0,0,0,0,90,0,210,0,0,0,0}, //Comerica Park
    {0,0,0,2070,0,0,0,0,0,0,0,0,430,0,0,0,0,225,0,210,0,0,0,0,430}, //Rogers Center
    {0,0,0,0,0,0,0,0,0,0,0,0,0,930,0,560,0,195,0,0,0,0,90,0,0}, //Camden Yards - Nationals Park
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,90,0,80,0}, //Citizens Bank Park
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,315,0,0,0,0,80,0,195}, //Yankee Stadium - Citi Field
    {0,0,0,0,0,0,0,0,0,0,0,0,0,1255,0,0,0,0,0,0,430,0,0,195,0} }; //Fenway Park
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
