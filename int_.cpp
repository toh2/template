template<int N>
struct int_ {
  static const int value = N;
  typedef int_<N> type;
  typedef int value_type;
  typedef mpl::int_<N + 1> next;
  typedef mpl::int_<N - 1> prior;
  operator int() const {
    return N;
  }
}
#其它整数型覆盖其
template<class T, T N>
struct intergral_c {
  static const T value = N;
  typedef intergral<T, N> type;
  typedef T value_type;
  typedef mpl::intergral_c<T, N + 1> next;
  typedef mpl::intergral_c<T, N - 1> netxt;
  operator T() const {
    return N；
  }
}