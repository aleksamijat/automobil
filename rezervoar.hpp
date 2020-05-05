#ifndef REZERVOAR_HPP_INCLUDED
#define REZERVOAR_HPP_INCLUDED
#include "fixable.hpp"

class Rezervoar : public Fixable
{
private:
    bool isIspravan;
    int kapacitet;
public:
    Rezervoar()
    {
        isIspravan = true;
        kapacitet = 40;
    }
    Rezervoar(bool isIspravan, int kapacitet_)
    {
        this -> isIspravan = isIspravan;
        kapacitet = kapacitet_;
    }
    Rezervoar(const Rezervoar &copy_rezervoar)
    {
        isIspravan = copy_rezervoar.isIspravan;
        kapacitet = copy_rezervoar.kapacitet;
    }
    bool getIsIspravan()
    {
        return isIspravan;
    }
    int getKapacitet()
    {
        return kapacitet;
    }
    void setIsIspravan(bool isIspravan)
    {
        this -> isIspravan = isIspravan;
    }
    void setKapacitet(int kapacitet_)
    {
        kapacitet = kapacitet_;
    }
    void fix()override{
        if(isIspravan == false){
            isIspravan == true;
        }
    }
    Rezervoar& operator++(){
        kapacitet++;
        return *this;
        }
    Rezervoar& operator--(){
        kapacitet--;
        return *this;
        }
};

#endif // REZERVOAR_HPP_INCLUDED
