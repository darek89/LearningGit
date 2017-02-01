#ifndef SHAPE_H
#define SHAPE_H


enum ShapeTypes
{
    Rectangle,
    Circle,
    Ring,
    DoubleT
};


namespace Shapes
{
    class Shape
    {
    public:
        Shape();
        virtual ~Shape();
        
        virtual const double getArea() const = 0;
        virtual const double getInertiaModulus() const = 0;
        virtual const double getTension(double cam) const = 0;
        
    protected:
        unsigned int c_DivisionNumber;
    };
}


#endif /* SHAPE_H */
