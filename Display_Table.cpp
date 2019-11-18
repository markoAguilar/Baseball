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
            ui->tableWidget_Major->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
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
            ui->tableWidget_Major->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
        }
    }
}

void Widget::DisplayTable_MajorLeagueRealGrass() {
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
            ui->tableWidget_Major->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
        }
    }
}

void Widget::DisplayTable_MajorLeagueArtifGrass() {
    int count;

    ui->tableWidget_Major->setRowCount(0);

    for (int i = 0; i < stadium.getSize(); i++)
    {
        if (QString::fromStdString(stadium[i].get_grass_type()) == "N") {
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
            ui->tableWidget_Major->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
        }
    }
}

void Widget::DisplayTable_MajorLeagueStadiumName() {
    int count;

    QStringList s;

    for (int j = 0; j < stadium.getSize(); j++) {
        s << QString::fromStdString(stadium[j].get_stadium_name());
    }

    s.sort();

    ui->tableWidget_Major->setRowCount(0);

    for (int i = 0; i < stadium.getSize(); i++) {
        for (int k = 0; k < stadium.getSize(); k++) {
            if (QString::fromStdString(stadium[k].get_stadium_name()) == s[i]) {
                if (QString::fromStdString(stadium[k].get_grass_type()) == "Y") {
                    count = ui->tableWidget_Major->rowCount();
                    ui->tableWidget_Major->insertRow(ui->tableWidget_Major->rowCount());

                    QTableWidgetItem * stadium_Name = new QTableWidgetItem(QString::fromStdString(stadium[k].get_stadium_name()));
                    QTableWidgetItem * team_Name = new QTableWidgetItem(QString::fromStdString(stadium[k].get_team_name()));
                    QTableWidgetItem * address = new QTableWidgetItem(QString::fromStdString(stadium[k].get_street_address()) + "\n" +
                                                                     QString::fromStdString(stadium[k].get_city_state_zip()));
                    QTableWidgetItem * box_Office = new QTableWidgetItem(QString::fromStdString(stadium[k].get_box_office()));
                    QTableWidgetItem * date_Opened = new QTableWidgetItem(QString::fromStdString(stadium[k].get_date_opened()));
                    QTableWidgetItem * capacity = new QTableWidgetItem(QString::fromStdString(stadium[k].get_seating_capacity()));
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
                    ui->tableWidget_Major->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
                }
                else {
                    count = ui->tableWidget_Major->rowCount();
                    ui->tableWidget_Major->insertRow(ui->tableWidget_Major->rowCount());

                    QTableWidgetItem * stadium_Name = new QTableWidgetItem(QString::fromStdString(stadium[k].get_stadium_name()));
                    QTableWidgetItem * team_Name = new QTableWidgetItem(QString::fromStdString(stadium[k].get_team_name()));
                    QTableWidgetItem * address = new QTableWidgetItem(QString::fromStdString(stadium[k].get_street_address()) + "\n" +
                                                                     QString::fromStdString(stadium[k].get_city_state_zip()));
                    QTableWidgetItem * box_Office = new QTableWidgetItem(QString::fromStdString(stadium[k].get_box_office()));
                    QTableWidgetItem * date_Opened = new QTableWidgetItem(QString::fromStdString(stadium[k].get_date_opened()));
                    QTableWidgetItem * capacity = new QTableWidgetItem(QString::fromStdString(stadium[k].get_seating_capacity()));
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
                    ui->tableWidget_Major->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
                }
            }
        }
    }
}

