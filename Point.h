#include "lin_null.h"
#include <exception>
#pragma once

template <class First>
class Point :public lin_null
{
public:
  Point() :koorF(0), mer(0){}
  Point(First t, int y);
  Point(Point& r);
  Point(First* we, int size);
  ~Point();
  bool operator !=(const Point& rhs);
  ostream& print(ostream& out)override;
  Point& operator =(const Point& rhs);
  Point& operator =(const int rhs);
  First* get_Koor();
  int get_size();
  float Area()override;
  float V()override;
  void set_Point(First* er, int size);
  int Type()override
  {
    return 1;
  }
  int GetSize()override
  {
    return (*this).Type();
  }
  int get_meentional()override
  {
    return (*this).get_size();
  }
private:

  First* koorF;
  int mer;
};
#include "point_doing.h"