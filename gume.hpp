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
        float heightFelne;
        float widthFelne;
        float wall;
public:
        Gume()
        {
                stanje = NADUVANE;
                isZimske = false;
                isRadial = true;
                heightFelne = 14;
                widthFelne = 6.5;
                wall = 3;
        }
        Gume(GumeStanje stanje_, bool isZimske, bool isRadial, float heightFelne_, float widthFelne_, float wall_)
        {
                stanje = stanje_;
                this -> isZimske = isZimske;
                this -> isRadial = isRadial;
                heightFelne = heightFelne_;
                widthFelne = widthFelne_;
                wall = wall_;
        }
        Gume(const Gume &copy_gume)
        {
                stanje = copy_gume.stanje;
                isZimske = copy_gume.isZimske;
                isRadial = copy_gume.isRadial;
                heightFelne = copy_gume.heightFelne;
                widthFelne = copy_gume.widthFelne;
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
        float getHeightFelne()
        {
                return heightFelne;
        }
        float getWidthFelne()
        {
                return widthFelne;
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
        void setHeight(float heightFelne_)
        {
                heightFelne = heightFelne;
        }
        void setWidth(float widthFelne_)
        {
                widthFelne = widthFelne_;
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
