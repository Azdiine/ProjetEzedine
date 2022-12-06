#include "dialog.h"
#include "ui_dialog.h"



Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}



void Dialog::on_pushButton_8_clicked()
{
ui->stackedWidget->setCurrentIndex(4);
}


void Dialog::on_pushButton_9_clicked()
{
ui->stackedWidget->setCurrentIndex(6);

}

void Dialog::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    QPieSeries *series1 = new QPieSeries();

     series1->append("Open Area",300);

     series1->append("Offices",10);

     QChart * chart1=new QChart();

     chart1->addSeries(series1);

     chart1->setTitle("stats");

     QChartView * chartView1=new QChartView(chart1);

     chartView1->setRenderHints(QPainter::Antialiasing);
     QVBoxLayout *layout1 = new QVBoxLayout(ui->piechart_client);
     layout1->addWidget(chartView1);
     //

     QBarSet *set0=new QBarSet("altuve");
         QBarSet *set1=new QBarSet("martinez");
         QBarSet *set2=new QBarSet("segura");
         QBarSet *set3=new QBarSet("simons");
         QBarSet *set4=new QBarSet("trout");

         *set0 <<283<<341<<313<<338<<346<<335;
         *set1 <<250<<315<<282<<307<<303<<330;
         *set2 <<294<<346<<357<<319<<300<<325;
         *set3 <<248<<244<<265<<281<<278<<313;
         *set4 <<323<<287<<299<<315<<306<<313;

         QBarSeries *Series=new QBarSeries();
         Series->append(set0);
         Series->append(set1);
         Series->append(set2);
         Series->append(set3);
         Series->append(set4);

         QChart *chart=new QChart();
         chart->addSeries(Series);
         chart->setTitle("batting avg by year");
         //no animation
         chart->setAnimationOptions(QChart::AllAnimations);
         QStringList categories;
         categories<<"2013"<<"2014"<<"2015"<<"2016"<<"2017";
        QBarCategoryAxis *axis=new  QBarCategoryAxis();
        axis->append(categories);
        chart->createDefaultAxes();
        //chart->setAxisX(axis,Series);
        chart->legend()->setVisible(true);
        chart->legend()->setAlignment(Qt::AlignBottom);


        QChartView *chartview=new QChartView(chart) ;
        chartview->setRenderHint(QPainter::Antialiasing);

        QVBoxLayout *layout2 = new QVBoxLayout(ui->chart_client);
        layout2->addWidget(chartview);
}


void Dialog::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
    QPieSeries *series1 = new QPieSeries();

     series1->append("Open Area",300);

     series1->append("Offices",10);

     QChart * chart1=new QChart();

     chart1->addSeries(series1);

     chart1->setTitle("stats");

     QChartView * chartView1=new QChartView(chart1);

     chartView1->setRenderHints(QPainter::Antialiasing);
     QVBoxLayout *layout1 = new QVBoxLayout(ui->piechart_payment);
     layout1->addWidget(chartView1);
     //

     QBarSet *set0=new QBarSet("altuve");
         QBarSet *set1=new QBarSet("martinez");
         QBarSet *set2=new QBarSet("segura");
         QBarSet *set3=new QBarSet("simons");
         QBarSet *set4=new QBarSet("trout");

         *set0 <<283<<341<<313<<338<<346<<335;
         *set1 <<250<<315<<282<<307<<303<<330;
         *set2 <<294<<346<<357<<319<<300<<325;
         *set3 <<248<<244<<265<<281<<278<<313;
         *set4 <<323<<287<<299<<315<<306<<313;

         QBarSeries *Series=new QBarSeries();
         Series->append(set0);
         Series->append(set1);
         Series->append(set2);
         Series->append(set3);
         Series->append(set4);

         QChart *chart=new QChart();
         chart->addSeries(Series);
         chart->setTitle("batting avg by year");
         //no animation
         chart->setAnimationOptions(QChart::AllAnimations);
         QStringList categories;
         categories<<"2013"<<"2014"<<"2015"<<"2016"<<"2017";
        QBarCategoryAxis *axis=new  QBarCategoryAxis();
        axis->append(categories);
        chart->createDefaultAxes();
        //chart->setAxisX(axis,Series);
        chart->legend()->setVisible(true);
        chart->legend()->setAlignment(Qt::AlignBottom);


        QChartView *chartview=new QChartView(chart) ;
        chartview->setRenderHint(QPainter::Antialiasing);

        QVBoxLayout *layout2 = new QVBoxLayout(ui->chart_payment);
        layout2->addWidget(chartview);
}


