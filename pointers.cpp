#include <iostream>

using namespace std;

void passByValue(int val){
  val = 100;
}

void passByReference(int *val){
  // changing the value with the address
  *val = 100;
}

int main(){
  // pointers -> value whose address another variable
  int var = 0;
  cout << &var <<endl;
  var = 20; // still the same mem address

  int *intP;
  intP = &var;

  cout << "The address is: " << intP << endl;
  cout << "The value is: " << *intP << endl;

  // passing the value
  int x = 20, y = 60;
  passByValue(x);
  cout << "Printing (by value): " << x << endl;
  // passing the reference (address)
  passByReference(&y);
  cout << "Printing (by reference): " << y << endl;

  return 0;
}
