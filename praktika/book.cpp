//тестовый класс
#include <iostream>
#include "Book.h"


Book::Book(QString autor, QString name, QString publish, int releaseyear, int pages)
{
    this->autor = autor;
    this->name = name;
    this->publish = publish;
    this->releaseyear = releaseyear;
    this->pages = pages;
}

Book::Book()
{

}


Book::Book(const Book& book)
{
    this->autor = book.autor;
    this->name = book.name;
    this->publish = book.publish;
    this->releaseyear = book.releaseyear;
    this->pages = book.pages;
}


void Book::setBookAutor(QString autor) { this->autor = autor; }
void Book::setBookName(QString name) { this->name = name; }
void Book::setBookPublish(QString publish) { this->publish = publish; }
void Book::setBookReleaseyear(int releaseyear) { this->releaseyear = releaseyear; }
void Book::setBookPages(int pages) { this->pages = pages; }


QString Book::getBookAutor() { return autor; }
QString Book::getBookName() { return name; }
QString Book::getBookPublish() { return publish; }
int Book::getBookReleaseyear() { return releaseyear; }
int Book::getBookPages() { return pages; }



