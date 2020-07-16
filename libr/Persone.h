#ifndef PERSONE_H
#define PERSONE_H
#include <iostream>
#include <vector>
#include <string>
#include <QString>

class Persone
{
private:
    QString Name;
    QString Sname;
    QString Pname;
    QString City;
    QString Street;
    QString Profession;
    QString Gender;
    int Age;
    int Income;
public:
    Persone();
    void SetName(const QString& Name);
    void SetSname(const QString& Sname);
    void SetPname(const QString& Pname);
    void SetCity(const QString& City);
    void SetStreet(const QString& Street);
    void SetProfession(const QString& Profession);
    void SetGender(const QString& Gender);
    void SetAge(const int& Age);
    void SetIncome(const int& Income);
    QString getName();
    QString getSname();
    QString getPname();
    QString getCity();
    QString getStreet();
    QString getProfession();
    QString getGender();
    int getAge();
    int getIncome();
    ~Persone();

};

#endif // PERSONE_H
