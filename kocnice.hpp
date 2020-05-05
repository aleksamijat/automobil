#ifndef KOCNICE_HPP_INCLUDED
#define KOCNICE_HPP_INCLUDED
#include "fixable.hpp"

enum TipKocnica {DISK, DOBOS};
enum KocniceStanje {ANGAZOVANE, NE_ANGAZOVANE, NE_ISPRAVNE};

class Kocnice : public Fixable
{
private:
    bool isDisk;
    KocniceStanje stanje;
public:
    Kocnice()
    {
        isDisk = true;
        stanje = NE_ANGAZOVANE;
    }
    Kocnice(bool isDisk, KocniceStanje stanje_)
    {
        this -> isDisk = isDisk;
        stanje = stanje_;
    }
    Kocnice(const Kocnice &copy_kocnice)
    {
        isDisk = copy_kocnice.isDisk;
        stanje = copy_kocnice.stanje;
    }
    bool getIsDisk()
    {
        return isDisk;
    }
    KocniceStanje getStanje()
    {
        return stanje;
    }
    void setIsdisk(bool isDisk)
    {
        this -> isDisk = isDisk;
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
