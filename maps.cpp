#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
  // Maps - associative container with value/key for data
  map<int, string> map_;
  map_[1] = "David";
  map_[2] = "Lares";

  cout << map_[2] << endl;

  // We cannot set duplicate keys for a map
  return 0;
}
