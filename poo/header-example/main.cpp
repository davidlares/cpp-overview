#include "Books.h"
#include <iostream>
#include <string>
using namespace std;


int main(){
  // instance
  Books book;

  // Pointers -> array member selections
  Books *bookPointer = &book;
  (*bookPointer).setBookId(300);
  // () everytime we use pointers, but we can use ->
  cout << (*bookPointer).getBookId() << endl; // member variables
  // arrow member selected operator (-> = POINTER)
  bookPointer->setBookId(1000);
  cout << bookPointer->getBookId() << endl;

   // object usage
  book.setBookId(100);
  cout << book.getBookId() << endl;
  return 0;
}
