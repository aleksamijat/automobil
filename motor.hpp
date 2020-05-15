#ifndef MOTOR_HPP_INCLUDED
#define MOTOR_HPP_INCLUDED
#include "fixable.hpp"

enum TipMotora {I, V, W, H};
enum MotorStanje {UGASEN, UPALJEN, NE_ISPRAVAN};

class Motor : public Fixable
{
private:
        TipMotora tip;
        MotorStanje stanje;
        int brojCilindara;
        bool isTransverse;
        int konjskeSnage;
        int obrtniMoment;
        int displacement;
        float potrosnja;
        bool isNaturallyAspirated;
public:
        Motor()
        {
                tip = I;
                stanje = UGASEN;
                brojCilindara = 4;
                isTransverse = true;
                konjskeSnage = 44;
                obrtniMoment = 39;
                displacement = 1592;
                potrosnja = 6.2;
                isNaturallyAspirated = true;
        }
        Motor(TipMotora tip_, MotorStanje stanje_, int broj_c, bool isTransverse,
              int konjske_s, int obrtni_m, int displacement_, int potrosnja_, bool isNaturallyAspirated)
        {
                tip = tip_;
                stanje = stanje_;
                brojCilindara = broj_c;
                this -> isTransverse = isTransverse;
                konjskeSnage = konjske_s;
                obrtniMoment = obrtni_m;
                displacement = displacement_;
                potrosnja = potrosnja_;
                this -> isNaturallyAspirated = isNaturallyAspirated;
        }
        Motor(const Motor &copy_motor)
        {
                tip = copy_motor.tip;
                stanje = copy_motor.stanje;
                brojCilindara = copy_motor.brojCilindara;
                isTransverse = copy_motor.isTransverse;
                konjskeSnage = copy_motor.konjskeSnage;
                obrtniMoment = copy_motor.obrtniMoment;
                displacement = copy_motor.displacement;
                potrosnja = copy_motor.potrosnja;
                isNaturallyAspirated = copy_motor.isNaturallyAspirated;
        }

        TipMotora getTip()
        {
                return tip;
        }
        MotorStanje getStanje()
        {
                return stanje;
        }
        int getCilindara()
        {
                return brojCilindara;
        }
        bool getIsTransverse()
        {
                return isTransverse;
        }
        int getKonjskeSnage()
        {
                return konjskeSnage;
        }
        int getObrtniMoment()
        {
                return obrtniMoment;
        }
        int getDisplacement()
        {
                return displacement;
        }
        float getPotrosnja()
        {
                return potrosnja;
        }
        bool getIsNaturallyAspirated()
        {
                return isNaturallyAspirated;
        }

        void setTip(TipMotora tip_)
        {
                tip = tip_;
        }
        void setStanje(MotorStanje stanje_)
        {
                stanje = stanje_;
        }
        void setCilindara(int broj_c)
        {
                brojCilindara = broj_c;
        }
        void setIsTransverse(bool isTransverse)
        {
                this -> isTransverse = isTransverse;
        }
        void setKonjskeSnage(int konjske_s)
        {
                konjskeSnage = konjske_s;
        }
        void setObrtniMoment(int obrtni_m)
        {
                obrtniMoment = obrtni_m;
        }
        void setDisplacement(int displacement_)
        {
                displacement = displacement_;
        }
        void setPotrosnja(int potrosnja_)
        {
                potrosnja = potrosnja_;
        }
        void setIsNaturallyAspirated(bool isNaturallyAspirated)
        {
                this -> isNaturallyAspirated = isNaturallyAspirated;
        }

        void fix()override
        {
                if(stanje == NE_ISPRAVAN)
                stanje = UGASEN;
        }

        Motor& operator++(){
                brojCilindara++;
                return *this;
                }
        Motor& operator--(){
                brojCilindara--;
                return *this;
                }
};

std::ostream& operator<<(std::ostream& o, const Motor& obj)
{
        return o;
}

#endif // MOTOR_HPP_INCLUDED
