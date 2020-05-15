#include <iostream>

#include "menjac.hpp"
#include "motor.hpp"
#include "prenos.hpp"
#include "svetla.hpp"
#include "kocnice.hpp"
#include "rucna.hpp"
#include "vrata.hpp"
#include "hauba.hpp"
#include "gepek.hpp"
#include "gume.hpp"
#include "ram.hpp"
#include "felne.hpp"
#include "prozori.hpp"
#include "sedista.hpp"
#include "rezervoar.hpp"
#include "karoserija.hpp"
#include "volan.hpp"
#include "ozvucenje.hpp"
#include "hladjenje.hpp"
#include "lista.hpp"
#include "fixable.hpp"
#include "tocak.hpp"

using namespace std;

enum AutoStanje {PARKIRAN, U_VOZNJI, POKVAREN, SLUPAN, ISPRAVANANANINENU};

class Automobil : public Fixable
{
private:
        AutoStanje stanje;

        Menjac menjac;
        Motor motor;
        Prenos prenos;
        Svetla svetla;
        Kocnice kocnice;
        Rucna rucna;
        List<Vrata> vrata;
        Hauba hauba;
        Gepek gepek;
        Ram ram;
        Tocak tocak;
        Prozori prozori;
        Sedista sedista;
        Rezervoar rezervoar;
        Karoserija karoserija;
        Volan volan;
        Ozvucenje ozvucenje;
        Hladjenje hladjenje;
public:
        Automobil()
        {

        }
        Automobil(const Menjac &menjac, const Motor &motor,
                  const Prenos &prenos, const Svetla &svetla,
                  const Kocnice &kocnice, const Rucna &rucna,
                  const List<Vrata> &vrata, const Hauba &hauba,
                  const Gepek &gepek, const Ram &ram, const Tocak &tocak,
                  const Prozori &prozori, const Sedista &sedista,
                  const Rezervoar &rezervoar, const Karoserija &karoserija,
                  const Volan &volan, const Ozvucenje &ozvucenje,
                  const Hladjenje &hladjenje) : menjac(menjac), motor(motor),
                                                prenos(prenos), svetla(svetla),
                                                kocnice(kocnice), rucna(rucna),
                                                vrata(vrata), hauba(hauba),
                                                gepek(gepek), ram(ram), tocak(tocak),
                                                prozori(prozori), sedista(sedista),
                                                rezervoar(rezervoar), karoserija(karoserija),
                                                volan(volan), ozvucenje(ozvucenje),
                                                hladjenje(hladjenje)
        {

        }
        Automobil(const Automobil &a): menjac(a.getMenjac()), motor(a.getMotor()),
                                        prenos(a.getPrenos()), svetla(a.getSvetla()),
                                        kocnice(a.getKocnice()), rucna(a.getRucna()),
                                        vrata(a.getVrata()), hauba(a.getHauba()),
                                        gepek(a.getGepek()), ram(a.getRam()), tocak(a.getTocak()),
                                        prozori(a.getProzori()), sedista(a.getSedista()),
                                        rezervoar(a.getRezervoar()), karoserija(a.getKaroserija()),
                                        volan(a.getVolan()), ozvucenje(a.getOzvucenje()),
                                        hladjenje(a.getHladjenje())
        {

        }
        Menjac& getMenjac(){return menjac;}
        Motor& getMotor(){return motor;}
        Prenos& getPrenos(){return prenos;}
        Svetla& getSvetla(){return svetla;}
        Kocnice& getKocnice(){return kocnice;}
        Rucna& getRucna(){return rucna;}
        List<Vrata>& getVrata(){return vrata;}
        Hauba& getHauba(){return hauba;}
        Gepek& getGepek(){return gepek;}
        Ram& getRam(){return ram;}
        Tocak& getTocak(){return tocak;}
        Prozori& getProzori(){return prozori;}
        Sedista& getSedista(){return sedista;}
        Rezervoar& getRezervoar(){return rezervoar;}
        Karoserija& getKaroserija(){return karoserija;}
        Volan& getVolan(){return volan;}
        Ozvucenje& getOzvucenje(){return ozvucenje;}
        Hladjenje& getHladjenje(){return hladjenje;}