void Dialog::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    QPieSeries *series1 = new QPieSeries();

     series1->append("Open Area",300);

     series1->append("Offices",10);

     QChart * chart1=new QChart();

     chart1->addSeries(series1);

     chart1->setTitle("stats");

     QChartView * chartView1=new QChartView(chart1);

     chartView1->setRenderHints(QPainter::Antialiasing);
     QVBoxLayout *layout1 = new QVBoxLayout(ui->piechart_reservation);
     layout1->addWidget(chartView1);
     //

     QBarSet *set0=new QBarSet("altuve");
         QBarSet *set1=new QBarSet("martinez");
         QBarSet *set2=new QBarSet("segura");
         QBarSet *set3=new QBarSet("simons");
         QBarSet *set4=new QBarSet("trout");

         *set0 <<283<<341<<313<<338<<346<<335;
         *set1 <<250<<315<<282<<307<<303<<330;
         *set2 <<294<<346<<357<<319<<300<<325;
         *set3 <<248<<244<<265<<281<<278<<313;
         *set4 <<323<<287<<299<<315<<306<<313;

         QBarSeries *Series=new QBarSeries();
         Series->append(set0);
         Series->append(set1);
         Series->append(set2);
         Series->append(set3);
         Series->append(set4);

         QChart *chart=new QChart();
         chart->addSeries(Series);
         chart->setTitle("batting avg by year");
         //no animation
         chart->setAnimationOptions(QChart::AllAnimations);
         QStringList categories;
         categories<<"2013"<<"2014"<<"2015"<<"2016"<<"2017";
        QBarCategoryAxis *axis=new  QBarCategoryAxis();
        axis->append(categories);
        chart->createDefaultAxes();
        //chart->setAxisX(axis,Series);
        chart->legend()->setVisible(true);
        chart->legend()->setAlignment(Qt::AlignBottom);


        QChartView *chartview=new QChartView(chart) ;
        chartview->setRenderHint(QPainter::Antialiasing);

        QVBoxLayout *layout2 = new QVBoxLayout(ui->chart_reservation);
        layout2->addWidget(chartview);
}


void Dialog::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    QPieSeries *series1 = new QPieSeries();

     series1->append("Open Area",300);

     series1->append("Offices",10);

     QChart * chart1=new QChart();

     chart1->addSeries(series1);

     chart1->setTitle("stats");

     QChartView * chartView1=new QChartView(chart1);

     chartView1->setRenderHints(QPainter::Antialiasing);
     QVBoxLayout *layout1 = new QVBoxLayout(ui->piechart_employee);
     layout1->addWidget(chartView1);
     //

     QBarSet *set0=new QBarSet("altuve");
         QBarSet *set1=new QBarSet("martinez");
         QBarSet *set2=new QBarSet("segura");
         QBarSet *set3=new QBarSet("simons");
         QBarSet *set4=new QBarSet("trout");

         *set0 <<283<<341<<313<<338<<346<<335;
         *set1 <<250<<315<<282<<307<<303<<330;
         *set2 <<294<<346<<357<<319<<300<<325;
         *set3 <<248<<244<<265<<281<<278<<313;
         *set4 <<323<<287<<299<<315<<306<<313;

         QBarSeries *Series=new QBarSeries();
         Series->append(set0);
         Series->append(set1);
         Series->append(set2);
         Series->append(set3);
         Series->append(set4);

         QChart *chart=new QChart();
         chart->addSeries(Series);
         chart->setTitle("batting avg by year");
         //no animation
         chart->setAnimationOptions(QChart::AllAnimations);
         QStringList categories;
         categories<<"2013"<<"2014"<<"2015"<<"2016"<<"2017";
        QBarCategoryAxis *axis=new  QBarCategoryAxis();
        axis->append(categories);
        chart->createDefaultAxes();
        //chart->setAxisX(axis,Series);
        chart->legend()->setVisible(true);
        chart->legend()->setAlignment(Qt::AlignBottom);


        QChartView *chartview=new QChartView(chart) ;
        chartview->setRenderHint(QPainter::Antialiasing);

        QVBoxLayout *layout2 = new QVBoxLayout(ui->chart_employee);
        layout2->addWidget(chartview);
}


