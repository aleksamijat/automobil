#ifndef HAUBA_HPP_INCLUDED
#define HAUBA_HPP_INCLUDED

class Hauba
{
private:
        bool isZatvorena;
        bool isVented;
        float height;
        float width;
public:
        Hauba()
        {
                isZatvorena = true;
                isVented = false;
                height = 110;
                width = 130;
        }
        Hauba(bool isZatvorena, bool isVented, float height_, float width_)
        {
                this -> isZatvorena = isZatvorena;
                this -> isVented = isVented;
                height = height_;
                width = width_;
        }
        Hauba(const Hauba &copy_hauba)
        {
                isZatvorena = copy_hauba.isZatvorena;
                isVented = copy_hauba.isVented;
                height = copy_hauba.height;
                width = copy_hauba.width;
        }

        bool getIsZatvorena()
        {
                return isZatvorena;
        }
        bool getIsVented()
        {
                return isVented;
        }
        float getHeight()
        {
                return height;
        }
        float getWidth()
        {
                return width;
        }

        void setIsZatvorena(bool isZatvorena)
        {
                this -> isZatvorena = isZatvorena;
        }
        void setIsVented(bool isVented)
        {
                this -> isVented = isVented;
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

#endif // HAUBA_HPP_INCLUDED
