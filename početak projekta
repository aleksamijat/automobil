#include <iostream>
using namespace std;

enum TipMenjaca {AUTOMATIK, MANUAL};
enum BojaKaroserije {BELA, SIVA, CRNA, CRVENA, ZELENA, ZUTA, PLAVA, LJUBICASTA, KREM};
enum AutoStanje {UGASEN, UPALJEN, PARKIRAN, SLUPAN, POKVAREN, U_VOZNJI, OTVORENA_VRATA, OTVORENA_HAUBA, OTVOREN_GEPEK, KOD_MAJSTORA};

class Menjac
{
private:
    TipMenjaca tip;
    int brojBrzina;
public:
    Menjac(){tip = MANUAL; brojBrzina = 4;}
    Menjac(TipMenjaca tip, int broj_b){tip = tip_; brojBrzina = broj_b;}
    Menjac(Menjac &m){tip = m.tip; brojBrzina = m.brojBrzina;}
    TipMenjaca getTip(){return tip;}
    int getBrzina(){return brojBrzina;}
    void setTip(TipMenjaca tip_){tip = tip_;}
    void setBrzina(int broj_b){brojBrzina = broj_b;}
};

class Karoserija
{
private:
    BojaKaroserija boja;
public:
    Karoserija(){boja = BELA;}
    Karoserija(BojaKaroserija boja_){boja = boja_;}
    Karoserija(Karoserija &k){boja = k.boja;}
    BojaKaroserija getBoja(){return boja;}
    void setBoja(BojaKaroserija boja_){boja = boja_;}
};

class Automobil
{
private:
    Menjac m;
    Karoserija k;
    AutoStanje a;
    int trenBrzina;
public:
    Automobil() : m(), k() {a = UGASEN; trenBrzina = 0;}
    Automobil(Menjac m_, Karoserija k_, AutoStanje a_, int tren_b)
    {
        m = mm;
        s = ss;
        a = aa;
        trenBrzina = tren_b;
    }
    Autombil(Automobil &aa)
    {
        m = aa.m;
        k = aa.k;
        a = aa.a;
        trenBrzina = aa.trenBrzina;
    }

};

int main()
{
    return 0;
}
