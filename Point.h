// A 2-dimensional point class!
// Coordinates are double-precision floating point.
// by David Lam
// editted 2.7.16


#ifndef __POINT_H
#define __POINT_H

class Point {
    
private:
    double x, y,z;
// this makes this into a 3 dimensional point

public:
    // Constructors
    Point();                      // default constructor
    Point(double x, double y, double z);    // three argument constructor

    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);
    // add in the new dimension mutator
    
    // Accessor methods
    double getX() const;
    double getY() const;
    double getZ() const;
    
    // calls the distance back between the two points
    double distanceTo(const Point &) const;
};

#endif // __POINT_H
