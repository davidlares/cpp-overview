#include <iostream>
// ofstream => Stream class to write on files
// ifstream => Stream class to read from files
#include <fstream> // Stream class to both
#include <string>

using namespace std;

int main(){
  ofstream myFile;
  // opening file
  myFile.open("plainfile.txt");
  if (myFile.is_open()){
    // writing on file
    myFile << "This is my first text on my File \n";
    myFile << "Second line content \n";
    // closing file
    myFile.close();
  }

  return 0;
}
