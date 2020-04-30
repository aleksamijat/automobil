#include <iostream>
using namespace std;

enum TipMotora {I, V, W, H};
enum TipMenjaca {AUTOMATIK, MANUAL};
enum TipKocnica {DISK, DOBOS};
enum TipSvetla {HALOGEN, XENON, LED};
enum TipRama {LADDER, BACKBONE, MONOCOQUE, SPACE};
enum TipFelni {CAST, FORGE};
enum TipProzora {NORMALNI, BALISTICKI, ZATAMLJENI};
enum TipSedista {PLATNENA, SPORTSKA, KOZNA};
enum TipVolana {PLASTICNI, SPORTSKI, KOZNI};

enum BrojVrata {DVOJE, CETVORO};

enum MotorStanje {UGASEN, UPALJEN, POKVAREN};
enum MenjacStanje {ISPRAVAN, POKVAREN};
enum KocniceStanje {ANGAZOVANE, NE_ANGAZOVANE, POKVARENE};
enum SvetlaStanje {UPALJENA, UGASENA, POKVARENA};
enum VrataStanje {OTVORENA, ZATVORENA};
enum HaubaStanje {OTVORENA, ZATVORENA};
enum GepekStanje {OTVOREN, ZATVOREN};
enum GumeStanje {NADUVANE, IZDUVANE, BUSNE, IZLIZANE};
enum RamStanje {ISPRAVAN, RDJAV};
enum FelneStanje {ISPRAVNE, ISKRZANE};
enum ProzoriStanje {PODIGNUTI, SPUSTENI, POLOMLJENI};
enum SedistaStanje {NAMESTENA, NE_NAMESTENA, POLOMLJENA, ISTROSENA};
enum VolanStanje {ISPRAVAN, ISTROSEN};

enum AutoStanje {PARKIRAN, U_VOZNJI, POKVAREN, SLUPAN, KOD_MAJSTORA};

enum BojaKaroserije {BELA, SIVA, CRNA, CRVENA, ZELENA, ZUTA, PLAVA, LJUBICASTA, KREM};

class Menjac
{
private:
    TipMenjaca tip;
    MenjacStanje stanje;
    int brojBrzina;
public:
    Menjac(){tip = MANUAL; stanje = ISPRAVAN; brojBrzina = 4;}
    Menjac(TipMenjaca tip, MenjacStanje stanje, int broj_b){tip = tip_; stanje = stanje_; brojBrzina = broj_b;}
    Menjac(Menjac &m){tip = m.tip; stanje = m.stanje; brojBrzina = m.brojBrzina;}
    TipMenjaca getTip(){return tip;}
    MenjacStanje getTip(){return stanje;}
    int getBrzina(){return brojBrzina;}
    void setTip(TipMenjaca tip_){tip = tip_;}
    void setTip(MenjacStanje stanje_){stanje = stanje_;}
    void setBrzina(int broj_b){brojBrzina = broj_b;}
};

class Motor
{
private:
    TipMotora tip;
    MotorStanje stanje;
    int brojCilindara;
public:
    Motor(){tip = I; stanje = UGASEN; brojCilindara = 4;}
    Motor(TipMotora tip, MotorStanje stanje, int broj_c){tip = tip_; stanje = stanje_; brojCilindara = broj_c;}
    Motor(Motor &m){tip = m.tip; stanje = m.stanje; brojCilindara = m.brojCilindara;}
    TipMotora getTip(){return tip;}
    MotorStanje getStanje(){return stanje;}
    int getCilindara(){return brojCilindara;}
    void setTip(TipMotora tip_){tip = tip_;}
    void setStanje(MotorStanje stanje_){stanje = stanje_;}
    void setCilindara(int broj_c){brojCilindara = broj_c;}
};

class Svetla
{
private:
    TipSvetla tip;
    SvetlaStanje stanje;
public:
    Svetla(){tip = HALOGEN; stanje = UGASENA;}
    Svetla(TipSvetla tip, SvetlaStanje stanje){tip = tip_; stanje = stanje_;}
    Svetla(Svetla &s){tip = s.tip; stanje = s.stanje;}
    TipSvetla getTip(){return tip;}
    SvetlaStanje getStanje(){return stanje;}
    void setTip(TipSvetla tip_){tip = tip_;}
    void setStanje(SvetlaStanje stanje_){stanje = stanje_;}
};

class Kocnice
{
private:
    TipKocnica tip;
    KocniceStanje stanje;
public:
    Kocnice(){tip = DISK; stanje = NE_ANGAZOVANE;}
    Kocnice(TipKocnica tip, KocniceStanje stanje){tip = tip_; stanje = stanje_;}
    Kocnice(Kocnice &k){tip = k.tip; stanje = k.stanje;}
    TipKocnica getTip(){return tip;}
    KocniceStanje getStanje(){return stanje;}
    void setTip(TipKocnica tip_){tip = tip_;}
    void setStanje(KocniceStanje stanje_){stanje = stanje_;}
};

