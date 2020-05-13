#ifndef GEPEK_HPP_INCLUDED
#define GEPEK_HPP_INCLUDED

class Gepek
{
private:
        bool isZatvoren;
        int zapremina;
        int height;
        int width;
public:
        Gepek()
        {
                isZatvoren = true;
                zapremina = 300;
                height = 150;
                width = 110;
        }
        Gepek(bool isZatvoren, int zapremina_, int height_, int width_)
        {
                this -> isZatvoren = isZatvoren;
                zapremina = zapremina_;
                height = height_;
                width = width_;
        }
        Gepek (const Gepek &copy_gepek)
        {
                isZatvoren = copy_gepek.isZatvoren;
                zapremina = copy_gepek.zapremina;
                height = copy_gepek.height;
                width = copy_gepek.width;
        }

        bool getIsZatvoren()
        {
                return isZatvoren;
        }
        int getZapremina()
        {
                return zapremina;
        }
        int getHeight()
        {
                return height;
        }
        int getWidth()
        {
                return width;
        }

        void setIsZatvoren(bool isZatvoren)
        {
                this -> isZatvoren = isZatvoren;
        }
        void setZapremina(int zapremina_)
        {
                zapremina = zapremina_;
        }
        void setHeight(int height_)
        {
                height = height_;
        }
        void setWidth(int width_)
        {
                width = width_;
        }

};

#endif // GEPEK_HPP_INCLUDED
