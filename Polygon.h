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

  Line<E>* sides_array();
  ostream& print(ostream& out)override;
  float Area()override;
  float V()override;
  Polygon& operator =(Polygon& rhs);
  int Type()override
  {
    return 6;
  }
  int GetSize()override
  {
    return (*this).get_size();
  }
  int get_meentional()override
  {
    return Line<E>::get_meentional();
  }
private:

  Line* sides;
  int size;
};
#include "polygon_doing.h"