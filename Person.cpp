#include <iostream>
#include <vector>
#include "Person.h"
#include <string>
#include <QString>

using namespace std;

Person::Person()
{
     Name = "Ivan";
     Sname = "Ivanov";
     Pname ="Ivanovich";
     City = "Voronezh";
     Street = "Vladimira Nevskovko 11";
     Profession = "IT special";
     Age= 22;
     Income = 200005;
}

void Person::SetName(const QString& Name) {this->Name = Name;}
void Person::SetSname(const QString& Sname) { this->Sname = Sname; }
void Person::SetPname(const QString& Pname) { this->Pname = Pname; }
void Person::SetCity(const QString& City) { this->City = City; }
void Person::SetStreet(const QString& Street) { this->Street = Street; }
void Person::SetProfession(const QString& Profession) { this->Profession = Profession; }
void Person::SetAge(const int& Age) { this->Age = Age; }
void Person::SetIncome(const int& Income) { this->Income = Income; }


QString Person::getName()
{
    return Name;
}
QString Person::getSname()
{
    return Sname;
}
QString Person::getPname()
{
    return Pname;
}
QString Person::getCity()
{
    return City;
}
QString Person::getStreet()
{
    return Street;
}
QString Person::getProfession()
{
    return Profession;
}
int Person::getAge()
{
    return Age;
}
int Person::getIncome()
{
    return Income;
}
Person::~Person()
{

}
