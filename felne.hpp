#ifndef FELNE_HPP_INCLUDED
#define FELNE_HPP_INCLUDED
#include "fixable.hpp"

class Felne
{
private:
    bool isIspravne;
public:
    Felne()
    {
        isIspravne = true;
    }
    Felne(bool isIspravne)
    {
        this -> isIspravne = isIspravne;
    }
    Felne(const Felne &copy_felne)
    {
        isIspravne = copy_felne.isIspravne;
    }
    bool getIsIspravan()
    {
        return isIspravne;
    }
    void setIsIspravan(bool isIspravne)
    {
        this -> isIspravne = isIspravne;
    }
};

#endif // FELNE_HPP_INCLUDED
