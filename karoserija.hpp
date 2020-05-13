#ifndef KAROSERIJA_HPP_INCLUDED
#define KAROSERIJA_HPP_INCLUDED

enum BojaKaroserije {BELA, CRNA, CRVENA, ZELENA, ZUTA, PLAVA};
enum TipKaroserije {SEDAN, COUPE, HATCHBACK, SUV, PICKUP};

class Karoserija
{
private:
    BojaKaroserije boja;
    TipKaroserije tip;
    bool isRdjava;
public:
    Karoserija()
    {
        boja = BELA;
        tip = HATCHBACK;
        isRdjava = true;
    }
    Karoserija(BojaKaroserije boja_, TipKaroserije tip_, bool isRdjava)
    {
        boja = boja_;
        tip = tip_;
        this -> isRdjava = isRdjava;
    }
    Karoserija(const Karoserija &copy_karoserija)
    {
        boja = copy_karoserija.boja;
        tip = copy_karoserija.tip;
        isRdjava = copy_karoserija.isRdjava;
    }

    BojaKaroserije getBoja()
    {
        return boja;
    }
    TipKaroserije getTip()
    {
            return tip;
    }
    bool getIsRdjava()
    {
            return isRdjava;
    }

    void setBoja(BojaKaroserije boja_)
    {
        boja = boja_;
    }
    void setTip(TipKaroserije tip_)
    {
            tip = tip_;
    }
    void setIsRdjava(bool isRdjava)
        {
                this -> isRdjava = isRdjava;
        }
};

#endif // KAROSERIJA_HPP_INCLUDED
