#include "widget.cpp"

void Widget::DisplayTable_MajorLeague() {
    int count;

    ui->tableWidget_Major->setRowCount(0);

    for (int i = 0; i < stadium.getSize(); i++)
    {
        if (QString::fromStdString(stadium[i].get_grass_type()) == "Y") {
            count = ui->tableWidget_Major->rowCount();
            ui->tableWidget_Major->insertRow(ui->tableWidget_Major->rowCount());

            QTableWidgetItem * stadium_Name = new QTableWidgetItem(QString::fromStdString(stadium[i].get_stadium_name()));
            QTableWidgetItem * team_Name = new QTableWidgetItem(QString::fromStdString(stadium[i].get_team_name()));
            QTableWidgetItem * address = new QTableWidgetItem(QString::fromStdString(stadium[i].get_street_address()) + "\n" +
                                                             QString::fromStdString(stadium[i].get_city_state_zip()));
            QTableWidgetItem * box_Office = new QTableWidgetItem(QString::fromStdString(stadium[i].get_box_office()));
            QTableWidgetItem * date_Opened = new QTableWidgetItem(QString::fromStdString(stadium[i].get_date_opened()));
            QTableWidgetItem * capacity = new QTableWidgetItem(QString::fromStdString(stadium[i].get_seating_capacity()));
            QTableWidgetItem * grass_Type = new QTableWidgetItem("Real");


            stadium_Name->setTextAlignment(Qt::AlignCenter);
            team_Name->setTextAlignment(Qt::AlignCenter);
            address->setTextAlignment(Qt::AlignCenter);
            box_Office->setTextAlignment(Qt::AlignCenter);
            date_Opened->setTextAlignment(Qt::AlignCenter);
            capacity->setTextAlignment(Qt::AlignCenter);
            grass_Type->setTextAlignment(Qt::AlignCenter);

            ui->tableWidget_Major->setItem(count, STADIUM_NAME, stadium_Name);
            ui->tableWidget_Major->setItem(count, TEAM_NAME, team_Name);
            ui->tableWidget_Major->setItem(count, ADDRESS, address);
            ui->tableWidget_Major->setItem(count, BOX_OFFICE, box_Office);
            ui->tableWidget_Major->setItem(count, DATE_OPENED, date_Opened);
            ui->tableWidget_Major->setItem(count, CAPACITY, capacity);
            ui->tableWidget_Major->setItem(count, GRASS, grass_Type);
        }
        else {
            count = ui->tableWidget_Major->rowCount();
            ui->tableWidget_Major->insertRow(ui->tableWidget_Major->rowCount());

            QTableWidgetItem * stadium_Name = new QTableWidgetItem(QString::fromStdString(stadium[i].get_stadium_name()));
            QTableWidgetItem * team_Name = new QTableWidgetItem(QString::fromStdString(stadium[i].get_team_name()));
            QTableWidgetItem * address = new QTableWidgetItem(QString::fromStdString(stadium[i].get_street_address()) + "\n" +
                                                             QString::fromStdString(stadium[i].get_city_state_zip()));
            QTableWidgetItem * box_Office = new QTableWidgetItem(QString::fromStdString(stadium[i].get_box_office()));
            QTableWidgetItem * date_Opened = new QTableWidgetItem(QString::fromStdString(stadium[i].get_date_opened()));
            QTableWidgetItem * capacity = new QTableWidgetItem(QString::fromStdString(stadium[i].get_seating_capacity()));
            QTableWidgetItem * grass_Type = new QTableWidgetItem("Artificial");


            stadium_Name->setTextAlignment(Qt::AlignCenter);
            team_Name->setTextAlignment(Qt::AlignCenter);
            address->setTextAlignment(Qt::AlignCenter);
            box_Office->setTextAlignment(Qt::AlignCenter);
            date_Opened->setTextAlignment(Qt::AlignCenter);
            capacity->setTextAlignment(Qt::AlignCenter);
            grass_Type->setTextAlignment(Qt::AlignCenter);

            ui->tableWidget_Major->setItem(count, STADIUM_NAME, stadium_Name);
            ui->tableWidget_Major->setItem(count, TEAM_NAME, team_Name);
            ui->tableWidget_Major->setItem(count, ADDRESS, address);
            ui->tableWidget_Major->setItem(count, BOX_OFFICE, box_Office);
            ui->tableWidget_Major->setItem(count, DATE_OPENED, date_Opened);
            ui->tableWidget_Major->setItem(count, CAPACITY, capacity);
            ui->tableWidget_Major->setItem(count, GRASS, grass_Type);
        }
    }
}
