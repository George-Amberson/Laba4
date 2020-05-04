#include "Point.h"
#include "Line.h"
#pragma once
template <class B>
class Square :public Point<B>{
public:
  Square() :Point(), RN(0){}
  Square(Point& a, Point& b) :Point(a), RN(b){}
  Square(Square& tmp) :Point(tmp.koorF, tmp.mer), RN(tmp.RN){}
  ~Square(){}
  float Area()override;
  float V()override;
  Line<B> get_Diag();
  Square& operator =(Square& rhs);
  ostream& print(ostream& out)override;
  void set_square(Square& rhs);
private:
  Point RN;
};
#include "square_doing.h"