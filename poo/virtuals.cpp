#include <iostream>
#include <string>

using namespace std;

// base class
class Shape {
  public:
    void setValues(int a, int b){
      width = a;
      height = b;
    }

  // virtual member function -> member function that can be redefined in his derived classes only
  virtual int area() {
    return 0;
  }

  // pure virtual function (no needs declaration)
  virtual int perimeter()=0;

  protected:
      int height;
      int width;
};

class Rectangle : public Shape {
  public:
    int area(){ // redifined (according to the C++ compiler)
      return (height * width);
    }
    int perimeter(){ // redifined (according to the C++ compiler)
      return 10;
    }
};

class Triangle : public Shape {
  public:
    int area(){ // redifined (according to the C++ compiler)
      return (height * width/2);
    }
    int perimeter(){ // redifined (according to the C++ compiler)
      return 10;
    }
};

int main(){

  Rectangle rec;
  Triangle t;

  Shape *sh = &rec;
  Shape *sh2 = &t;
  // another way
  sh->setValues(10,20);
  sh2->setValues(10,20);
  cout << rec.area() << endl;
  cout << t.area() << endl;

  return 0;
}

// IF ALL THE FUNCTIONS ARE PURE VIRTUAL MEMBERS FUNCTION = CLASS becomes ABSTRACT (prototypes)
