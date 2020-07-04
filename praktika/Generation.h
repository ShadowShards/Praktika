#ifndef GENERATION_H
#define GENERATION_H
#endif // GENERATION_H
#include <QString>
#include <iostream>
#include <fstream>
#include <chrono>
#include <random>
#include <set>
#include <cstdlib>
#include <ctime>

using namespace std;
class Generation
{
public:

    //генерация случайного мужской фамилии
    QString GenerationSMname()
    {

        default_random_engine generator (chrono::system_clock::now().time_since_epoch().count());
              uniform_int_distribution<int> distribution(1, 100);

              set<int> n;
              while (n.size() != 1) n.insert(distribution(generator));

              string Sname;

              ifstream ifs("surenameman.txt");
              ofstream ofs("outfile.txt");
              int i = 1;
              while (getline(ifs, Sname))
                  if (n.count(i++) > 0)
                      ofs << Sname << endl;
              QString SMname = QString::fromStdString(Sname);
              return SMname;
    }

    //генерация случайного женской фамилии
    QString GenerationSWname()
    {

        default_random_engine generator (chrono::system_clock::now().time_since_epoch().count());
              uniform_int_distribution<int> distribution(1, 100);

              set<int> n;
              while (n.size() != 1) n.insert(distribution(generator));

              string SName;
              ifstream ifs("surenamewoman.txt");
              ofstream ofs("outfile.txt");
              int i = 1;
              while (getline(ifs, SName))
                  if (n.count(i++) > 0)
                      ofs << SName << endl;
              QString SWname = QString::fromStdString(SName);
              return SWname;
    }

    //генерация случайной мужскокой или женской фамилии
    QString GenerationSMWname()
    {

        default_random_engine generator (chrono::system_clock::now().time_since_epoch().count());
              uniform_int_distribution<int> distribution(1, 100);

              set<int> n;
              while (n.size() != 1) n.insert(distribution(generator));

              string SName;
              ifstream ifs("surenamewoman.txt");
              ofstream ofs("outfile.txt");
              int i = 1;
              while (getline(ifs, SName))
                  if (n.count(i++) > 0)
                      ofs << SName << endl;
              QString SMWname = QString::fromStdString(SName);
              return SMWname;
    }

    //генерация случайного мужского имени
    QString GenerationMname()
    {

        default_random_engine generator (chrono::system_clock::now().time_since_epoch().count());
              uniform_int_distribution<int> distribution(1, 100);

              set<int> n;
              while (n.size() != 1) n.insert(distribution(generator));

              string name;

              ifstream ifs("nameman.txt");
              ofstream ofs("outfile.txt");
              int i = 1;
              while (getline(ifs, name))
                  if (n.count(i++) > 0)
                      ofs << name << endl;
              QString Mname = QString::fromStdString(name);
              return Mname;
    }

    //генерация случайного женского имени
    QString GenerationWname()
    {

        default_random_engine generator (chrono::system_clock::now().time_since_epoch().count());
              uniform_int_distribution<int> distribution(1, 100);

              set<int> n;
              while (n.size() != 1) n.insert(distribution(generator));

              string Name;
              ifstream ifs("namewoman.txt");
              ofstream ofs("outfile.txt");
              int i = 1;
              while (getline(ifs, Name))
                  if (n.count(i++) > 0)
                      ofs << Name << endl;
              QString Wname = QString::fromStdString(Name);
              return Wname;
    }

    //генерация случайного мужского или женского имени
    QString GenerationMWname()
    {

        default_random_engine generator (chrono::system_clock::now().time_since_epoch().count());
              uniform_int_distribution<int> distribution(1, 100);

              set<int> n;
              while (n.size() != 1) n.insert(distribution(generator));

              string Name;
              ifstream ifs("WoManname.txt");
              ofstream ofs("outfile.txt");
              int i = 1;
              while (getline(ifs, Name))
                  if (n.count(i++) > 0)
                      ofs << Name << endl;
              QString Wname = QString::fromStdString(Name);
              return Wname;
    }

