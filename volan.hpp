#ifndef VOLAN_H_INCLUDED
#define VOLAN_H_INCLUDED

enum TipVolana {PLASTICNI, SPORTSKI, KOZNI};

class Volan
{
private:
        TipVolana tip;
        int sirina;
public:
        Volan()
        {
                tip = PLASTICNI;
                sirina = 35;
        }
        Volan(TipVolana tip_, int sirina_)
        {
        tip = tip_;
        sirina = sirina_;
        }
        Volan(const Volan &copy_volan)
        {
                tip = copy_volan.tip;
                sirina = copy_volan.sirina;
        }

        TipVolana getTip()
        {
                return tip;
        }
        int getSirina()
        {
                return sirina;
        }

        void setTip(TipVolana tip_)
        {
                tip = tip_;
        }
        void setSirina(int sirina_)
        {
                sirina = sirina_;
        }
};

#endif // VOLAN_HPP_INCLUDED
