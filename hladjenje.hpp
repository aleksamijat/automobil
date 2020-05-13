#ifndef HLADJENJE_H_INCLUDED
#define HLADJENJE_H_INCLUDED
#include "fixable.hpp"

class Hladjenje : public Fixable
{
private:
    bool isIspravno;
    bool isVodeno;
public:
    Hladjenje()
    {
        isIspravno = true;
        isVodeno = true;
    }
    Hladjenje(bool isIspravno, bool isVodeno)
    {
        this -> isIspravno = isIspravno;
        this -> isVodeno = isVodeno;
    }
    Hladjenje(const Hladjenje &copy_hladjenje)
    {
        isIspravno = copy_hladjenje.isIspravno;
        isVodeno = copy_hladjenje.isVodeno;
    }

    bool getIsIspravno()
    {
        return isIspravno;
    }
    bool getIsVodeno()
    {
        return isVodeno;
    }

    void setIsIspravno(bool isIspravno)
    {
        this -> isIspravno = isIspravno;
    }
    void setIsVodeno(bool isVodeno)
    {
        this -> isVodeno = isVodeno;
    }

    void fix()override{
        if(isIspravno == false){
            isIspravno == true;
        }
    }
};

#endif // HLADJENJE_H_INCLUDED
