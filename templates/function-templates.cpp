#include <iostream>
#include <string>

using namespace std;

// function example
int add(int a, int b){
  return  a + b;
}

// generic function by templates
template<class dataType>
dataType genericAdd(dataType a, dataType b){
  return a + b;
}

int main(){
  // templates -> generic programming
  int x = 25;
  int y = 10;
  cout << "The result (integer) is: " << add(x,y) << endl;
  cout << "The result (integer) is: " << genericAdd(x,y) << endl;
  cout << "The result (float) is: " << genericAdd(2.5,6.3) << endl;

  // works pretty well for same dataTypes operations
}
