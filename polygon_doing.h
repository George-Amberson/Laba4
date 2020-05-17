template<class H>
Polygon<H>::Polygon(Point<H>* ver, int _size) :Line(ver[0], ver[1]), size(_size){
  sides = new Line[_size - 1];
  for (int i = 1; i < _size - 1; i++)
  {
    Line<H> tmp(ver[i], ver[i + 1]);
      sides[i - 1] = tmp;
  }
  Line<H> tmp(ver[size - 1], ver[0]);
  sides[_size - 2] = tmp;

}

template<class G>
Polygon<G>::Polygon(Line<G>* _sides, int _size) :Line(_sides[0]), size(_size)
{
  sides = new Line<G>[_size - 1];
  for (int i = 0; i < _size - 1; i++) sides[i] = _sides[i + 1];
}

template<class J>
Polygon<J>::Polygon(Polygon<J>& rhs) :Line(rhs.get_PointA(), rhs.get_PointB()), size(rhs.size){
  sides = new Line<J>[rhs.size - 1];
  for (int i = 0; i < size - 1; i++)sides[i] = rhs.sides[i];
}

template<class N>
int Polygon<N>::get_size()
{
  return size;
}
template<class D>
float* Polygon<D>::sides_lengths()
{
  float* tmp = new float[size];
  tmp[0] = (*this).module();
  for (int i = 1; i < size; i++) tmp[i] = sides[i - 1].module();
  return tmp;
}

template<class R>
Line<R>* Polygon<R>::sides_array()
{

  Line<R>* tmp = new Line<R>[size];
  Line<R> er((*this).get_PointA(), (*this).get_PointB());
  tmp[0] = er;
  for (int i = 1; i < size; i++)tmp[i] = sides[i - 1];
  return tmp;
}
template<class V>
ostream& Polygon<V>::print(ostream& out)
{
  for (int i = 0; i < (*this).get_size(); i++) out << (*this).sides_array()[i];
  return out;
}

template<class B>
float Polygon<B>::Area()
{
  return 0;
}

template<class W>
float Polygon<W>::V()
{
  return 0;
}

template<class G>
Polygon<G>& Polygon<G>::operator = (Polygon<G>& rhs)
{
  if (this != &rhs){
    (*this).set_line(rhs.get_PointA(), rhs.get_PointB());
    delete[]sides;
    sides = new Line<G>[rhs.get_size() - 1];
    for (int i = 0; i < size - 1; i++)sides[i] = rhs.sides_array()[i + 1];
    size = rhs.get_size();
  }
  return *this;
}

