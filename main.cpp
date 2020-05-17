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

    Container<int>F;
    Container<int>X;
    F.insert(A);
    F.insert(B);
    F.insert(C);
    cout << F<<endl<<"-------------------------------"<<endl;
    F.Writeln("working");
    X.Readln("C:\\Users\\a_kul\\Documents\\Visual Studio 2013\\Projects\\Laba4\\Laba4\\working");
    cout << X;
  }
  catch (length_error& er)
  {
    cout << er.what();
  }
  catch (domain_error& r){
    cout << r.what() << endl;
  }
  return 0;
}