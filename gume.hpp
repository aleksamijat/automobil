#ifndef GUME_HPP_INCLUDED
#define GUME_HPP_INCLUDED
#include "fixable.hpp"

enum GumeStanje {NADUVANE, IZDUVANE, BUSNE};

class Gume : public Fixable
{
private:
    GumeStanje stanje;
public:
    Gume()
    {
        stanje = NADUVANE;
    }
    Gume(GumeStanje stanje_)
    {
        stanje = stanje_;
    }
    Gume(const Gume &copy_gume)
    {
        stanje = copy_gume.stanje;
    }
    GumeStanje getStanje()
    {
        return stanje;
    }
    void setStanje(GumeStanje stanje_)
    {
        stanje = stanje_;
    }
    void fix()override{
        if(stanje == BUSNE){
            stanje = IZDUVANE;
        }
    }
};

#endif // GUME_HPP_INCLUDED
