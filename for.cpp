#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  for(int i = 1; i < 9; i++){
    cout << "I value: " << i << endl;
  }

  for(int j = 10; j > 0; j++){
    cout << "J value: " << j << endl;
  }

  return 0;

    // incremental
    // ++x -> does it before the evaluation -> the value stays at that incremented value
}
