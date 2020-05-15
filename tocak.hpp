#ifndef TOCAK_HPP_INCLUDED
#define TOCAK_HPP_INCLUDED
#include <stdexcept>
#include "felne.hpp"
#include "gume.hpp"

class Tocak : public Gume, public Felne
{
private:
        Gume gume;
        Felne felne;
public:
        Tocak()
        {

        }
        Tocak(Gume& g, Felne& f): gume(g), felne(f)
        {
                if(g.getDiameterFelne() != f.getDiameter())
                        throw std::invalid_argument("Precnik guma i felni nije isti");
        }
        Tocak(const Tocak &copy_tocak)
        {
                gume = copy_tocak.gume;
                felne = copy_tocak.felne;
        }

        Gume getGume()
        {
                return gume;
        }
        Felne getFelne()
        {
                return felne;
        }
};

#endif // TOCAK_HPP_INCLUDED
