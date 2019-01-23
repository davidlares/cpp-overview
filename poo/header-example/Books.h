#include <iostream>
#include <string>
#ifndef BOOKS_H
#define BOOKS_H

using namespace std;
// this is the prototyping
class Books
{
    public:
       Books();
       int bookId;
       void setBookId(int bookId_);
       int getBookId();
};

#endif

// Header file -> declaration or prototyping of the class or method
// Source file -> contain the definition of thoses member functions or classes
