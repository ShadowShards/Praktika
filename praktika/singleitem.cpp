#include "singleitem.h"
#include "ui_singleitem.h"

SingleItem::SingleItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SingleItem)
{
    ui->setupUi(this);
}

SingleItem::~SingleItem()
{
    delete ui;
}
