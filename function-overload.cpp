#include <iostream>

using namespace std;

void sum(int a, int b){
   cout << "Sum of ints: " << a + b << endl;
}

void sum(float c, float d){
  cout << "Sum of floats: " << c + d << endl;
}

int main(int argc, char const *argv[]) {
  int a = 10344, b = 2110;
  sum(a,b);

  float c = 3.4, d = 7.8;
  sum(c, d);
  return 0;
}
