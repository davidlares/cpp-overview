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
  
  // instance
  Book book("David Book");
  cout << book.getName() << endl;

  Book book2("Lares Book");
  cout << book2.getName() << endl;
  return 0;
}