void Widget::DisplayTable_MajorLeagueStadiumRealGrass() {
    int count;

    QStringList s;

    for (int j = 0; j < stadium.getSize(); j++) {
        s << QString::fromStdString(stadium[j].get_stadium_name());
    }

    s.sort();

    ui->tableWidget_Major->setRowCount(0);

    for (int i = 0; i < stadium.getSize(); i++) {
        for (int k = 0; k < stadium.getSize(); k++) {
            if (QString::fromStdString(stadium[k].get_stadium_name()) == s[i]) {
                if (QString::fromStdString(stadium[k].get_grass_type()) == "Y") {
                    count = ui->tableWidget_Major->rowCount();
                    ui->tableWidget_Major->insertRow(ui->tableWidget_Major->rowCount());

                    QTableWidgetItem * stadium_Name = new QTableWidgetItem(QString::fromStdString(stadium[k].get_stadium_name()));
                    QTableWidgetItem * team_Name = new QTableWidgetItem(QString::fromStdString(stadium[k].get_team_name()));
                    QTableWidgetItem * address = new QTableWidgetItem(QString::fromStdString(stadium[k].get_street_address()) + "\n" +
                                                                     QString::fromStdString(stadium[k].get_city_state_zip()));
                    QTableWidgetItem * box_Office = new QTableWidgetItem(QString::fromStdString(stadium[k].get_box_office()));
                    QTableWidgetItem * date_Opened = new QTableWidgetItem(QString::fromStdString(stadium[k].get_date_opened()));
                    QTableWidgetItem * capacity = new QTableWidgetItem(QString::fromStdString(stadium[k].get_seating_capacity()));
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
                    ui->tableWidget_Major->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
                }
            }
        }
    }
}

void Widget::DisplayTable_MajorLeagueStadiumArtifGrass() {
    int count;

    QStringList s;

    for (int j = 0; j < stadium.getSize(); j++) {
        s << QString::fromStdString(stadium[j].get_stadium_name());
    }

    s.sort();

    ui->tableWidget_Major->setRowCount(0);

    for (int i = 0; i < stadium.getSize(); i++) {
        for (int k = 0; k < stadium.getSize(); k++) {
            if (QString::fromStdString(stadium[k].get_stadium_name()) == s[i]) {
                if (QString::fromStdString(stadium[k].get_grass_type()) == "N") {
                    count = ui->tableWidget_Major->rowCount();
                    ui->tableWidget_Major->insertRow(ui->tableWidget_Major->rowCount());

                    QTableWidgetItem * stadium_Name = new QTableWidgetItem(QString::fromStdString(stadium[k].get_stadium_name()));
                    QTableWidgetItem * team_Name = new QTableWidgetItem(QString::fromStdString(stadium[k].get_team_name()));
                    QTableWidgetItem * address = new QTableWidgetItem(QString::fromStdString(stadium[k].get_street_address()) + "\n" +
                                                                     QString::fromStdString(stadium[k].get_city_state_zip()));
                    QTableWidgetItem * box_Office = new QTableWidgetItem(QString::fromStdString(stadium[k].get_box_office()));
                    QTableWidgetItem * date_Opened = new QTableWidgetItem(QString::fromStdString(stadium[k].get_date_opened()));
                    QTableWidgetItem * capacity = new QTableWidgetItem(QString::fromStdString(stadium[k].get_seating_capacity()));
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
                    ui->tableWidget_Major->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
                }
            }
        }
    }
}

void Widget::DisplayTable_MajorLeageTeamName() {
    int count;

    QStringList s;

    for (int j = 0; j < stadium.getSize(); j++) {
        s << QString::fromStdString(stadium[j].get_team_name());
    }

    s.sort();

    ui->tableWidget_Major->setRowCount(0);

    for (int i = 0; i < stadium.getSize(); i++) {
        for (int k = 0; k < stadium.getSize(); k++) {
            if (QString::fromStdString(stadium[k].get_team_name()) == s[i]) {
                if (QString::fromStdString(stadium[k].get_grass_type()) == "Y") {
                    count = ui->tableWidget_Major->rowCount();
                    ui->tableWidget_Major->insertRow(ui->tableWidget_Major->rowCount());

                    QTableWidgetItem * stadium_Name = new QTableWidgetItem(QString::fromStdString(stadium[k].get_stadium_name()));
                    QTableWidgetItem * team_Name = new QTableWidgetItem(QString::fromStdString(stadium[k].get_team_name()));
                    QTableWidgetItem * address = new QTableWidgetItem(QString::fromStdString(stadium[k].get_street_address()) + "\n" +
                                                                     QString::fromStdString(stadium[k].get_city_state_zip()));
                    QTableWidgetItem * box_Office = new QTableWidgetItem(QString::fromStdString(stadium[k].get_box_office()));
                    QTableWidgetItem * date_Opened = new QTableWidgetItem(QString::fromStdString(stadium[k].get_date_opened()));
                    QTableWidgetItem * capacity = new QTableWidgetItem(QString::fromStdString(stadium[k].get_seating_capacity()));
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
                    ui->tableWidget_Major->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
                }
                else {
                    count = ui->tableWidget_Major->rowCount();
                    ui->tableWidget_Major->insertRow(ui->tableWidget_Major->rowCount());

                    QTableWidgetItem * stadium_Name = new QTableWidgetItem(QString::fromStdString(stadium[k].get_stadium_name()));
                    QTableWidgetItem * team_Name = new QTableWidgetItem(QString::fromStdString(stadium[k].get_team_name()));
                    QTableWidgetItem * address = new QTableWidgetItem(QString::fromStdString(stadium[k].get_street_address()) + "\n" +
                                                                     QString::fromStdString(stadium[k].get_city_state_zip()));
                    QTableWidgetItem * box_Office = new QTableWidgetItem(QString::fromStdString(stadium[k].get_box_office()));
                    QTableWidgetItem * date_Opened = new QTableWidgetItem(QString::fromStdString(stadium[k].get_date_opened()));
                    QTableWidgetItem * capacity = new QTableWidgetItem(QString::fromStdString(stadium[k].get_seating_capacity()));
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
                    ui->tableWidget_Major->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
                }
            }
        }
    }
}

