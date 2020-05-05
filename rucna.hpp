#ifndef RUCNA_HPP_INCLUDED
#define RUCNA_HPP_INCLUDED
#include "fixable.hpp"

enum RucnaStanje {ANGAZOVANA, NE_ANGAZOVANA, NE_ISPRAVNA_RUCNA};

class Rucna : public Fixable
{
private:
    RucnaStanje stanje;
public:
    Rucna()
    {
        stanje = ANGAZOVANA;
    }
    Rucna(RucnaStanje stanje_)
    {
        stanje = stanje_;
    }
    Rucna(const Rucna &copy_rucna)
    {
        stanje = copy_rucna.stanje;
    }
    RucnaStanje getStanje()
    {
        return stanje;
    }
    void setStanje(RucnaStanje stanje_)
    {
        stanje = stanje_;
    }
    void fix()override{
        if(stanje == NE_ISPRAVNA_RUCNA){
            stanje = NE_ANGAZOVANA;
        }
    }
};

#endif // RUCNA_HPP_INCLUDED
