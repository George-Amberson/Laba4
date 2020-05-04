template<class A>
Point<A>::Point(A t, int y)
{
  if (y < 0)throw length_error("uncorrect size");
  mer = y;
  koorF = new A[mer];
  for (int i = 0; i < mer; i++) koorF[i] = t;
}
template<class G>
Point<G>::Point(Point& r)
{
  mer = r.mer;
  koorF = new G[mer];
  for (int i = 0; i < mer; i++)koorF[i] = r.koorF[i];
}
template<class F>
Point<F>::Point(F* we, int size)
{
  if (size < 0)throw length_error("uncorrect array length");
  mer = size;
  koorF = new F[mer];
  for (int i = 0; i < mer; i++) koorF[i] = we[i];
  
}
template<class G>
Point<G>::~Point()
{
  delete[]koorF;
}

template<class E>
bool Point<E>::operator !=(const Point<E>& rhs)
{
  if (mer != rhs.mer)return true;
  for (int i = 0; i < rhs.mer; i++){
    if (koorF[i] != rhs.koorF[i]) return true;
  }
  return false;
}
template<class G>
ostream& Point<G>::print(ostream& out)
{
   for (int i = 0; i < (*this).mer; i++)
   {
     out << (*this).koorF[i] << " ";
   }
    out << endl;
    return out;
}

template<class G>
Point<G>& Point<G>::operator=(const Point& rhs)
{
    if (this == &rhs) return *this;
    mer = rhs.mer;
    koorF = new G[mer];
    for (int i = 0; i < mer; i++)koorF[i] = rhs.koorF[i];
    return(*this);
  
}

template<class F>
Point<F>& Point<F>::operator =(const int rhs)
{
  mer = rhs + 1;
  koorF = new F[mer];
  for (int i = 0; i < rhs + 1; i++)
  {
    koorF[i] = mer;
  }
  return (*this);
}

template<class J>
J* Point<J>::get_Koor()
{
    return koorF;
}

template<class W>
int Point<W>::get_size()
{
    return mer;
}

template<class H>
float Point<H>::Area()
{
    return 0;
}

template<class X>
float Point<X>::V()
{
  return 0;
}

template<class E>
void Point<E>::set_Point(E* er,int size)
{
  if (size < 0)throw length_error("uncorrect size");
  delete[] koorF;
  koorF = new E[size];
  for (int i = 0; i < size; i++)koorF[i] = er[i];
  mer = size;
}
