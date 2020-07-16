#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Generator.h"
#include <QMainWindow>
#include "ui_mainwindow.h"
#include <QTableWidget>
#include <QLineEdit>
#include <QMessageBox>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:



    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    vector<Persone> personList;
};
#endif // MAINWINDOW_H
