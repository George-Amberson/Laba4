#include "Point.h"
#include "Line.h"
#pragma once
template <class B>
class Square :public Point<B>{
public:
  Square() :Point(), RN(0){}
  Square(Point& a, Point& b) :Point(a), RN(b){}
  Square(Square& tmp) :Point(tmp.get_Koor(), tmp.get_size()), RN(tmp.get_Diag().get_PointB()){}
  ~Square(){}
  float Area()override;
  float V()override;
  Line<B> get_Diag();
  Square& operator =(Square& rhs);
  ostream& print(ostream& out)override;
  void set_square(Square& rhs);
  int Type()override
  {
    return 4;
  }
  int GetSize()override
  {
    return (*this).Type();
  }
  int get_meentional()override
  {
    return RN.get_meentional();
  }
private:
  
  Point RN;
};
#include "square_doing.h"