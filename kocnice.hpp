#ifndef KOCNICE_HPP_INCLUDED
#define KOCNICE_HPP_INCLUDED
#include "fixable.hpp"

enum KocniceStanje {ANGAZOVANE, NE_ANGAZOVANE, NE_ISPRAVNE};

class Kocnice : public Fixable
{
private:
        bool isDisk;
        bool isVented;
        KocniceStanje stanje;
public:
        Kocnice()
        {
                isDisk = true;
                isVented = false;
                stanje = NE_ANGAZOVANE;
        }
        Kocnice(bool isDisk, bool isVented, KocniceStanje stanje_)
        {
                this -> isDisk = isDisk;
                this -> isVented = isVented;
                stanje = stanje_;
        }
        Kocnice(const Kocnice &copy_kocnice)
        {
                isDisk = copy_kocnice.isDisk;
                isVented = copy_kocnice.isVented;
                stanje = copy_kocnice.stanje;
        }

        bool getIsDisk()
        {
                return isDisk;
        }
        bool getIsVented()
        {
                return isVented;
        }
        KocniceStanje getStanje()
        {
                return stanje;
        }

        void setIsDisk(bool isDisk)
        {
                this -> isDisk = isDisk;
        }
        void setIsVented(bool isVented)
        {
                this -> isVented = isVented;
        }
        void setStanje(KocniceStanje stanje_)
        {
                stanje = stanje_;
        }

        void fix()override{
                if(stanje == NE_ISPRAVNE){
                stanje = NE_ANGAZOVANE;
                }
        }
};

#endif // KOCNICE_HPP_INCLUDED