void Widget::DisplayTable_MajorLeagueTeamRealGrass() {
    int count;

    QStringList s;

    for (int j = 0; j < stadium.getSize(); j++) {
        s << QString::fromStdString(stadium[j].get_team_name());
    }

    s.sort();

    ui->tableWidget_Major->setRowCount(0);

    for (int i = 0; i < stadium.getSize(); i++) {
        for (int k = 0; k < stadium.getSize(); k++) {
            if (QString::fromStdString(stadium[k].get_team_name()) == s[i]) {
                if (QString::fromStdString(stadium[k].get_grass_type()) == "Y") {
                    count = ui->tableWidget_Major->rowCount();
                    ui->tableWidget_Major->insertRow(ui->tableWidget_Major->rowCount());

                    QTableWidgetItem * stadium_Name = new QTableWidgetItem(QString::fromStdString(stadium[k].get_stadium_name()));
                    QTableWidgetItem * team_Name = new QTableWidgetItem(QString::fromStdString(stadium[k].get_team_name()));
                    QTableWidgetItem * address = new QTableWidgetItem(QString::fromStdString(stadium[k].get_street_address()) + "\n" +
                                                                     QString::fromStdString(stadium[k].get_city_state_zip()));
                    QTableWidgetItem * box_Office = new QTableWidgetItem(QString::fromStdString(stadium[k].get_box_office()));
                    QTableWidgetItem * date_Opened = new QTableWidgetItem(QString::fromStdString(stadium[k].get_date_opened()));
                    QTableWidgetItem * capacity = new QTableWidgetItem(QString::fromStdString(stadium[k].get_seating_capacity()));
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
                    ui->tableWidget_Major->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
                }
            }
        }
    }
}

void Widget::DisplayTable_MajorLeagueTeamArtifGrass() {
    int count;

    QStringList s;

    for (int j = 0; j < stadium.getSize(); j++) {
        s << QString::fromStdString(stadium[j].get_team_name());
    }

    s.sort();

    ui->tableWidget_Major->setRowCount(0);

    for (int i = 0; i < stadium.getSize(); i++) {
        for (int k = 0; k < stadium.getSize(); k++) {
            if (QString::fromStdString(stadium[k].get_team_name()) == s[i]) {
                if (QString::fromStdString(stadium[k].get_grass_type()) == "N") {
                    count = ui->tableWidget_Major->rowCount();
                    ui->tableWidget_Major->insertRow(ui->tableWidget_Major->rowCount());

                    QTableWidgetItem * stadium_Name = new QTableWidgetItem(QString::fromStdString(stadium[k].get_stadium_name()));
                    QTableWidgetItem * team_Name = new QTableWidgetItem(QString::fromStdString(stadium[k].get_team_name()));
                    QTableWidgetItem * address = new QTableWidgetItem(QString::fromStdString(stadium[k].get_street_address()) + "\n" +
                                                                     QString::fromStdString(stadium[k].get_city_state_zip()));
                    QTableWidgetItem * box_Office = new QTableWidgetItem(QString::fromStdString(stadium[k].get_box_office()));
                    QTableWidgetItem * date_Opened = new QTableWidgetItem(QString::fromStdString(stadium[k].get_date_opened()));
                    QTableWidgetItem * capacity = new QTableWidgetItem(QString::fromStdString(stadium[k].get_seating_capacity()));
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
                    ui->tableWidget_Major->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
                }
            }
        }
    }
}

