#ifndef RING_H
#define RING_H

#include "shape.h"


namespace Shapes
{
    class Ring : public Shape
    {
    public:
        Ring(double extDiameter, double intDiameter);
        virtual ~Ring();
        
        virtual const double getArea() const;
        virtual const double getInertiaModulus() const;
        virtual const double getTension(double cam) const;

    private:
        const double m_extDiameter;
        const double m_intDiameter;
    };
}


#endif /* RING_H */
