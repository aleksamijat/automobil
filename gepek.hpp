#ifndef GEPEK_HPP_INCLUDED
#define GEPEK_HPP_INCLUDED

class Gepek
{
private:
    bool isZatvoren;
public:
    Gepek()
    {
        isZatvoren = true;
    }
    Gepek(bool isZatvoren)
    {
        this -> isZatvoren = isZatvoren;
    }
    Gepek (const Gepek &copy_gepek)
    {
        isZatvoren = copy_gepek.isZatvoren;
    }
    bool getIsZatvoren()
    {
        return isZatvoren;
    }
    void setIsZatvoren(bool isZatvoren)
    {
        this -> isZatvoren = isZatvoren;
    }
};


#endif // GEPEK_HPP_INCLUDED
