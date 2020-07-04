#include <iostream>
#include "klick.h"

Klick::Klick(int one, int two, int three)
{
    this->one = one;
    this->two = two;
    this->three= three;
}

Klick::Klick()
{

}
Klick::Klick(const Klick&klick)
{
    this->one = klick.one;
    this->two = klick.two;
    this->three = klick.three;

}

void Klick::setManWom1(int one) { this->one = one; one=1; }
void Klick::setManWom2(int two) { this->two = two; two=2; }
void Klick::setManWom3(int three) { this->three = three; three=3; }

int Klick::getManWom1() { return one; }
int Klick::getManWom2() { return two; }
int Klick::getManWom3() { return three; }
