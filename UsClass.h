#include"lin_null.h"
#include"Point.h"
#include"Line.h"
#include"Triangle.h"
#include"Square.h"
#include"Circle.h"
#include"Cube.h"
#include"Polygon.h"
#pragma once
class Object{
public:
  template<class H>
  Object(int Type, H** Array, int _width, int _length);
  lin_null* Get_Object()
  {
    return Letter;
  }
  friend lin_null* Get_Letter(Object* S)
  {
    return S->Get_Object();
  }
private:
  lin_null* Letter;
};
template<class G>
Object::Object(int type, G** Array, int _width, int _length)
{
  switch (type)
  {
  case 0:
  {
    Point<G>A(Array[0], _length);
    Point<G>B(Array[1], _length);
    Point<G>C(Array[2], _length);
    Line<G>D(B, C);
    Letter = new Circle<G>(A, D);
    break;
  }
  case 1:
    Letter = new Point<G>(Array[0], _length);
    break;
  case 2:
  { 
  Point<G>A(Array[0], _length);
  Point<G>B(Array[1], _length);
  Letter = new Line<G>(A, B);
  break;
  }
  case 3:
  {
    Point<G>A(Array[0], _length);
    Point<G>B(Array[1], _length);
    Point<G>C(Array[2], _length);
    Letter= new Triangle<G>(C, B, A);
    break;
  }
  case 4:
  {
    Point<G>A(Array[0], _length);
    Point<G>B(Array[1], _length);
    Letter = new Square<G>(A, B);
    break;
  }
  case 8:
  {
    Point<G>A(Array[0], _length);
    Point<G>B(Array[0], _length);
    Square<G>C(A, B);
    Point<G>D(Array[0], _length);
    Point<G>E(Array[0], _length);
    Square<G>F(D, E);
    Letter = new Cube<G>(C, F);
    break;
  }
  case 6:
  {
    Point<G>* ar = new Point<G>[_width / 2];
    int i = 0;
    int j = 0;
    while (i < _width)
    {
      Point<G>A(Array[i], _length);
      ar[j] = A;
      j++;
      (i % 2 == 0) ? i++ : i += 2;
    }
    Letter = new Polygon<G>(ar, _width / 2);
  }
  }

}