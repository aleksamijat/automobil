#ifndef VOLAN_H_INCLUDED
#define VOLAN_H_INCLUDED

enum TipVolana {PLASTICNI, SPORTSKI, KOZNI};

class Volan
{
private:
    TipVolana tip;
public:
    Volan()
    {
        tip = PLASTICNI;
    }
    Volan(TipVolana tip_)
    {
        tip = tip_;
    }
    Volan(const Volan &copy_volan)
    {
        tip = copy_volan.tip;
    }
    TipVolana getTip()
    {
        return tip;
    }
    void setTip(TipVolana tip_)
    {
        tip = tip_;
    }
};

#endif // VOLAN_HPP_INCLUDED
