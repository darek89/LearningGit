#ifndef DOUBLET_H
#define DOUBLET_H

#include "shape.h"


namespace Shapes
{
    class DoubleT : public Shape
    {
    public:
        DoubleT(double shelfWidth, double shelfHeight, double webWidth, double webHeight);
        virtual ~DoubleT();
        
        virtual const double getArea() const;
        virtual const double getInertiaModulus() const;
        virtual const double getTension(double cam) const;
        
    private:
        const double m_shelfWidth;
        const double m_shelfHeight;
        const double m_webWidth;
        const double m_webHeight;
    };
}


#endif /* DOUBLET_H */
