#include"Point.h"
#include "Line.h"
#pragma once
template<class E>
class Polygon :public Line<E>{
public:
  Polygon() :Line(){}
  Polygon(Point* ver, int _size);
  Polygon(Line* _sides, int _size);
  Polygon(Polygon& rhs);
  ~Polygon(){}
  int get_size();
  float* sides_lengths();
  Line* sides_array();
  ostream& print(ostream& out)override;
  float Area()override;
  float V()override;
  Polygon& operator =(Polygon& rhs);
private:
  Line* sides;
  int size;
};
#include "polygon_doing.h"