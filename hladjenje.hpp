#ifndef HLADJENJE_H_INCLUDED
#define HLADJENJE_H_INCLUDED
#include "fixable.hpp"

class Hladjenje : public Fixable
{
private:
    bool isIspravno;
public:
    Hladjenje()
    {
        isIspravno = true;
    }
    Hladjenje(bool isIspravno)
    {
        this -> isIspravno = isIspravno;
    }
    Hladjenje(const Hladjenje &copy_hladjenje)
    {
        isIspravno = copy_hladjenje.isIspravno;
    }
    bool getIsIspravno()
    {
        return isIspravno;
    }
    void setIsIspravno(bool isIspravno)
    {
        this -> isIspravno = isIspravno;
    }
    void fix()override{
        if(isIspravno == false){
            isIspravno == true;
        }
    }
};

#endif // HLADJENJE_H_INCLUDED