        const Menjac& getMenjac()const {return menjac;}
        const Motor& getMotor()const {return motor;}
        const Prenos& getPrenos()const {return prenos;}
        const Svetla& getSvetla()const {return svetla;}
        const Kocnice& getKocnice()const {return kocnice;}
        const Rucna& getRucna()const {return rucna;}
        const List<Vrata>& getVrata()const {return vrata;}
        const Hauba& getHauba()const {return hauba;}
        const Gepek& getGepek()const {return gepek;}
        const Ram& getRam()const {return ram;}
        const Tocak& getTocak()const {return tocak;}
        const Prozori& getProzori()const {return prozori;}
        const Sedista& getSedista()const {return sedista;}
        const Rezervoar& getRezervoar()const {return rezervoar;}
        const Karoserija& getKaroserija()const {return karoserija;}
        const Volan& getVolan()const {return volan;}
        const Ozvucenje& getOzvucenje()const {return ozvucenje;}
        const Hladjenje& getHladjenje()const {return hladjenje;}

        void fix()override{
                if(stanje == POKVAREN){
                stanje = ISPRAVANANANINENU;
                }
        }

        Automobil& operator=(const Automobil& other){
                        menjac = other.getMenjac();
                        motor = other.getMotor();
                        prenos = other.getPrenos();
                        svetla = other.getSvetla();
                        kocnice = other.getKocnice();
                        rucna = other.getRucna();
                        vrata = other.getVrata();
                        hauba = other.getHauba();
                        gepek = other.getGepek();
                        ram = other.getRam();
                        tocak = other.getTocak();
                        prozori = other.getProzori();
                        sedista = other.getSedista();
                        rezervoar = other.getRezervoar();
                        karoserija = other.getKaroserija();
                        volan = other.getVolan();
                        ozvucenje = other.getOzvucenje();
                        hladjenje = other.getHladjenje();
                        return *this;
                        }
};

std::ostream& operator<<(std::ostream& o, const Automobil& obj)
{
    return o;
}

int main()
{
    Menjac menjac(true, true, 4);
    Motor motor(I, UGASEN, 4, true, 44, 39, 6.2, true);
    Prenos prenos(FWD, true);
    Svetla svetla(HALOGEN, UGASENA);
    Kocnice kocnice(true, false, NE_ANGAZOVANE);
    Rucna rucna(ANGAZOVANA, true);
    Vrata vrataV(true);
    List<Vrata> vrata;
    vrata.add(0, vrataV);
    vrata.add(1, vrataV);
    vrata.add(2, vrataV);
    vrata.add(3, vrataV);
    Hauba hauba(true, false, 110, 130);
    Gepek gepek(true, false, 300, 150, 110);
    Ram ram(LADDER, true);

    Gume guma(NADUVANE, false, true, 14, 6.5, 3);
    Felne felna(MULTI, true, true, 14, 6.5, 38, 5, 100);
    Tocak tocak(guma, felna);

    Prozori prozori(NORMALNI, PODIGNUTI);
    Sedista sedista(PLATNENA, NAMESTENA, 4);
    Rezervoar rezervoar(true, 40);
    Karoserija karoserija(BELA, HATCHBACK, true);
    Volan volan(PLASTICNI, 35);
    Ozvucenje ozvucenje(NE_ISPRAVNO, 200);
    Hladjenje hladjenje(true, true);

    Automobil automobil(menjac, motor, prenos, svetla, kocnice,
                        rucna, vrata, hauba, gepek, ram, tocak,
                        prozori, sedista, rezervoar, karoserija,
                        volan, ozvucenje, hladjenje);
    return 0;
}
