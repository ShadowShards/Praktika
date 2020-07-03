//код главного окна
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tablewindow.h"
#include <QTableWidget>
#include "Book.h"
#include <QString>
#include <QLineEdit>
#include <QMessageBox>
#include <singleitem.h>
#include <vector>

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

//функция , обрабатывающая sdнажатие на кнопу открыть полный список
void MainWindow::on_pushButton_2_clicked()
{
    tablewindow w;
    w.setModal(true);
    w.exec();
}

//функция , обрабатывающая нажатие на кнопу сгенерировать
void MainWindow::on_pushButton_clicked()
{
    //тестовое заполнение класса
    Book book = Book();
    book.setBookAutor(ui->lineEditName->text());
    book.setBookName(ui->lineEditSurename->text());
    book.setBookPublish(ui->lineEditPatronymic->text());
    book.setBookReleaseyear(4) ;
    book.setBookPages(6) ;

    Book boosk = Book();
    boosk.setBookAutor("ui->lineEditName->text()");
    boosk.setBookName("ui->lineEditSurename->text()");
    boosk.setBookPublish(ui->lineEditPatronymic->text());
    boosk.setBookReleaseyear(4) ;
    boosk.setBookPages(6) ;

    vector<Book> books;
    books.push_back(book);
    books.push_back(boosk);

    if(ui->spinBoxOt->value() > ui->spinBoxDo->value())
    {
        QMessageBox::critical(this,"Error","incorrect entry of age");
        return;
    }

    for(unsigned int i=0; i< books.size();i++)
    {
        QTableWidgetItem *itm = new QTableWidgetItem(books[i].getBookAutor());
        QTableWidgetItem *it1m = new QTableWidgetItem(books [i].getBookName());

        ui->tableWidget->setItem(i,0,itm);
        ui->tableWidget->setItem(i,1,it1m);
    }


}

//функция кнопки экспорта
void MainWindow::on_pushButton_3_clicked()
{

}



void MainWindow::on_tableWidget_cellDoubleClicked(int row, int column)
{
    SingleItem item;
    item.setModal(true);
    item.exec();
}
