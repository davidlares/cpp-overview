#include "Books.h"

// Binary scoped resolution operator :: define different classes with the same functions
Books::Books() {
  // constructor function
}

void Books::setBookId(int bookId_){
  bookId = bookId_;
}

int Books::getBookId(){
  return bookId;
}


// Header file -> declaration or prototyping of the class or method
// Source file -> contain the definition of thoses member functions or classes