void Dialog::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    QPieSeries *series1 = new QPieSeries();

     series1->append("Open Area",300);

     series1->append("Offices",10);

     QChart * chart1=new QChart();

     chart1->addSeries(series1);

     chart1->setTitle("stats");

     QChartView * chartView1=new QChartView(chart1);

     chartView1->setRenderHints(QPainter::Antialiasing);
     QVBoxLayout *layout1 = new QVBoxLayout(ui->piechart_accommodation);
     layout1->addWidget(chartView1);
     //
}


void Dialog::on_pushButton_24_clicked()
{
}

//------------------------------------------------------------------------reservation---stylesheet-------input-----------------------------------------------------------------

void Dialog::on_idclient_reservation_line_textChanged(const QString &arg1)
{
    ui->idclient_reservation_line->setStyleSheet("border-bottom: 1.5px solid #6563FF  ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_idclient_reservation_line_editingFinished()
{
    ui->idclient_reservation_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}





void Dialog::on_idpayment_reservation_line_textChanged(const QString &arg1)
{
    ui->idpayment_reservation_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_idpayment_reservation_line_editingFinished()
{
    ui->idpayment_reservation_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_id_reservation_line_textChanged(const QString &arg1)
{
    ui->id_reservation_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_id_reservation_line_editingFinished()
{
    ui->id_reservation_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_nbrplaces_reservation_line_textChanged(const QString &arg1)
{
    ui->nbrplaces_reservation_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600; border-radius:0px;");

}


void Dialog::on_nbrplaces_reservation_line_editingFinished()
{
    ui->nbrplaces_reservation_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_cityname_reservation_line_textChanged(const QString &arg1)
{
    ui->cityname_reservation_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_cityname_reservation_line_editingFinished()
{
    ui->cityname_reservation_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_searsh_reservation_line_textChanged(const QString &arg1)
{
    ui->searsh_reservation_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_searsh_reservation_line_editingFinished()
{
    ui->searsh_reservation_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}

//------------------------------------------------------------------------client---stylesheet-------input-----------------------------------------------------------------

void Dialog::on_id_client_line_textChanged(const QString &arg1)
{
    ui->id_client_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_id_client_line_editingFinished()
{
    ui->id_client_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_firstname_client_line_textChanged(const QString &arg1)
{
    ui->firstname_client_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_firstname_client_line_editingFinished()
{
    ui->firstname_client_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_name_client_line_textChanged(const QString &arg1)
{
    ui->name_client_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_name_client_line_editingFinished()
{
    ui->name_client_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_email_client_line_textChanged(const QString &arg1)
{
    ui->email_client_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_email_client_line_editingFinished()
{
    ui->email_client_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_age_client_line_textChanged(const QString &arg1)
{
    ui->age_client_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_age_client_line_editingFinished()
{
    ui->age_client_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_phonenumber_client_line_textChanged(const QString &arg1)
{
    ui->phonenumber_client_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_phonenumber_client_line_editingFinished()
{
    ui->phonenumber_client_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_searsh_client_line_textChanged(const QString &arg1)
{
    ui->searsh_client_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_searsh_client_line_editingFinished()
{
    ui->searsh_client_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}

//------------------------------------------------------------------------payment---stylesheet-------input-----------------------------------------------------------------

void Dialog::on_idclient_payment_line_textChanged(const QString &arg1)
{
    ui->idclient_payment_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_idclient_payment_line_editingFinished()
{
    ui->idclient_payment_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_id_payment_line_textChanged(const QString &arg1)
{
    ui->id_payment_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_id_payment_line_editingFinished()
{
    ui->id_payment_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_idreservation_payment_line_textChanged(const QString &arg1)
{
    ui->idreservation_payment_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_idreservation_payment_line_editingFinished()
{
    ui->idreservation_payment_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_id_employee_payment_line_textChanged(const QString &arg1)
{
    ui->id_employee_payment_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_id_employee_payment_line_editingFinished()
{
    ui->id_employee_payment_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_employeerole_payment_line_textChanged(const QString &arg1)
{
    ui->employeerole_payment_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_employeerole_payment_line_editingFinished()
{
    ui->employeerole_payment_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_cardname_payment_line_textChanged(const QString &arg1)
{
    ui->cardname_payment_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_cardname_payment_line_editingFinished()
{
    ui->cardname_payment_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_cardnum_payment_line_textChanged(const QString &arg1)
{
    ui->cardnum_payment_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_cardnum_payment_line_editingFinished()
{
    ui->cardnum_payment_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_searsh_payment_line_textChanged(const QString &arg1)
{
    ui->searsh_payment_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_searsh_payment_line_editingFinished()
{
    ui->searsh_payment_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}

//------------------------------------------------------------------------employee---stylesheet-------input-----------------------------------------------------------------

void Dialog::on_id_emloyee_line_textChanged(const QString &arg1)
{
    ui->id_emloyee_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_id_emloyee_line_editingFinished()
{
    ui->id_emloyee_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_firstname_emloyee_line_textChanged(const QString &arg1)
{
    ui->firstname_emloyee_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_firstname_emloyee_line_editingFinished()
{
    ui->firstname_emloyee_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_name_employee_line_textChanged(const QString &arg1)
{
    ui->name_employee_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_name_employee_line_editingFinished()
{
    ui->name_employee_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_age_emloyee_line_textChanged(const QString &arg1)
{
    ui->age_emloyee_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_age_emloyee_line_editingFinished()
{
    ui->age_emloyee_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_email_emloyee_line_textChanged(const QString &arg1)
{
    ui->email_emloyee_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_email_emloyee_line_editingFinished()
{
    ui->email_emloyee_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_adress_emloyee_line_textChanged(const QString &arg1)
{
    ui->adress_emloyee_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_adress_emloyee_line_editingFinished()
{
    ui->adress_emloyee_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_phonenumber_emloyee_line_textChanged(const QString &arg1)
{
    ui->phonenumber_emloyee_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_phonenumber_emloyee_line_editingFinished()
{
    ui->phonenumber_emloyee_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_searsh_emloyee_line_textChanged(const QString &arg1)
{
    ui->searsh_emloyee_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_searsh_emloyee_line_editingFinished()
{
    ui->searsh_emloyee_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}

//------------------------------------------------------------------------ Accommodation---stylesheet-------input-----------------------------------------------------------------



void Dialog::on_id_accommodation_line_textChanged(const QString &arg1)
{
    ui->id_accommodation_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_id_accommodation_line_editingFinished()
{
    ui->id_accommodation_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_idreservation_accommodation_line_textChanged(const QString &arg1)
{
    ui->idreservation_accommodation_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_idreservation_accommodation_line_editingFinished()
{
    ui->idreservation_accommodation_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_hotelname_accommodation_line_textChanged(const QString &arg1)
{
    ui->hotelname_accommodation_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_hotelname_accommodation_line_editingFinished()
{
    ui->hotelname_accommodation_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_hoteltelph_accommodation_line_textChanged(const QString &arg1)
{
    ui->hoteltelph_accommodation_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_hoteltelph_accommodation_line_editingFinished()
{
    ui->hoteltelph_accommodation_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_hotelrate_accommodation_line_textChanged(const QString &arg1)
{
    ui->hotelrate_accommodation_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_hotelrate_accommodation_line_editingFinished()
{
    ui->hotelrate_accommodation_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


void Dialog::on_searsh_accommodation_line_textChanged(const QString &arg1)
{
    ui->searsh_accommodation_line->setStyleSheet("border-bottom: 1.5px solid #6563FF ;color:#6563FF;font-weight:600;border-radius:0px; ");

}


void Dialog::on_searsh_accommodation_line_editingFinished()
{
    ui->searsh_accommodation_line->setStyleSheet("border-bottom: 1px solid #717072 ;color:#717072; ");

}


//--------------------------------------------------------------------------------------------------------------------------------------------------------------


void Dialog::on_pushButton_14_clicked()
{
   /* QPainter *painter;
    const QRect rect;
    const QDate date;


        if(date.dayOfWeek() == Qt::Monday)
        {
            painter->save();
            painter->fillRect(rect, Qt::green);
            painter->drawRect(rect);
            painter->drawText(rect, Qt::AlignCenter, QString::number(date.day()));
            painter->restore();
            ui->calendarWidget->paintCell(painter,rect,date);
        }

    QPainter *painter = new QPainter;

     const QDate date;
     const QRect rect;

      ui->calendarWidget->paintCell(painter,rect,date);
*/
}

//add
void Dialog::on_pushButton_22_clicked()
{

}

