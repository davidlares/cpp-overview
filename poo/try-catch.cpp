#include <iostream>
#include <string>
#include <exception>

using namespace std;

int main(){
  // exception -> unwanted cases. unhandled cases
  // Depends on what type of error is sent
  try {
    int age;
    cout << "Please enter your age: ";
    cin >> age;
    if(age > 100  ||  age < 0){
      throw "Invalid Age motherfucker"; // Any kind of return
    }
  } catch(std::exception e) {
    cout << "The error is: " << e.what() << endl;
  }

  // as many catch clauses possible
}
