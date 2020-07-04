//код главного окна
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tablewindow.h"
#include <QTableWidget>
#include "Book.h"
#include <QString>
#include "Generation.h"
#include "klick.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->setRowCount(10);

}

MainWindow::~MainWindow()
{
    delete ui;
}

//функци€ , обрабатывающа€ нажатие на кнопу 2
void MainWindow::on_pushButton_2_clicked()
{
    tablewindow w;
    w.setModal(true);
    w.exec();
}

//функци€ , обрабатывающа€ нажатие на кнопу
void MainWindow::on_pushButton_clicked()
{
 //тестовое заполнение класса
    Book book = Book();
    book.setBookAutor("asdasd");
    book.setBookName("asdasd");
    book.setBookPublish("asdasd");
    book.setBookReleaseyear(4) ;
    book.setBookPages(6) ;

    QTableWidgetItem *itm = new QTableWidgetItem(book.getBookName());
    QTableWidgetItem *it1m = new QTableWidgetItem(book.getBookAutor());

    ui->tableWidget->setItem(0,0,itm);
    ui->tableWidget->setItem(0,1,it1m);

}

//функци€ определ€юща€ пол по нажатию кнопки
//не работает!
void MainWindow::on_radioButton_pressed()
{
    Generation generation = Generation();
     Klick klick = Klick();
     klick.setManWom1(1);
     klick.setManWom2(2);
     klick.setManWom3(3);

     if(klick.getManWom1() == 1){
       generation.GenerationMname();
     }
     if(klick.getManWom2() == 2){
       generation.GenerationWname();
     }
     if(klick.getManWom3()== 3){
       generation.GenerationMWname();
     }
     //   Generation generation = Generation();
     //   QTableWidgetItem *itM = new QTableWidgetItem(generation.GenerationMname());
     //   ui->tableWidget->setItem(0,0,itM);
     //   QTableWidgetItem *itW = new QTableWidgetItem(generation.GenerationWname());
     //  ui->tableWidget->setItem(0,0,itW);
     //  QTableWidgetItem *itMW = new QTableWidgetItem(generation.GenerationMWname());
     //   ui->tableWidget->setItem(0,0,itMW);
}
