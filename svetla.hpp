#ifndef SVETLA_HPP_INCLUDED
#define SVETLA_HPP_INCLUDED
#include "fixable.hpp"

enum TipSvetala {HALOGEN, XENON, LED};
enum SvetlaStanje {UPALJENA, UGASENA, NE_ISPRAVNA};

class Svetla : public Fixable
{
private:
        TipSvetala tip;
        SvetlaStanje stanje;
public:
        Svetla()
        {
                tip = HALOGEN;
                stanje = UGASENA;
        }
        Svetla(TipSvetala tip_, SvetlaStanje stanje_)
        {
                tip = tip_;
                stanje = stanje_;
        }
        Svetla(const Svetla &copy_svetla)
        {
                tip = copy_svetla.tip;
                stanje = copy_svetla.stanje;
        }
        TipSvetala getTip()
        {
                return tip;
        }
        SvetlaStanje getStanje()
        {
                return stanje;
        }
        void setTip(TipSvetala tip_)
        {
                tip = tip_;
        }
        void setStanje(SvetlaStanje stanje_)
        {
                stanje = stanje_;
        }
        void fix()override{
                if(stanje == NE_ISPRAVNA){
                stanje = UGASENA;
                        }
        }
};

#endif // SVETLA_HPP_INCLUDED
