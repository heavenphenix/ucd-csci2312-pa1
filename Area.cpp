//
// by David Lam
// 2.7.16
// area.cpp
//

#include <iomanip>
#include <iostream>
#include "Point.h"
#include <cmath>

using namespace std;

double computeArea (const Point &a, const Point &b, const Point &c)
{

  cout << setprecision(3) << fixed;
  
  double ab, ac, bc;
  // side of triangle
  ab = a.distanceTo(b);
  ac = a.distanceTo(c);
  bc = b.distanceTo(c);
  
  double peri;
  peri = ( ab + ac + bc ) / 2.0;
  
  double area;
  area = sprt ( s * (s - ab) * (s - ac) * (s - bc);
  
  
  return area;
  
  };