void Widget::DisplayTable_MajorLeagueDateOpen() {
    int count, year, day;
    QString str_date, str_year, str_month, str_day;
    QStringList date, temp, dateSorted;

    for (int i = 0; i < stadium.getSize(); i++) {
        date << QString::fromStdString(stadium[i].get_date_opened());

        year = date[i].lastIndexOf(' ');
        day = date[i].indexOf(' ');

        for (int y = year + 1; y < date[i].size(); y++)
            str_year += date[i].at(y);

        for (int m = 0; m < day; m++) {
            str_month += date[i].at(m);
        }

        for (int c = 0; c < 12; c++) {
            if (str_month.contains(Month[c])) {
                str_month.clear();
                if (c < 10)
                    str_month = "0" + QString::fromStdString(to_string(c + 1));
                else
                    str_month = QString::fromStdString(to_string(c));
            }
        }

        for (int d = day + 1; d < date[i].indexOf(','); d++)
            str_day += date[i].at(d);

        if (stoi(str_day.toStdString()) < 10) {
            str_day.push_front("0");
        }

        temp << str_year + str_month + str_day;

        str_year.clear();
        str_month.clear();
        str_day.clear();
    }

    temp.sort();

    for (int h = 0; h < temp.size(); h++) {
        for (int j = 0; j < 4; j++) {
            str_year += temp[h].at(j);
        }
        str_month = QString(temp[h].at(4)) + QString(temp[h].at(5));
        for (int l = 0; l < 12; l++) {
            if (str_month.toInt() == l) {
                str_month = Month[l-1];
            }
        }
        str_day = QString(temp[h].at(6)) + QString(temp[h].at(7));
        if (str_day.contains('0') && str_day.toInt() < 10) {
            str_day = QString(temp[h].at(7));
        }

        str_date = str_month + " " + str_day + ", " + str_year;

        dateSorted << str_date;

        str_year.clear();
        str_month.clear();
        str_day.clear();
        str_date.clear();
    }

    ui->tableWidget_Major->setRowCount(0);

    for (int i = 0; i < stadium.getSize(); i++) {
        for (int k = 0; k < stadium.getSize(); k++) {
            if (QString::fromStdString(stadium[k].get_date_opened()) == dateSorted[i]) {
                if (QString::fromStdString(stadium[k].get_grass_type()) == "Y") {
                    count = ui->tableWidget_Major->rowCount();
                    ui->tableWidget_Major->insertRow(ui->tableWidget_Major->rowCount());

                    QTableWidgetItem * stadium_Name = new QTableWidgetItem(QString::fromStdString(stadium[k].get_stadium_name()));
                    QTableWidgetItem * team_Name = new QTableWidgetItem(QString::fromStdString(stadium[k].get_team_name()));
                    QTableWidgetItem * address = new QTableWidgetItem(QString::fromStdString(stadium[k].get_street_address()) + "\n" +
                                                                     QString::fromStdString(stadium[k].get_city_state_zip()));
                    QTableWidgetItem * box_Office = new QTableWidgetItem(QString::fromStdString(stadium[k].get_box_office()));
                    QTableWidgetItem * date_Opened = new QTableWidgetItem(QString::fromStdString(stadium[k].get_date_opened()));
                    QTableWidgetItem * capacity = new QTableWidgetItem(QString::fromStdString(stadium[k].get_seating_capacity()));
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
                    ui->tableWidget_Major->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
                }
                else {
                    count = ui->tableWidget_Major->rowCount();
                    ui->tableWidget_Major->insertRow(ui->tableWidget_Major->rowCount());

                    QTableWidgetItem * stadium_Name = new QTableWidgetItem(QString::fromStdString(stadium[k].get_stadium_name()));
                    QTableWidgetItem * team_Name = new QTableWidgetItem(QString::fromStdString(stadium[k].get_team_name()));
                    QTableWidgetItem * address = new QTableWidgetItem(QString::fromStdString(stadium[k].get_street_address()) + "\n" +
                                                                     QString::fromStdString(stadium[k].get_city_state_zip()));
                    QTableWidgetItem * box_Office = new QTableWidgetItem(QString::fromStdString(stadium[k].get_box_office()));
                    QTableWidgetItem * date_Opened = new QTableWidgetItem(QString::fromStdString(stadium[k].get_date_opened()));
                    QTableWidgetItem * capacity = new QTableWidgetItem(QString::fromStdString(stadium[k].get_seating_capacity()));
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
                    ui->tableWidget_Major->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);                    
                }

                QList<QTableWidgetItem *> ItemList = ui->tableWidget_Major->findItems(QString::fromStdString(stadium[k].get_stadium_name()), Qt::MatchExactly);

                if (ItemList.count() >= 2) {
                    ui->tableWidget_Major->removeRow(count);
                }
            }
        }
    }
}

