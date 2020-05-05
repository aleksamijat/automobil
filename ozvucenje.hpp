#ifndef OZVUCENJE_H_INCLUDED
#define OZVUCENJE_H_INCLUDED
#include "fixable.hpp"

enum OzvucenjeStanje {UKLJUCENO, ISKLJUCENO, NE_ISPRAVNO};

class Ozvucenje : public Fixable
{
private:
    OzvucenjeStanje stanje;
public:
    Ozvucenje()
    {
        stanje = ISKLJUCENO;
    }
    Ozvucenje(OzvucenjeStanje stanje_)
    {
        stanje = stanje_;
    }
    Ozvucenje(const Ozvucenje &copy_ozvucenje)
    {
        stanje = copy_ozvucenje.stanje;
    }
    OzvucenjeStanje getStanje()
    {
        return stanje;
    }
    void setStanje(OzvucenjeStanje stanje_)
    {
        stanje = stanje_;
    }
    void fix()override{
        if(stanje == NE_ISPRAVNO){
            stanje = ISKLJUCENO;
        }
    }
};

#endif // OZVUCENJE_H_INCLUDED
