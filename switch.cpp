#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  char grade;
  cout << "Enter a grade: ";
  cin >> grade;

  switch(grade){
    case 'A':
      cout << "Excellent" << endl;
      break;
    case 'B':
      cout << "Very good" << endl;
      break;
    case 'C':
      cout << "Good" << endl;
      break;
    default:
       cout << "Default value" << endl;
       break;
  }

  return 0;
}
