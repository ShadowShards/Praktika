#include <iostream>
#include <vector>
#include <string>
#include <QString>

using namespace std;

class Person
{
private:
    QString Name;
    QString Sname;
    QString Pname;
    QString City;
    QString Street;
    QString Profession;
    int Age;
    int Income;
    public:
    Person();
    void SetName(const QString& Name);
    void SetSname(const QString& Sname);
    void SetPname(const QString& Pname);
    void SetCity(const QString& City);
    void SetStreet(const QString& Street);
    void SetProfession(const QString& Profession);
    void SetAge(const int& Age);
    void SetIncome(const int& Income);
    QString getName();
    QString getSname();
    QString getPname();
    QString getCity();
    QString getStreet();
    QString getProfession();
    int getAge();
    int getIncome();
    ~Person();


};
