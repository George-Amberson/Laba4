#include"Circle.h"
#include"Cube.h"
#include"Triangle.h"
#include"Square.h"
#include"Polygon.h"
#include"Line.h"
#include"Point.h"
#include"lin_null.h"
#include<fstream>
#include "UsClass.h"
template<class R>
class Container 
{
public:
  Container(){};
  template <class T>
  void insert(T& _in);

  template<class J>
  void Delete(J& _in);
  ~Container();
  int get_length()
  {
    return size;
  }
  lin_null* operator[](const int i);
  template<class H>
  friend ostream& operator<<(ostream& out, Container<H>& rhs);
  template<class E>
  void out(E& _in);

  void Writeln(char B[]);
  void Readln(char B[]);
private:
  lin_null** Array;
  int size;
};
#include"container_doing.h"