#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  // initialized
  int myArray[3] = {1,2,3};
  cout << myArray[1] << endl;

  // not initialized
  int otherArray[15];
  for(int i = 0; i <= 14; i++){
    otherArray[i] = i;
  }

  cout << otherArray[5] << endl;

  // getting the sum
  int sumArray[5] = {1,2,3,4,5};
  int sum = 0;
  for(int j = 0; j < 6; j++){
    sum += sumArray[j];
  }

  cout << "The sum is: " << sum << endl;

  // multi dimensional arrays

  int multidimensional[2][2];

  for(int k = 0; k <= 2; k++){
    for(int h = 0; h <= 2; h++){
      multidimensional[k][h] = 45;
    }
  }

  cout << "Multidimensional value is: " << multidimensional[1][0] << endl;

  return 0;

}
