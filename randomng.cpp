#include <iostream>
#include "randomng.h"
#include "ui_randomng.h"
#include <stdlib.h>

using namespace std;
int L1,L2,wynik;
randomng::randomng(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::randomng)
{
    ui->setupUi(this);
}

randomng::~randomng()
{
    delete ui;
}
void randomng::on_los_clicked(){
    L1=ui->liczba_min->text().toDouble();
    L2=ui->liczba_max->text().toDouble();
    wynik=(rand()%(L1-L2))+L1;
    QString s1=QString::number(wynik);
    ui->wynik->setText(s1);
}
