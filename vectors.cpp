#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
  // array vs vectors
  // array -> need to be size defined
  // vectors -> change the size dynamically. Have own functions, etc
  int myArray[3] = {10,20,30};
  cout << myArray[1] << endl;

  vector<int> v;
  v.push_back(10);  // add element from the end of it <- kinda LIFO
  v.push_back(20);
  v.push_back(30);
  // Showing size
  cout << "Vector size: " << v.size() << endl;
  // Iterating
  for(int i = 0; i < v.size(); i++){
    cout << "Vector pos " << i << ": " << v.at(i) << endl;
  }

  v.erase(v.begin()); // FIFO strategy for deleting
  v.erase(v.end()); 

  return 0;
}
