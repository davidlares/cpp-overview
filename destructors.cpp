#include <iostream>
#include <string>

using namespace std;

class Book {
  public:
    // placing a constructor
    Book(string x){
      cout << "You are in constructor" << endl;
      setName(x);
    }

    // placing a destructor -> called out of the scope
    ~Book(){
        cout << "You are in destructor" << endl;
    }

    // setter function
    void setName(string x){
      name = x;
    }
    // getter function
    string getName(){
      return name;
    }
  private:
    // it cannot be used outside a class
    string name;

};

int main(){

  // instance -> it creates a constructor and destructor automatically
  Book book("David Book");
  cout << book.getName() << endl;

  return 0;
}
