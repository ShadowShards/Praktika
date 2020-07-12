#include "Generation.h"
#include <QString>
#include <iostream>
#include <fstream>
#include <chrono>
#include <random>
#include <set>
#include <cstdlib>
#include <ctime>

QString Generation::GenerationSMname()
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

QString Generation::GenerationSWname()
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

QString Generation::GenerationMname()
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

QString Generation::GenerationWname()
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

QString Generation::GenerationPMname()
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

QString Generation::GenerationPWname()
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

unsigned int Generation::GenerationAge()
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

QString Generation::GenerationCiti()
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

QString Generation::GenerationStreet()
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

QString Generation::GenerationProffesion()
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

unsigned int Generation::GenerationIncome()
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
