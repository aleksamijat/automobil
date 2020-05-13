#ifndef MENJAC_HPP_INCLUDED
#define MENJAC_HPP_INCLUDED
#include "fixable.hpp"

class Menjac : public Fixable
{
private:
        bool isManual;
        bool isIspravan;
        int brojBrzina;
public:
        Menjac()
        {
                isManual = true;
                isIspravan = true;
                brojBrzina = 4;
        }
        Menjac(bool isManual, bool isIspravan, int broj_b)
        {
                this -> isManual = isManual;
                this -> isIspravan = isIspravan;
                brojBrzina = broj_b;
        }
        Menjac(const Menjac &copy_menjac)
        {
                isManual = copy_menjac.isManual;
                isIspravan = copy_menjac.isIspravan;
                brojBrzina = copy_menjac.brojBrzina;
        }

        bool getIsAutomatik()
        {
                return isManual;
        }
        bool getIsIspravan()
        {
                return isIspravan;
        }
        int getBrzina()
        {
                return brojBrzina;
        }

        void setIsAutomatik(bool isManual)
        {
                this -> isManual = isManual;
        }
        void setIsIspravan(bool isIspravan)
        {
                this -> isIspravan = isIspravan;
        }
        void setBrzina(int broj_b)
        {
                brojBrzina = broj_b;
        }

        void fix()override
        {
                if(isIspravan == false);
                isIspravan == true;
        }
        Menjac& operator++()
        {
                brojBrzina++;
                return *this;
        }
        Menjac& operator--()
        {
                brojBrzina--;
                return *this;
        }
};

std::ostream& operator<<(std::ostream& o, const Menjac& obj)
{
    return o;
}

#endif // MENJAC_HPP_INCLUDED
