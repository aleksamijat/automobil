#ifndef RAM_HPP_INCLUDED
#define RAM_HPP_INCLUDED

enum TipRama {LADDER, BACKBONE, MONOCOQUE, SPACE};

class Ram
{
private:
        TipRama tip;
        bool isIspravan;
public:
        Ram()
        {
                tip = LADDER;
                isIspravan = true;
        }
        Ram(TipRama tip_, bool isIspravan)
        {
                tip = tip_;
                this -> isIspravan = isIspravan;
        }
        Ram(const Ram &copy_ram)
        {
                tip = copy_ram.tip;
                isIspravan = copy_ram.isIspravan;
        }

        TipRama getTip()
        {
                return tip;
        }
        bool getIsIspravan()
        {
                return isIspravan;
        }

        void setTip(TipRama tip_)
        {
                tip = tip_;
        }
        void setIsIspravan(bool isIspravan)
        {
                this -> isIspravan = isIspravan;
        }
};

#endif // RAM_HPP_INCLUDED