    //генерация случайного мужского отчества
    QString GenerationPMname()
    {

        default_random_engine generator (chrono::system_clock::now().time_since_epoch().count());
              uniform_int_distribution<int> distribution(1, 100);

              set<int> n;
              while (n.size() != 1) n.insert(distribution(generator));

              string Pname;

              ifstream ifs("patronymicman.txt");
              ofstream ofs("outfile.txt");
              int i = 1;
              while (getline(ifs, Pname))
                  if (n.count(i++) > 0)
                      ofs << Pname << endl;
              QString PMname = QString::fromStdString(Pname);
              return PMname;
    }

    //генерация случайного женского отчества
    QString GenerationPWname()
    {

        default_random_engine generator (chrono::system_clock::now().time_since_epoch().count());
              uniform_int_distribution<int> distribution(1, 100);

              set<int> n;
              while (n.size() != 1) n.insert(distribution(generator));

              string PName;
              ifstream ifs("patronymicwomale.txt");
              ofstream ofs("outfile.txt");
              int i = 1;
              while (getline(ifs, PName))
                  if (n.count(i++) > 0)
                      ofs << PName << endl;
              QString PWname = QString::fromStdString(PName);
              return PWname;
    }

    //генерация случайного мужского или женского отчества
    QString GenerationPMWname()
    {

        default_random_engine generator (chrono::system_clock::now().time_since_epoch().count());
              uniform_int_distribution<int> distribution(1, 100);

              set<int> n;
              while (n.size() != 1) n.insert(distribution(generator));

              string PName;
              ifstream ifs("patronymicwomanman.txt");
              ofstream ofs("outfile.txt");
              int i = 1;
              while (getline(ifs, PName))
                  if (n.count(i++) > 0)
                      ofs << PName << endl;
              QString PMWname = QString::fromStdString(PName);
              return PMWname;
    }

    //генрация случайного возраста
    unsigned int GenerationAge()
    {

        srand(time(NULL));
        int A = 18;
        int B = 100;
        int age = 0;
        ofstream ofs("age.txt");
             for(int i = 0; i < 1; i++)

             {
             age =A + rand() % ((B + 1) - A);
             ofs << age << endl;
             }
        return age;
    }

    //генерация случайного города
    QString GenerationCiti()
    {

        default_random_engine generator (chrono::system_clock::now().time_since_epoch().count());
              uniform_int_distribution<int> distribution(1, 100);

              set<int> n;
              while (n.size() != 1) n.insert(distribution(generator));

              string citi;

              ifstream ifs("citi.txt");
              ofstream ofs("outfile.txt");
              int i = 1;
              while (getline(ifs, citi))
                  if (n.count(i++) > 0)
                      ofs << citi << endl;
              QString PersoneCiti = QString::fromStdString(citi);
              return PersoneCiti;
    }

    //генерация случайной улицы
    QString GenerationStreet()
    {

        default_random_engine generator (chrono::system_clock::now().time_since_epoch().count());
              uniform_int_distribution<int> distribution(1, 100);

              set<int> n;
              while (n.size() != 1) n.insert(distribution(generator));

              string street;

              ifstream ifs("streets.txt");
              ofstream ofs("outfile.txt");
              int i = 1;
              while (getline(ifs, street))
                  if (n.count(i++) > 0)
                      ofs << street << endl;
              QString PersoneStreet = QString::fromStdString(street);
              return PersoneStreet;
    }

    //генерация случайной профессии
    QString GenerationProffesion()
    {

        default_random_engine generator (chrono::system_clock::now().time_since_epoch().count());
              uniform_int_distribution<int> distribution(1, 100);

              set<int> n;
              while (n.size() != 1) n.insert(distribution(generator));

              string proffesion;

              ifstream ifs("proffession.txt");
              ofstream ofs("outfile.txt");
              int i = 1;
              while (getline(ifs, proffesion))
                  if (n.count(i++) > 0)
                      ofs << proffesion << endl;
              QString PersoneProffesion = QString::fromStdString(proffesion);
              return PersoneProffesion;
    }

    //генерация З/П
    unsigned int GenerationIncome()
    {

        srand(time(NULL));
        int A = 10000;
        int B = 1000000;
        int income = 0;
        ofstream ofs("income.txt");
             for(int i = 0; i < 1; i++)

             {
             income = A + rand() % ((B + 1) - A);
             ofs << income << endl;
             }
        return income;
    }

};



