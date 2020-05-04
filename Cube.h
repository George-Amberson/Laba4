#include"Square.h"
#pragma once
template <class C>
class Cube :public Square<C>{
public:
  Cube() :Square()
  {
    up = new Square;
  }
  Cube(Point& a, Point& b, Point& c, Point& d, Point& e, Point& f, Point& g, Point& h);
  Cube(Square& A, Square& B) :Square(A), up(B){}
  Cube(Cube& tmp) :Square(tmp.get_Diag().get_PointA(), tmp.get_Diag().get_PointB()), up(tmp.up){}
  ~Cube(){}
  float Area()override;
  float V()override;
  Square Square_low();
  Square Square_Up();
  Cube& operator =(Cube& rhs);
  ostream& print(ostream& out);
private:
  Square up;
};
#include "cube_doing.h"