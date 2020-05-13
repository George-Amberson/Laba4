#include <iostream>
#include "Container.h"
using namespace std;

int main()
{
  try
  { 
    
    Point<int>A(1, 3);
    Point<int>B(3, 3);
    Point<int>Q(0, 3);
    Line<int>C(A, B);
    cout << C.module() << endl;
    Circle<int>D(A, C);
    Square<int>E(Q, A);
    Container<int>F;
    F.insert(Q);
    F.insert(B);
    F.insert(E);
    cout << F;
    F.Delete(Q);
    F.out(Q);
    cout << "Everything's fine" << endl;
  }
  catch (length_error& er)
  {
    cout << er.what();
  }
  return 0;
}