#include <iostream>
#include <string>

using namespace std;

class Book {
  public:
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
  Book book;
  book.setName("David Book");
  cout << book.getName() << endl;
  return 0;
}
