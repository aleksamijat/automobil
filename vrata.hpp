#ifndef VRATA_HPP_INCLUDED
#define VRATA_HPP_INCLUDED

class Vrata
{
private:
    bool isZatvorena;
public:
    Vrata()
    {
        isZatvorena = true;
    }
    Vrata(bool isZatvorena)
    {
        this -> isZatvorena = isZatvorena;
    }
    Vrata(const Vrata &copy_vrata)
    {
        isZatvorena = copy_vrata.isZatvorena;
    }
    bool getIsZatvorena()
    {
        return isZatvorena;
    }
    void setIsZatvorena(bool isZatvorena)
    {
        this -> isZatvorena = isZatvorena;
    }
};

#endif // VRATA_HPP_INCLUDED
