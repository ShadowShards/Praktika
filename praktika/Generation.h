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
    QString GenerationSMname();

    //генерация случайного женской фамилии
    QString GenerationSWname();


    //генерация случайной мужскокой или женской фамилии
    QString GenerationSMWname();

    //генерация случайного мужского имени
    QString GenerationMname();


    //генерация случайного женского имени
    QString GenerationWname();

    //генерация случайного мужского или женского имени
    QString GenerationMWname();


    //генерация случайного мужского отчества
    QString GenerationPMname();


    //генерация случайного женского отчества
    QString GenerationPWname();


    //генерация случайного мужского или женского отчества
    QString GenerationPMWname();

    //генрация случайного возраста
    unsigned int GenerationAge();

    //генерация случайного города
    QString GenerationCiti();


    //генерация случайной улицы
    QString GenerationStreet();

    //генерация случайной профессии
    QString GenerationProffesion();


    //генерация З/П
    unsigned int GenerationIncome();


};



