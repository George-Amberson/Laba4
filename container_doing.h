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


template<class F>
void Container<F>::Writeln(char B[])
{
  ofstream stream;
  stream.open(B, ios_base::out | ios_base::trunc);
  if ((!stream.is_open())||((*this).get_length()<1)) throw domain_error("file's way isn't exist");
  stream << (*this).get_length() << endl;
  stream << (*(*this)[0]).get_meentional() << endl;
  for (int i = 0; i < (*this).get_length(); i++)
  {
    stream << (*(*this)[i]).Type()<<endl<<(*(*this)[i]).GetSize() << endl;
    stream << (*(*this)[i]);
  }
  stream.close();
}

template<class F>
void Container<F>::Readln(char B[])
{
  ifstream stream;
  stream.open(B, ios_base::in);
  if (!stream.is_open()) throw domain_error("file's way isn't exist");
  int n;
  stream >> n;
  delete[] Array;
  size = n;
  Array = new lin_null*[size];
  int _length;
  stream >> _length;
  for (int i = 0; i < n; i++)
  {
    int type,typed;
    stream >> type;
    stream >> typed;
    F**tmp = new F*[typed];
    for (int v = 0; v < typed; v++)tmp[v] = new F[_length];
    for (int v = 0; v < typed; v++)
    {
      for (int j = 0; j < _length; j++)
      {
        stream >> tmp[v][j];
      }
    }
   
    Array[i] = Get_Letter(new Object(type, tmp, typed, _length));
  }

  stream.close();
}
