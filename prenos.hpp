#ifndef PRENOS_HPP_INCLUDED
#define PRENOS_HPP_INCLUDED
#include "fixable.hpp"

enum TipPrenosa {FWD, RWD, AWD};

class Prenos
{
private:
        TipPrenosa tip;
        bool isIspravan;
public:
        Prenos()
        {
                tip = FWD;
                isIspravan = true;
        }
        Prenos(TipPrenosa tip_, bool isIspravan)
        {
                tip = tip_;
                this -> isIspravan = isIspravan;
        }
        Prenos(const Prenos &copy_prenos)
        {
                tip = copy_prenos.tip;
                isIspravan = copy_prenos.isIspravan;

        }

        TipPrenosa getTip()
        {
                return tip;
        }
        bool getIsIspravan()
        {
                return isIspravan;
        }

        void setTip(TipPrenosa tip_)
        {
                tip = tip_;
        }
        void setIsIspravan(bool isIspravan)
        {
                this -> isIspravan = isIspravan;
        }
};

#endif // PRENOS_HPP_INCLUDED
