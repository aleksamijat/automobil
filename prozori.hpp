#ifndef PROZORI_HPP_INCLUDED
#define PROZORI_HPP_INCLUDED
#include "fixable.hpp"

enum TipProzora {NORMALNI, BALISTICKI, ZATAMLJENI};
enum ProzoriStanje {PODIGNUTI, SPUSTENI, POLOMLJENI};

class Prozori : public Fixable
{
private:
        TipProzora tip;
        ProzoriStanje stanje;
public:
        Prozori()
        {
                tip = NORMALNI;
                stanje = PODIGNUTI;
        }
        Prozori(TipProzora tip_, ProzoriStanje stanje_)
        {
                tip = tip_;
                stanje = stanje_;
        }
        Prozori(const Prozori &copy_prozori)
        {
                tip = copy_prozori.tip;
                stanje = copy_prozori.stanje;
        }

        TipProzora getTip()
        {
                return tip;
        }
        ProzoriStanje getStanje()
        {
                return stanje;
        }

        void setTip(TipProzora tip_)
        {
                tip = tip_;
        }
        void setStanje(ProzoriStanje stanje_)
        {
                stanje = stanje_;
        }

        void fix()override
        {
                if(stanje == POLOMLJENI)
                stanje = PODIGNUTI;
        }
};

#endif // PROZORI_HPP_INCLUDED
