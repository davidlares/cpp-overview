#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int x,z;
  cout << "Set first number: ";
  cin >> x;
  cout << "Set second number: ";
  cin >> z;

  cout << "The sum is: " << x + z << endl;
  cout << "The substract is: " << x - z << endl;
  cout << "The times is: " << x * z << endl;
  cout << "The division is: " << x / z << endl;
  cout << "The module is: " << x % z << endl;

  return 0;
}
