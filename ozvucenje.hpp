#ifndef OZVUCENJE_H_INCLUDED
#define OZVUCENJE_H_INCLUDED
#include "fixable.hpp"

enum OzvucenjeStanje {UKLJUCENO, ISKLJUCENO, NE_ISPRAVNO};

class Ozvucenje : public Fixable
{
private:
        OzvucenjeStanje stanje;
        int jacina;
public:
        Ozvucenje()
        {
                stanje = ISKLJUCENO;
                jacina = 200;
        }
        Ozvucenje(OzvucenjeStanje stanje_, int jacina_)
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
        int getJacina()
        {
                return jacina;
        }

        void setStanje(OzvucenjeStanje stanje_)
        {
                stanje = stanje_;
        }
        void setJacina(int jacina_)
        {
                jacina = jacina_;
        }

        void fix()override
        {
                if(stanje == NE_ISPRAVNO)
                stanje = ISKLJUCENO;
        }
};

#endif // OZVUCENJE_H_INCLUDED
