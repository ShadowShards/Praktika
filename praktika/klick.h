#ifndef KLICK_H
#define KLICK_H

#endif // KLICK_H
class Klick
{
private:
    unsigned int one;
    unsigned int two;
    unsigned int three;

public:
    Klick();
    Klick(int, int, int);
    Klick(const Klick&);

    void setManWom1(int);
    void setManWom2(int);
    void setManWom3(int);

    int getManWom1();
    int getManWom2();
    int getManWom3();
};
