template<class F>
Line<F>::Line(Point<F>&a, Point<F>&b) :Point(a)
{
    koorS = b;
}

template<class Q>
Line<Q>::Line(Line<Q>& t) :Point(t.get_Koor(), t.get_size())
{
    koorS = t.get_PointB();
}

template<class Y>
Point<Y> Line<Y>::get_PointA()
{
    Point<Y>A((*this).get_Koor(), (*this).get_size());
    return A;
}

template<class T>
Point<T> Line<T>::get_PointB()
{
  return koorS;
}

template<class H>
float Line<H>::module()
{
  float t = 0;
  if ((*this).get_size() == koorS.get_size())
  {
    for (int i = 0; i <koorS.get_size(); i++) t = t + (koorS.get_Koor()[i] - (*this).get_Koor()[i])* (koorS.get_Koor()[i] - (*this).get_Koor()[i]);
    t = sqrt(t);
    return t;
  }
  return 0;
}

template<class F>
Line<F>& Line<F>::operator =(Line<F>& rhs)
{
  (*this).set_Point(rhs.get_PointA().get_Koor(), rhs.get_PointA().get_size());
  (*this).koorS = rhs.koorS;
  return (*this);
}

template<class Y>
ostream& Line<Y>::print(ostream& out)
{
  out << (*this).get_PointA();
  out << (*this).get_PointB();
  return out;
}

template<class O>
float Line<O>::Area()
{
  return 0;
}

template<class I>
float Line<I>::V()
{
  return 0;
}

template<class Y>
void Line<Y>::set_line(Point<Y>& A, Point<Y>& B)
{
  (*this).set_Point(A);
  korrS = B;
}