class Vrata
{
private:
    VrataStanje stanje;
    BrojVrata broj;
public:
    Vrata(){stanje = ZATVORENA; broj = DVOJE;}
    Vrata(VrataStanje stanje, BrojVrata broj){stanje = stanje_; broj = broj_;}
    Vrata(Vrata &v){stanje = v.stanje; broj = b.broj;}
    VrataStanje getStanje(){return stanje;}
    BrojVrata getBrojVrata(){return broj;}
    void setStanje(VrataStanje stanje_){stanje = stanje_;}
    void setBrojVrata(BrojVrata broj_){broj = broj_;}
};
class Hauba
{
private:
    HaubaStanje stanje;
public:
    Hauba(){stanje = ZATVORENA;}
    Hauba(HaubaStanje stanje){stanje = stanje_;}
    Hauba(Hauba &h){stanje = h.stanje;}
    HaubaStanje getStanje(){return stanje;}
    void setStanje(HaubaStanje stanje_){stanje = stanje_;}
};
class Gepek
{
private:
    GepekStanje stanje;
public:
    Gepek(){stanje = ZATVOREN;}
    Gepek(GepekStanje stanje){stanje = stanje_;}
    Gepek(Gepek &g){stanje = g.stanje;}
    GepekStanje getStanje(){return stanje;}
    void setStanje(GepekStanje stanje_){stanje = stanje_;}
};
class Gume
{
private:
    GumeStanje stanje;
public:
    Gume(){stanje = NADUVANE;}
    Gume(GumeStanje stanje){stanje = stanje_;}
    Gume(Gume &g){stanje = g.stanje;}
    GumeStanje getStanje(){return stanje;}
    void setStanje(GumeStanje stanje_){stanje = stanje_;}
};
class Ram
{
private:
    TipRama tip;
    RamStanje stanje;
public:
    Ram(){tip = LADDER; stanje = ISPRAVAN;}
    Ram(TipRama tip, RamStanje stanje){tip = tip_; stanje = stanje_;}
    Ram(Ram &r){tip = r.tip; stanje = r.stanje;}
    TipRama getTip(){return tip;}
    RamStanje getStanje(){return stanje;}
    void setTip(TipRama tip_){tip = tip_;}
    void setStanje(RamStanje stanje_){stanje = stanje_;}
};
class Felne
{
private:
    TipFelni tip;
    FelneStanje stanje;
public:
    Felne(){tip = CAST; stanje = ISPRAVNE;}
    Felne(TipFelni tip, FelneStanje stanje){tip = tip_; stanje = stanje_;}
    Felne(Felne &f){tip = f.tip; stanje = f.stanje;}
    TipFelni getTip(){return tip;}
    FelneStanje getStanje(){return stanje;}
    void setTip(TipFelni tip_){tip = tip_;}
    void setStanje(FelneStanje stanje_){stanje = stanje_;}
};
class Prozori
{
private:
    TipProzora tip;
    ProzoriStanje stanje;
public:
    Prozori(){tip = NORMALNI; stanje = PODIGNUTI;}
    Prozori(TipProzora tip, ProzoriStanje stanje){tip = tip_; stanje = stanje_;}
    Prozori(Prozori &p){tip = p.tip; stanje = p.stanje;}
    TipProzora getTip(){return tip;}
    ProzoriStanje getStanje(){return stanje;}
    void setTip(TipProzora tip_){tip = tip_;}
    void setStanje(ProzoriStanje stanje_){stanje = stanje_;}
};
class Sedista
{
private:
    TipSedista tip;
    SedistaStanje stanje;
public:
    Sedista(){tip = PLATNENA; stanje = NAMESTENA;}
    Sedista(TipSedista tip, SedistaStanje stanje){tip = tip_; stanje = stanje_;}
    Sedista(Sedista &s){tip = s.tip; stanje = s.stanje;}
    TipSedista getTip(){return tip;}
    SedistaStanje getStanje(){return stanje;}
    void setTip(TipSedista tip_){tip = tip_;}
    void setStanje(SedistaStanje stanje_){stanje = stanje_;}
};
class Volan
{
private:
    TipVolana tip;
    VolanStanje stanje;
public:
    Volan(){tip = PLASTICNI; stanje = ISPRAVAN;}
    Volan(TipVolana tip, VolanStanje stanje){tip = tip_; stanje = stanje_;}
    Volan(Volan &v){tip = v.tip; stanje = v.stanje;}
    TipVolana getTip(){return tip;}
    VolanStanje getStanje(){return stanje;}
    void setTip(TipVolana tip_){tip = tip_;}
    void setStanje(VolanStanje stanje_){stanje = stanje_;}
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


int main()
{
    return 0;
}
