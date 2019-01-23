#include <iostream>

using namespace std;

// this is a global variable
int globalVar = 50;

// returning string
string sayName(string name){
  return "Hello, " + name;
}

// not returning
void otherFunction(){
   cout << "Yep, Buddy";
}

// default arg declaration
int sum(int a, int b = 20){
  int c = 20;  // local scope variable
  return a + (c+b);
}

// declarations should be up, unless it takes the prototype

int main(){
    cout << "Global Variable: " << globalVar << endl;
    cout <<::globalVar << endl; // this is considered as a global variable
    cout << sayName("David");
    otherFunction();
    int result = sum(10);
    cout << "The result is: " << result;
    return 0;
}
