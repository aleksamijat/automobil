#ifndef KAROSERIJA_HPP_INCLUDED
#define KAROSERIJA_HPP_INCLUDED

enum BojaKaroserije {BELA, CRNA, CRVENA, ZELENA, ZUTA, PLAVA};

class Karoserija
{
private:
    BojaKaroserije boja;
public:
    Karoserija()
    {
        boja = BELA;
    }
    Karoserija(BojaKaroserije boja_)
    {
        boja = boja_;
    }
    Karoserija(const Karoserija &copy_karoserija)
    {
        boja = copy_karoserija.boja;
    }
    BojaKaroserije getBoja()
    {
        return boja;
    }
    void setBoja(BojaKaroserije boja_)
    {
        boja = boja_;
    }
};

#endif // KAROSERIJA_HPP_INCLUDED
