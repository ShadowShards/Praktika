#include "Generator.h"



QString Generation::GenerationSMname(int gender)
{
    if (gender == 1)
    {
        default_random_engine generator (chrono::system_clock::now().time_since_epoch().count());
        uniform_int_distribution<int> distribution(1, 100);

       set<int> n;
       while (n.size() != 1) n.insert(distribution(generator));


        string Sname;

        ifstream ifs("data\\surenameman.txt");
        ofstream ofs("outfile.txt");
        int i = 1;
        while (getline(ifs, Sname))
            if (n.count(i++)>0)
            {
                QString SMname = QString::fromStdString(Sname);
                return SMname;
            }
        //QString SMname = QString::fromStdString(Sname);

    }
    else if (gender == 2)
    {
        default_random_engine generator (chrono::system_clock::now().time_since_epoch().count());
        uniform_int_distribution<int> distribution(1, 100);

        set<int> n;
        while (n.size() != 1) n.insert(distribution(generator));

        string Sname;
        ifstream ifs("data\\surenamewoman.txt");
        ofstream ofs("outfile.txt");
        int i = 1;
        while (getline(ifs, Sname))
            if (n.count(i++) > 0)
            {
                QString SMname = QString::fromStdString(Sname);
                return SMname;
            }
    }
    return "error";
}


QString Generation::GenerationMname(int gender)
{
    if(gender == 1)
    {

        default_random_engine generator (chrono::system_clock::now().time_since_epoch().count());
        uniform_int_distribution<int> distribution(1, 100);

        set<int> n;
        while (n.size() != 1) n.insert(distribution(generator));

        string name;

        ifstream ifs("data\\nameman.txt");
        ofstream ofs("outfile.txt");
        int i = 1;
        while (getline(ifs, name))
            if (n.count(i++) > 0)
            {
                QString Mname = QString::fromStdString(name);
                return Mname;
            }

    }
    else if (gender == 2)
    {

        default_random_engine generator (chrono::system_clock::now().time_since_epoch().count());
              uniform_int_distribution<int> distribution(1, 100);

              set<int> n;
              while (n.size() != 1) n.insert(distribution(generator));

              string Name;
              ifstream ifs("data\\namewoman.txt");
              ofstream ofs("outfile.txt");
              int i = 1;
              while (getline(ifs, Name))
                  if (n.count(i++) > 0)
                  {
                      QString Wname = QString::fromStdString(Name);
                      return Wname;
                  }

    }

        return "error";
   }



QString Generation::GenerationPMname(int gender)
{
    if (gender == 1)
    {
        default_random_engine generator (chrono::system_clock::now().time_since_epoch().count());
        uniform_int_distribution<int> distribution(1, 100);

        set<int> n;
        while (n.size() != 1) n.insert(distribution(generator));

        string Pname;

        ifstream ifs("data\\patronymicman.txt");
        ofstream ofs("outfile.txt");
        int i = 1;
        while (getline(ifs, Pname))
            if (n.count(i++) > 0)
            {
                QString PMname = QString::fromStdString(Pname);
                return PMname;
            }

    }
    else if (gender == 2)
    {
        default_random_engine generator (chrono::system_clock::now().time_since_epoch().count());
              uniform_int_distribution<int> distribution(1, 100);

              set<int> n;
              while (n.size() != 1) n.insert(distribution(generator));

              string PName;
              ifstream ifs("data\\patronymicwomale.txt");
              ofstream ofs("outfile.txt");
              int i = 1;
              while (getline(ifs, PName))
                  if (n.count(i++) > 0)
                  {
                      QString PWname = QString::fromStdString(PName);
                      return PWname;
                  }

    }
    return "error";
}



unsigned int Generation::GenerationAge()
{
    std::random_device random_device; // Источник энтропии.
       std::mt19937 generator(chrono::system_clock::now().time_since_epoch().count()); // Генератор случайных чисел.
       // (Здесь берется одно инициализирующее значение, можно брать больше)

       std::uniform_int_distribution<> distribution(this->lowAge, this->upAge); // Равномерное распределение [10, 20]

       int age = distribution(generator); // Случайное число.

    return age;
}

QString Generation::GenerationCiti()
{

    default_random_engine generator (chrono::system_clock::now().time_since_epoch().count()%1000000);
          uniform_int_distribution<int> distribution(1, 100);

          set<int> n;
          while (n.size() != 1) n.insert(distribution(generator));

          string citi;

          ifstream ifs("data\\citi.txt");
          ofstream ofs("outfile.txt");
          int i = 1;
          while (getline(ifs, citi))
              if (n.count(i++) > 0)
              {
                  QString PersoneCiti = QString::fromStdString(citi);
                  return PersoneCiti;
              }

}

QString Generation::GenerationStreet()
{

    default_random_engine generator (chrono::system_clock::now().time_since_epoch().count()%1000000);
          uniform_int_distribution<int> distribution(1, 100);

          set<int> n;
          while (n.size() != 1) n.insert(distribution(generator));

          string street;

          ifstream ifs("data\\streets.txt");
          ofstream ofs("outfile.txt");
          int i = 1;
          while (getline(ifs, street))
              if (n.count(i++) > 0)
              {
                  QString PersoneStreet = QString::fromStdString(street);
                  return PersoneStreet;
              }

}

QString Generation::GenerationProffesion()
{

    default_random_engine generator (chrono::system_clock::now().time_since_epoch().count()%1000000);
          uniform_int_distribution<int> distribution(1, 100);

          set<int> n;
          while (n.size() != 1) n.insert(distribution(generator));

          string proffesion;

          ifstream ifs("data\\proffession.txt");
          ofstream ofs("outfile.txt");
          int i = 1;
          while (getline(ifs, proffesion))
              if (n.count(i++) > 0)
              {
                  QString PersoneProffesion = QString::fromStdString(proffesion);
                  return PersoneProffesion;
              }

}

unsigned int Generation::GenerationIncome()
{

    std::random_device random_device;
       std::mt19937 generator(chrono::system_clock::now().time_since_epoch().count());


       std::uniform_int_distribution<> distribution(10000, 200000);

       int income = distribution(generator);

    return income;
}

QString Generation::GenerationGender(int gender)
{
    if (gender == 1)
        return "M";
    else if (gender == 2)
        return "W";
    return "error";
}

void Generation::setAgeGran(int lowAge,int upAge)
{
    this->lowAge=lowAge;
    this->upAge=upAge;
}

void Generation::setGender(int gender)
{
    this->Gender = gender;
}

vector<Person> Generation::GetPersonList(int quantity)
{
    vector<Person> personlist;



    for (int i=0;i<quantity;i++)
    {


        Person person = Person();
        if (this->Gender == 1 || this->Gender == 2 )
        {
            person.SetName(this->GenerationMname(this->Gender));
            person.SetSname(this->GenerationSMname(this->Gender));
            person.SetPname(this->GenerationPMname(this->Gender));
            person.SetGender(this->GenerationGender(this->Gender));
        }
        else
        {
            int gender;
            gender = rand() % 2 + 1;
            person.SetName(this->GenerationMname(gender));
            person.SetSname(this->GenerationSMname(gender));
            person.SetPname(this->GenerationPMname(gender));
            person.SetGender(this->GenerationGender(gender));
        }
        person.SetAge(this->GenerationAge());
        person.SetCity(this->GenerationCiti());
        person.SetIncome(this->GenerationIncome());
        person.SetStreet(this->GenerationStreet());
        person.SetProfession(this->GenerationProffesion());
        personlist.push_back(person);

    }

    return personlist;
}







