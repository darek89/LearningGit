#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"


namespace Shapes
{
    class Rectangle : public Shape
    {
    public:
        Rectangle();
        Rectangle(double width, double height);
        virtual ~Rectangle();
        
        virtual const double getArea() const;
        virtual const double getInertiaModulus() const;
        virtual const double getTension(double cam) const;
        
    private:
        const double m_width;
        const double m_height;
    };
}


#endif /* RECTANGLE_H */
