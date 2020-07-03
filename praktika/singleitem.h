#ifndef SINGLEITEM_H
#define SINGLEITEM_H

#include <QDialog>

namespace Ui {
class SingleItem;
}

class SingleItem : public QDialog
{
    Q_OBJECT

public:
    explicit SingleItem(QWidget *parent = nullptr);
    ~SingleItem();

private:
    Ui::SingleItem *ui;
};

#endif // SINGLEITEM_H
