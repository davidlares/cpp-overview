#include <iostream>
// ofstream => Stream class to write on files
// ifstream => Stream class to read from files
#include <fstream> // Stream class to both
#include <string>

using namespace std;

int main(){
  // reading from a text file
  string line;
  ifstream readFile("plainfile.txt");
  if(readFile.is_open()){
    while(getline(readFile, line)){
      cout << "Reading: " << line << endl;
    }
    readFile.close();
  } else {
    cout << "FIle not open" << endl;
  }
  return 0;
}
