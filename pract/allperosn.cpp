#include "allperosn.h"
#include "ui_allperosn.h"

AllPerosn::AllPerosn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AllPerosn)
{
    ui->setupUi(this);
}

AllPerosn::~AllPerosn()
{
    delete ui;
}
