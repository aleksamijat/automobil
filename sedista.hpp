#ifndef SEDISTA_HPP_INCLUDED
#define SEDISTA_HPP_INCLUDED
#include "fixable.hpp"

enum TipSedista {PLATNENA, SPORTSKA, KOZNA};
enum SedistaStanje {NAMESTENA, NE_NAMESTENA, NE_ISPRAVNA_SEDISTA};

class Sedista : public Fixable
{
private:
        TipSedista tip;
        SedistaStanje stanje;
        int brojSedista;
public:
        Sedista()
        {
                tip = PLATNENA;
                stanje = NAMESTENA;
                brojSedista = 4;
        }
        Sedista(TipSedista tip_, SedistaStanje stanje_, int broj_s)
        {
                tip = tip_;
                stanje = stanje_;
                brojSedista = broj_s;
        }
        Sedista(const Sedista &copy_sedista)
        {
                tip = copy_sedista.tip;
                stanje = copy_sedista.stanje;
                brojSedista = copy_sedista.brojSedista;
        }

        TipSedista getTip()
        {
                return tip;
        }
        SedistaStanje getStanje()
        {
                return stanje;
        }
        int getBrojSedista()
        {
                return brojSedista;
        }

        void setTip(TipSedista tip_)
        {
                tip = tip_;
        }
        void setStanje(SedistaStanje stanje_)
        {
                stanje = stanje_;
        }
        void setBrojSedista(int broj_s)
        {
                brojSedista = broj_s;
        }

        void fix()override{
                if(stanje == NE_ISPRAVNA_SEDISTA){
                stanje = NE_NAMESTENA;
                }
        }
};

#endif // SEDISTA_HPP_INCLUDED
