#include "Persone.h"

Persone::Persone()
{
    Name = "Ivan";
    Sname = "Ivanov";
    Pname ="Ivanovich";
    City = "Voronezh";
    Street = "Vladimira Nevskovko 11";
    Profession = "IT special";
    Gender = "Man";
    Age= 22;
    Income = 200005;
}

void Persone::SetName(const QString& Name) {this->Name = Name;}
void Persone::SetSname(const QString& Sname) { this->Sname = Sname; }
void Persone::SetPname(const QString& Pname) { this->Pname = Pname; }
void Persone::SetCity(const QString& City) { this->City = City; }
void Persone::SetStreet(const QString& Street) { this->Street = Street; }
void Persone::SetProfession(const QString& Profession) { this->Profession = Profession; }
void Persone::SetGender(const QString& Gender) {this->Gender = Gender;}
void Persone::SetAge(const int& Age) { this->Age = Age; }
void Persone::SetIncome(const int& Income) { this->Income = Income; }


QString Persone::getName()
{
   return Name;
}
QString Persone::getSname()
{
   return Sname;
}
QString Persone::getPname()
{
   return Pname;
}
QString Persone::getCity()
{
   return City;
}
QString Persone::getStreet()
{
   return Street;
}
QString Persone::getProfession()
{
   return Profession;
}
QString Persone::getGender()
{
   return Gender;
}
int Persone::getAge()
{
   return Age;
}
int Persone::getIncome()
{
   return Income;
}
Persone::~Persone()
{
}
