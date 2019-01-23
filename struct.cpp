#include <iostream>
#include <cstring>

using namespace std;

// Own data type
struct Book {
  string name;
  int pages;
};

// using struct in a function
void printBook(struct Book book){
  cout << book.name << " have " << book.pages << " pages" << endl;
}

int main() {
  struct Book book1;
  // asigning values
  book1.name = "My first book";
  book1.pages = 50;
  cout << book1.name << " have " << book1.pages << " pages" << endl;

  struct Book book2;
  book2.name = "My second book";
  book2.pages = 10;
  printBook(book2);

  return 0;
}
