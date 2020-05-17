template<class E>
Point<E> Triangle<E>::get_PointA()
{
  return Line::get_PointA();
}

template<class H>
Point<H> Triangle<H>::get_PointB()
{
  return Line::get_PointB();
}

template<class J>
Point<J> Triangle<J>::get_Top()
{
  return Top;
}

template<class F>
float Triangle<F>::Area()
{
  Line<F>AC((*this).get_PointA(), Top);
  Line<F>AB((*this).get_PointB(), Top);
  float tmp = (AC.module() + AB.module() + (*this).module()) / 2;
  return (sqrt(tmp*(tmp - AC.module())*(tmp - AB.module())*(tmp - (*this).module())));
}

template<class H>
float Triangle<H>::V()
{
  return 0;
}

template<class F>
Triangle<F>& Triangle<F>::operator =(Triangle<F>& rhs)
{
  if (this != &rhs){
    (*this).set_line(rhs.get_PointA(), rhs.get_PointB());
    Top = rhs.get_Top();
  }
  return(*this);
}

template<class G>
ostream& Triangle<G>::print(ostream& out)
{
  out << (*this).get_PointA() << (*this).get_PointB() << (*this).get_Top();
  return out;
}
