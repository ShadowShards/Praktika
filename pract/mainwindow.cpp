//код главного окна
#include "mainwindow.h"
#include <QTableWidget>
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}



MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    Generation generate = Generation();
    generate.setAgeGran(ui->spinBox->value(),ui->spinBox_2->value());


    if(ui->radioButton->isChecked())
    {
        generate.setGender(1);
    }
    else if (ui->radioButton_2->isChecked())
    {
        generate.setGender(2);
    }
    else
    {
        generate.setGender(0);
    }

    this->personList = generate.GetPersonList(ui->spinBox_3->value());
    ui->tableWidget->setRowCount(ui->spinBox_3->value());


    for(int i=0; i<ui->spinBox_3->value() ;i++)
    {

        QTableWidgetItem *itmName = new QTableWidgetItem(this->personList[i].getName());
        QTableWidgetItem *itmSname = new QTableWidgetItem(this->personList[i].getSname());
        QTableWidgetItem *itmGender = new QTableWidgetItem(this->personList[i].getGender());
        QTableWidgetItem *itmAge = new QTableWidgetItem(QString::number(this->personList[i].getAge()));


        ui->tableWidget->setItem(i,0,itmName);
        ui->tableWidget->setItem(i,1,itmSname);
        ui->tableWidget->setItem(i,2,itmGender);
        ui->tableWidget->setItem(i,3,itmAge);
    }


}


