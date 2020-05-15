#ifndef GUME_HPP_INCLUDED
#define GUME_HPP_INCLUDED
#include "fixable.hpp"

enum GumeStanje {NADUVANE, IZDUVANE, BUSNE};

class Gume : public Fixable
{
private:
        GumeStanje stanje;
        bool isZimske;
        bool isRadial;
        float diameterFelne;
        float depthFelne;
        float wall;
public:
        Gume()
        {
                stanje = NADUVANE;
                isZimske = false;
                isRadial = true;
                diameterFelne = 14;
                depthFelne = 6.5;
                wall = 3;
        }
        Gume(GumeStanje stanje_, bool isZimske, bool isRadial, float diameterFelne_, float depthFelne_, float wall_)
        {
                stanje = stanje_;
                this -> isZimske = isZimske;
                this -> isRadial = isRadial;
                diameterFelne = diameterFelne_;
                depthFelne = depthFelne_;
                wall = wall_;
        }
        Gume(const Gume &copy_gume)
        {
                stanje = copy_gume.stanje;
                isZimske = copy_gume.isZimske;
                isRadial = copy_gume.isRadial;
                diameterFelne = copy_gume.diameterFelne;
                depthFelne = copy_gume.depthFelne;
                wall = copy_gume.wall;
        }

        GumeStanje getStanje()
        {
                return stanje;
        }
        bool getIsZimske()
        {
                return isZimske;
        }
        bool getIsRadial()
        {
                return isRadial;
        }
        float getDiameterFelne()
        {
                return diameterFelne;
        }
        float getDepthFelne()
        {
                return depthFelne;
        }
        float getWall()
        {
                return wall;
        }

        void setStanje(GumeStanje stanje_)
        {
                stanje = stanje_;
        }
        void setIsZimske(bool isZimske)
        {
                this -> isZimske = isZimske;
        }
        void setIsRadial(bool isRadial)
        {
                this -> isRadial = isRadial;
        }
        void setDiameter(float diameterFelne_)
        {
                diameterFelne = diameterFelne;
        }
        void setDepth(float depthFelne_)
        {
                depthFelne = depthFelne_;
        }
        void setWall(float wall_)
        {
                wall = wall_;
        }

        void fix()override
        {
                if(stanje == BUSNE)
                        stanje = IZDUVANE;
        }
};

#endif // GUME_HPP_INCLUDED
