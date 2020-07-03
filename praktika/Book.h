//тестовый класс
#ifndef BOOK_H
#define BOOK_H

#endif // BOOK_H


#include <QString>
using namespace std;

class Book
{
private:
    QString autor;
    QString name;
    QString publish;
    int releaseyear;
    int pages;
public:
    Book();
    Book(QString, QString, QString, int, int) ;
    Book(const Book& ) ;


    void setBookAutor(QString );
    void setBookName(QString );
    void setBookPublish(QString );
    void setBookReleaseyear(int );
    void setBookPages(int );

    QString getBookAutor();
    QString getBookName();
    QString getBookPublish();
    int getBookReleaseyear();
    int getBookPages();

    void showBookInfo();
};
