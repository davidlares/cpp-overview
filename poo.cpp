#include <iostream>
#include <cstring>

using namespace std;

class Book {
  public:
    // attrs
    int id = 256;
    void printBookID(){
      cout << "The book ID is: " << id << endl;
    }
};

int main(){
  // instance
  Book book;
  book.printBookID();
  return 0;
}
