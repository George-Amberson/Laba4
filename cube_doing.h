template<class R>
Cube<R>::Cube(Point<R>& a, Point<R>& b, Point<R>& c, Point<R>& d, Point<R>& e, Point<R>& f, Point<R>& g, Point<R>& h) :Square(a, c){
  Square<R>A(e, g);
  up = A;
}

template<class O>
float Cube<O>::Area()
{
  return (*this).Square_low().Area() * 6;
}

template<class U>
float Cube<U>::V()
{
    return( up.Area())*((up.get_Diag().module())/sqrt(2));
}

template<class E>
Square<E> Cube<E>::Square_low()
{
  Square<E>B((*this).get_Diag().get_PointA(), (*this).get_Diag().get_PointB());
  return B;
}

template<class R>
Square<R> Cube<R>::Square_Up()
{
  return up;
}

template<class J>
Cube<J>& Cube<J>::operator =(Cube<J>& rhs)
{
  if (this != &rhs){
    (*this).set_square(rhs.Square_low());
    up = rhs.Square_Up();
  }
  return (*this);
}

template<class G>
ostream& Cube<G>::print(ostream& out)
{
  out << (*this).Square_low() << (*this).Square_Up();
  return out;
}

