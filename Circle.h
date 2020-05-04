#include"Point.h"
#include "Line.h"
#pragma once
template<class A>
class Circle :public Point<A>
{
public:
  Circle();
  Circle(Point& a, Line<A>& b);
  Circle(Circle& q) :Point(q.koorF, q.mer), length(q.length){}
  ~Circle(){}
  Line<A> get_Line();
  float Area()override;
  float V()override;
  Point get_centr();
  Circle& operator =(Circle& rhs);
  ostream& print(ostream& out)override;
private:
  Line<A> length;
};
#include "circle_doing.h"