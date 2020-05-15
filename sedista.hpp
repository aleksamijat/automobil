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
public:
        Sedista()
        {
                tip = PLATNENA;
                stanje = NAMESTENA;
        }
        Sedista(TipSedista tip_, SedistaStanje stanje_)
        {
                tip = tip_;
                stanje = stanje_;
        }
        Sedista(const Sedista &copy_sedista)
        {
                tip = copy_sedista.tip;
                stanje = copy_sedista.stanje;
        }

        TipSedista getTip()
        {
                return tip;
        }
        SedistaStanje getStanje()
        {
                return stanje;
        }

        void setTip(TipSedista tip_)
        {
                tip = tip_;
        }
        void setStanje(SedistaStanje stanje_)
        {
                stanje = stanje_;
        }

        void fix()override{
                if(stanje == NE_ISPRAVNA_SEDISTA){
                stanje = NE_NAMESTENA;
                }
        }
};

#endif // SEDISTA_HPP_INCLUDED
