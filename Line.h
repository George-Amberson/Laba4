#include"Point.h"
#pragma once
template <class D>
class Line :public Point<D>
{
public:
  Line() :Point()
  {
    Point a;
    koorS = a;
  }
  Line(Point& a, Point& b);
  Line(Line& t);
  ~Line(){}
  Point<D> get_PointA();
  Point<D> get_PointB();
  float module();
  Line& operator =(Line& rhs);
  ostream& print(ostream& out)override;
  float Area()override;
  float V()override;
  void set_line(Point& A, Point& B);
  int Type()override
  {
    return 2;
  }
  int GetSize()override
  {
    return (*this).Type();
  }
  int get_meentional()override
  {
    return koorS.get_meentional();
  }


private:

  Point<D> koorS;
};
#include "line_doing.h"