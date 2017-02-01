#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"


namespace Shapes
{
    class Circle : public Shape
    {
    public:
        Circle(double diameter);
        virtual ~Circle();

        virtual const double getArea() const;
        virtual const double getInertiaModulus() const;
        virtual const double getTension(double cam) const;
    
    private:
        double m_diameter;
    };
}


#endif /* CIRCLE_H */