void Widget::DisplayTable_MajorLeagueDateRealGrass() {
    int count, year, day;
    QString str_date, str_year, str_month, str_day;
    QStringList date, temp, dateSorted;

    for (int i = 0; i < stadium.getSize(); i++) {
        date << QString::fromStdString(stadium[i].get_date_opened());

        year = date[i].lastIndexOf(' ');
        day = date[i].indexOf(' ');

        for (int y = year + 1; y < date[i].size(); y++)
            str_year += date[i].at(y);

        for (int m = 0; m < day; m++) {
            str_month += date[i].at(m);
        }

        for (int c = 0; c < 12; c++) {
            if (str_month.contains(Month[c])) {
                str_month.clear();
                if (c < 10)
                    str_month = "0" + QString::fromStdString(to_string(c + 1));
                else
                    str_month = QString::fromStdString(to_string(c));
            }
        }

        for (int d = day + 1; d < date[i].indexOf(','); d++)
            str_day += date[i].at(d);

        if (stoi(str_day.toStdString()) < 10) {
            str_day.push_front("0");
        }

        temp << str_year + str_month + str_day;

        str_year.clear();
        str_month.clear();
        str_day.clear();
    }

    temp.sort();

    for (int h = 0; h < temp.size(); h++) {
        for (int j = 0; j < 4; j++) {
            str_year += temp[h].at(j);
        }
        str_month = QString(temp[h].at(4)) + QString(temp[h].at(5));
        for (int l = 0; l < 12; l++) {
            if (str_month.toInt() == l) {
                str_month = Month[l-1];
            }
        }
        str_day = QString(temp[h].at(6)) + QString(temp[h].at(7));
        if (str_day.contains('0') && str_day.toInt() < 10) {
            str_day = QString(temp[h].at(7));
        }

        str_date = str_month + " " + str_day + ", " + str_year;

        dateSorted << str_date;

        str_year.clear();
        str_month.clear();
        str_day.clear();
        str_date.clear();
    }

    ui->tableWidget_Major->setRowCount(0);

    for (int i = 0; i < stadium.getSize(); i++) {
        for (int k = 0; k < stadium.getSize(); k++) {
            if (QString::fromStdString(stadium[k].get_date_opened()) == dateSorted[i]) {
                if (QString::fromStdString(stadium[k].get_grass_type()) == "Y") {
                    count = ui->tableWidget_Major->rowCount();
                    ui->tableWidget_Major->insertRow(ui->tableWidget_Major->rowCount());

                    QTableWidgetItem * stadium_Name = new QTableWidgetItem(QString::fromStdString(stadium[k].get_stadium_name()));
                    QTableWidgetItem * team_Name = new QTableWidgetItem(QString::fromStdString(stadium[k].get_team_name()));
                    QTableWidgetItem * address = new QTableWidgetItem(QString::fromStdString(stadium[k].get_street_address()) + "\n" +
                                                                     QString::fromStdString(stadium[k].get_city_state_zip()));
                    QTableWidgetItem * box_Office = new QTableWidgetItem(QString::fromStdString(stadium[k].get_box_office()));
                    QTableWidgetItem * date_Opened = new QTableWidgetItem(QString::fromStdString(stadium[k].get_date_opened()));
                    QTableWidgetItem * capacity = new QTableWidgetItem(QString::fromStdString(stadium[k].get_seating_capacity()));
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
                    ui->tableWidget_Major->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
                }

                QList<QTableWidgetItem *> ItemList = ui->tableWidget_Major->findItems(QString::fromStdString(stadium[k].get_stadium_name()), Qt::MatchExactly);

                if (ItemList.count() >= 2) {
                    ui->tableWidget_Major->removeRow(count);
                }
            }
        }
    }
}

