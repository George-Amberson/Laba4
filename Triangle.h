#include "Line.h"
#pragma once
template<class M>
class Triangle :public Line<M>{
public:
  Triangle() :Line(), Top(0){}
  Triangle(Point<M>& a, Point<M>& b, Point<M>& c) :Line(b, c), Top(a){}
  Triangle(Triangle& tmp) :Line(tmp.get_PointA(), tmp.get_PointB()), Top(tmp.Top){}
  ~Triangle(){}
  Point get_PointA();
  Point get_PointB();
  Point get_Top();
  float Area()override;
  float V()override;
  Triangle& operator = (Triangle& rhs);
  ostream& print(ostream& out)override;
  int Type()override
  {
    return 3;
  }
  int GetSize()override
  {
    return (*this).Type();
  }
  int get_meentional()override
  {
    return Top.get_meentional();
  }
private:
 
  Point Top;
};
#include"triangle_doing.h"