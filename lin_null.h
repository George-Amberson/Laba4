#pragma once
#include <iostream>
using namespace std;

class lin_null
{
public:
  virtual ~lin_null(){}
  virtual float Area() = 0;
  virtual float V() = 0;
  virtual ostream& print(ostream& out) = 0;
  friend ostream& operator<<(ostream& out, lin_null& rhs)
  {
    return rhs.print(out);
  }
};