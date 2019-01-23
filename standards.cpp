#include <iostream>
#include <thread>

using namespace std;

int main(){
  // autoAssignable dataType -> C++ 2011 ISO
  auto a = 42;
  auto b = 42.2;
  return 0;

  cout << "Integer: " << a << " Float: " << b << endl;
}
