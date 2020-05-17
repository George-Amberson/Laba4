template<class X>
Circle<X>::Circle():Point()
{
  Line<X>E;
  length = E;
}


template<class T>
Circle<T>::Circle(Point<T>& a, Line<T>& b) : Point(a)
{
    length = b;
}

template<class E>
 Line<E> Circle<E>::get_Line()
{
    return length;
}

template<class K>
float Circle<K>::Area()
{
  return 3.14*length.module()*length.module();
}

template<class H>
float Circle<H>::V()
{
    return 0;
}

template<class M>
Point<M> Circle<M>::get_centr()
{
  Point<M> tmp((*this).get_Koor(), (*this).get_size());
  return tmp;
}

template<class J>
Circle<J>& Circle<J>:: operator =(Circle<J>& rhs)
{
    if (this != &rhs)
    {
      (*this).set_Point(rhs.get_PointA().get_Koor(), rhs.get_PointA().get_size());
      length = rhs.get_line();
      return(*this);
    }
    return(*this);
}

template<class G>
ostream& Circle<G>::print(ostream& out)
{
    Point<G> tmp((*this).get_Koor(), (*this).get_size());
    out << tmp << length;
    return out;
}

