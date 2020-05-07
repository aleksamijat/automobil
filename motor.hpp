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
public:
    Motor()
    {
        tip = I;
        stanje = UGASEN;
        brojCilindara = 4;
    }
    Motor(TipMotora tip_, MotorStanje stanje_, int broj_c)
    {
        tip = tip_;
        stanje = stanje_;
        brojCilindara = broj_c;
    }
    Motor(const Motor &copy_motor)
    {
        tip = copy_motor.tip;
        stanje = copy_motor.stanje;
        brojCilindara = copy_motor.brojCilindara;
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
    void fix()override{
        if(stanje == NE_ISPRAVAN){
            stanje = UGASEN;
        }
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
std::istream& operator>>(std::istream& i, Motor& obj)
{
    i.setstate(std::ios::failbit);
    return i;
}

#endif // MOTOR_HPP_INCLUDED
