#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int x;
  cout << "Set first number: ";
  cin >> x;
  // conditional statements
  if(x < 0){
    cout << "This shit is broke" << endl;
  } else {
    cout << "This shit ain't broke" << endl;
  }
  return 0;
}
