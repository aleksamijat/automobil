#ifndef RUCNA_HPP_INCLUDED
#define RUCNA_HPP_INCLUDED
#include "fixable.hpp"

enum RucnaStanje {ANGAZOVANA, NE_ANGAZOVANA, NE_ISPRAVNA_RUCNA};

class Rucna : public Fixable
{
private:
        RucnaStanje stanje;
        bool isMehanicka;
public:
        Rucna()
        {
                stanje = ANGAZOVANA;
                isMehanicka = true;
        }
        Rucna(RucnaStanje stanje_, bool isMehanicka)
        {
                stanje = stanje_;
                this -> isMehanicka = isMehanicka;
        }
        Rucna(const Rucna &copy_rucna)
        {
                stanje = copy_rucna.stanje;
                isMehanicka = copy_rucna.isMehanicka;
        }

        RucnaStanje getStanje()
        {
                return stanje;
        }
        bool getIsMehanicka()
        {
                return isMehanicka;
        }

        void setStanje(RucnaStanje stanje_)
        {
                stanje = stanje_;
        }
        void setIsmehanicka(bool isMehanicka)
        {
                this -> isMehanicka = isMehanicka;
        }

        void fix()override{
                if(stanje == NE_ISPRAVNA_RUCNA){
                stanje = NE_ANGAZOVANA;
                }
        }
};

#endif // RUCNA_HPP_INCLUDED
