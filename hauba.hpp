#ifndef HAUBA_HPP_INCLUDED
#define HAUBA_HPP_INCLUDED

class Hauba
{
private:
    bool isZatvorena;
public:
    Hauba()
    {
        isZatvorena = true;
    }
    Hauba(bool isZatvorena)
    {
        this -> isZatvorena = isZatvorena;
    }
    Hauba(const Hauba &copy_hauba)
    {
        isZatvorena = copy_hauba.isZatvorena;
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

#endif // HAUBA_HPP_INCLUDED
