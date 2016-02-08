// A 2-dimensional point class!
// Coordinates are double-precision floating point.
// changed 


#ifndef __POINT_H
#define __POINT_H

class Point {
    
private:
    double x, y, z;

public:
    // Constructors
    Point();                      // default constructor
    Point(double x, double y, double z);    // two-argument constructor

    // Mutator methods
    void Point::setX(double newX)
    {
        x = newX;
    };
    
    void Point::setY(double newY)
    {
        y = newY;
    };
    
    void Point::setZ(double newZ)
    {
        z = newZ;
    };
    
    // Accessor methods
    double Point::getX() const
    
    double Point::getY() const
    
    double Point::getZ() const
};

double Point::distanceTo (const Point &) const
{
    double x2, y2, z2;
    
    x2 = Point2.getX();
    y2 = Point2.getY();
    z2 = Point2.getZ();

    double dis; 
    dis = sqrt ( pow (x - x2, 2) + pow (y - y2, 2) + pow (z - z2, 2));
    
    return dis;
}
#endif // __POINT_H
