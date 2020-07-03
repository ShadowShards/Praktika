#ifndef GENERATION_H
#define GENERATION_H
#include <QString>
#endif // GENERATION_H
#include <iostream>
#include <fstream>
#include <chrono>
#include <random>
#include <set>



using namespace std;
class Generation
{
public:
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
};