void Widget::DisplayTable_MajorLeagueDateArtifGrass() {
    int count, year, day;
    QString str_date, str_year, str_month, str_day;
    QStringList date, temp, dateSorted;

    for (int i = 0; i < stadium.getSize(); i++) {
        date << QString::fromStdString(stadium[i].get_date_opened());

        year = date[i].lastIndexOf(' ');
        day = date[i].indexOf(' ');

        for (int y = year + 1; y < date[i].size(); y++)
            str_year += date[i].at(y);

        for (int m = 0; m < day; m++) {
            str_month += date[i].at(m);
        }

        for (int c = 0; c < 12; c++) {
            if (str_month.contains(Month[c])) {
                str_month.clear();
                if (c < 10)
                    str_month = "0" + QString::fromStdString(to_string(c + 1));
                else
                    str_month = QString::fromStdString(to_string(c));
            }
        }

        for (int d = day + 1; d < date[i].indexOf(','); d++)
            str_day += date[i].at(d);

        if (stoi(str_day.toStdString()) < 10) {
            str_day.push_front("0");
        }

        temp << str_year + str_month + str_day;

        str_year.clear();
        str_month.clear();
        str_day.clear();
    }

    temp.sort();

    for (int h = 0; h < temp.size(); h++) {
        for (int j = 0; j < 4; j++) {
            str_year += temp[h].at(j);
        }
        str_month = QString(temp[h].at(4)) + QString(temp[h].at(5));
        for (int l = 0; l < 12; l++) {
            if (str_month.toInt() == l) {
                str_month = Month[l-1];
            }
        }
        str_day = QString(temp[h].at(6)) + QString(temp[h].at(7));
        if (str_day.contains('0') && str_day.toInt() < 10) {
            str_day = QString(temp[h].at(7));
        }

        str_date = str_month + " " + str_day + ", " + str_year;

        dateSorted << str_date;

        str_year.clear();
        str_month.clear();
        str_day.clear();
        str_date.clear();
    }

    ui->tableWidget_Major->setRowCount(0);

    for (int i = 0; i < stadium.getSize(); i++) {
        for (int k = 0; k < stadium.getSize(); k++) {
            if (QString::fromStdString(stadium[k].get_date_opened()) == dateSorted[i]) {
                if (QString::fromStdString(stadium[k].get_grass_type()) == "N") {
                    count = ui->tableWidget_Major->rowCount();
                    ui->tableWidget_Major->insertRow(ui->tableWidget_Major->rowCount());

                    QTableWidgetItem * stadium_Name = new QTableWidgetItem(QString::fromStdString(stadium[k].get_stadium_name()));
                    QTableWidgetItem * team_Name = new QTableWidgetItem(QString::fromStdString(stadium[k].get_team_name()));
                    QTableWidgetItem * address = new QTableWidgetItem(QString::fromStdString(stadium[k].get_street_address()) + "\n" +
                                                                     QString::fromStdString(stadium[k].get_city_state_zip()));
                    QTableWidgetItem * box_Office = new QTableWidgetItem(QString::fromStdString(stadium[k].get_box_office()));
                    QTableWidgetItem * date_Opened = new QTableWidgetItem(QString::fromStdString(stadium[k].get_date_opened()));
                    QTableWidgetItem * capacity = new QTableWidgetItem(QString::fromStdString(stadium[k].get_seating_capacity()));
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
                    ui->tableWidget_Major->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
                }

                QList<QTableWidgetItem *> ItemList = ui->tableWidget_Major->findItems(QString::fromStdString(stadium[k].get_stadium_name()), Qt::MatchExactly);

                if (ItemList.count() >= 2) {
                    ui->tableWidget_Major->removeRow(count);
                }
            }
        }
    }
}
