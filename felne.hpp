#ifndef FELNE_HPP_INCLUDED
#define FELNE_HPP_INCLUDED
#include "fixable.hpp"

enum TipFelni {CAST, FORGED, MULTI};

class Felne
{
private:
        TipFelni tip;
        bool isIspravne;
        bool isAligned;
        float diameter;
        float depth;
        float offset;
        int brojSrafova;
        int PCD;
public:
        Felne()
        {
                tip = MULTI;
                isIspravne = true;
                isAligned = true;
                diameter = 14;
                depth = 6.5;
                offset = 38;
                brojSrafova = 5;
                PCD = 100;
        }
        Felne(TipFelni tip_, bool isIspravne, bool isAligned, float diameter_, float depth_, float offset_, int brojSrafova_, int PCD_)
        {
                tip = tip_;
                this -> isIspravne = isIspravne;
                this -> isAligned = isAligned;
                diameter = diameter_;
                depth = depth_;
                offset = offset_;
                brojSrafova = brojSrafova_;
                PCD = PCD_;
        }
        Felne(const Felne &copy_felne)
        {
                tip = copy_felne.tip;
                isIspravne = copy_felne.isIspravne;
                isAligned = copy_felne.isAligned;
                diameter = copy_felne.diameter;
                depth = copy_felne.depth;
                offset = copy_felne.offset;
                brojSrafova = copy_felne.brojSrafova;
                PCD = copy_felne.PCD;
        }

        TipFelni getTip()
        {
                return tip;
        }
        bool getIsIspravan()
        {
                return isIspravne;
        }
        bool getIsAligned()
        {
                return isAligned;
        }
        float getDiameter()
        {
                return diameter;
        }
        float getDepth()
        {
                return depth;
        }
        float getOffset()
        {
                return offset;
        }
        int getBrojSrafova()
        {
                return brojSrafova;
        }
        int getPCD()
        {
                return PCD;
        }

        void setTip(TipFelni tip_)
        {
                tip = tip_;
        }
        void setIsIspravan(bool isIspravne)
        {
                this -> isIspravne = isIspravne;
        }
        void setIsAligned(bool isAligned)
        {
                this -> isAligned = isAligned;
        }
        void setDiameter(float diameter_)
        {
                diameter = diameter_;
        }
        void setDepth(float depth_)
        {
                depth = depth_;
        }
        void setOffset(float offset_)
        {
                offset = offset_;
        }
        void setBrojSrafova(int brojSrafova_)
        {
                brojSrafova = brojSrafova_;
        }
        void setPCD(int PCD_)
        {
                PCD = PCD_;
        }
};

#endif // FELNE_HPP_INCLUDED
