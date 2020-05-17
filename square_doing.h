template<class o>
float Square<o>::Area() 
{
    Point<o>A((*this).get_Koor(), (*this).get_size());
    Line<o> e(A, RN);
    return (e.module()*e.module() / 2);
}

template<class R>
float Square<R>::V()
{
    return 0;
}


template<class G>
Line<G> Square<G>::get_Diag()
{
  Point<G>A((*this).get_Koor(), (*this).get_size());
  Line<G>C(A, RN);
    return C;
}

template<class F>
Square<F>& Square<F>::operator =(Square<F>& rhs)
{
    if (this != &rhs){
      (*this).set_Point(rhs.get_PointA().get_Koor(), rhs.get_PointA().get_size());
      RN = rhs.get_Diag().get_PointB();
      return(*this);
    }
    return(*this);
}

template<class B>
ostream& Square<B>::print(ostream& out)
{
    Point<B> r((*this).get_Koor(), (*this).get_size());
    out << r;
    out << (*this).get_Diag().get_PointB();
    return out;
}

template<class V>
void Square<V>::set_square(Square& rhs)
{
    (*this).set_Point(rhs.get_Diag().get_PointA());
    RN = rhs.get_Diag().get_PointB();
}

