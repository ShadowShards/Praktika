/********************************************************************************
** Form generated from reading UI file 'allperosn.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLPEROSN_H
#define UI_ALLPEROSN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_AllPerosn
{
public:

    void setupUi(QDialog *AllPerosn)
    {
        if (AllPerosn->objectName().isEmpty())
            AllPerosn->setObjectName(QString::fromUtf8("AllPerosn"));
        AllPerosn->resize(400, 300);

        retranslateUi(AllPerosn);

        QMetaObject::connectSlotsByName(AllPerosn);
    } // setupUi

    void retranslateUi(QDialog *AllPerosn)
    {
        AllPerosn->setWindowTitle(QCoreApplication::translate("AllPerosn", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AllPerosn: public Ui_AllPerosn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLPEROSN_H
