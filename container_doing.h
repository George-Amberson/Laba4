template<class K>
template<class J>
void Container<K>::insert(J& in)
{
  lin_null** tmp = new lin_null*[size];
  for (int i = 0; i < size; i++)
  {
    tmp[i] = Array[i];
  }
  delete[]Array;
  size = size + 1;
  Array = new lin_null*[size];
  for (int i = 0; i < size - 1; i++)
  {
    Array[i] = tmp[i];
  }
  Array[size - 1] = (&in);
  delete[]tmp;
}

template<class K>
template<class G>
void Container<K>::Delete(G& _in)
{
  lin_null** tmp = new lin_null*[size];
  int j = 0;
  for (int i = 0; i < size; i++)tmp[i] = NULL;
  for (int i = 0; i < size; i++)
  {
    if (Array[i] != &_in)
    {
      tmp[j] = Array[i];
      j++;
    }
  }
  delete[] Array;
  if (tmp[size - 1] == NULL)
  {
    Array = new lin_null*[size - 1];
    size = size - 1;
  }
  else
  {
    Array = new lin_null*[size];
  }
  for (int i = 0; i < size; i++)Array[i] = tmp[i];
  delete tmp;
}

template<class Q>
Container<Q>::~Container()
{
  delete[]Array;
}

template<class R>
lin_null* Container<R>::operator [](const int i)
{
  if ((i < 0) || (i>size))throw length_error("uncorrect index");
  return (Array[i]);
}
template<class R>
ostream& operator <<(ostream& out, Container<R>& rhs)
{
  for (int i = 0; i < rhs.get_length(); i++)
  {
    out << *(rhs[i]);
  }
  return out;
}

template<class G>
template<class E>
void Container<G>::out(E& _in)
{
  cout << _in;
}
