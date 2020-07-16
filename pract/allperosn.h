#ifndef ALLPEROSN_H
#define ALLPEROSN_H

#include <QDialog>

namespace Ui {
class AllPerosn;
}

class AllPerosn : public QDialog
{
    Q_OBJECT

public:
    explicit AllPerosn(QWidget *parent = nullptr);
    ~AllPerosn();

private:
    Ui::AllPerosn *ui;
};

#endif // ALLPEROSN_H
