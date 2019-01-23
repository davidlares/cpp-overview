#include <iostream>
#include <string>

using namespace std;

class Vector {
public:
  int x,y;
  // constructor
  Vector() {};
  // overloading constructor
  Vector(int a, int b) {
    x = a;
    y = b;
  }
  // overload
  Vector operator+(const Vector&);
};

Vector Vector::operator+(const Vector& parameter){
  Vector temp;
  temp.x = x + parameter.x;
  temp.y = y + parameter.y;
  return temp;
}


int main() {

  Vector vec1(4,2);
  Vector vec2(2,2);
  Vector result = vec1 + vec2;
  cout << "The result is: " << result.x << " and: " << result.y << endl;
  return 0;
}
