#include <iostream>
#include <string>

using namespace std;

template<class T> // T is the dataType
class Maths {
  T a,b;
  public:
    Maths(T x, T y){
      a = x;
      b = y;
    }
    T maxValue();
};

template<class T>
T Maths<T>::maxValue() {
  return (a > b ? a : b);
}

int main(){
  Maths<int> mat(45,50);
  cout <<  mat.maxValue() <<endl;
}
