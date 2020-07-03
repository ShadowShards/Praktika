//код главного окна
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tablewindow.h"
#include <QTableWidget>
#include "Book.h"
#include <QString>

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

//функция , обрабатывающая нажатие на кнопу 2
void MainWindow::on_pushButton_2_clicked()
{
    tablewindow w;
    w.setModal(true);
    w.exec();
}

//функция , обрабатывающая нажатие на кнопу
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


