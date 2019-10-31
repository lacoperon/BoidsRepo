#include <string>
#include <iostream>
using std::string;
using std::ostream;

// Simple Boid Position container struct
struct Position {
  double x;
  double y;
  double z;
};

// Simple Boid Velocity container struct
struct Velocity {
  double x;
  double y;
  double z;
};

// Boid Container Struct
class Boid {
  string name;
  Position pos;
  Velocity vel;
  public:
    Boid();

    
    string toStr() {
      return string("hello");
    }

    operator string() {
      string boid_str = "Boid Name: " + name + "\n";
      //boid_str += string("\t Position<x:") + string(pos.x) + "y:" + string(pos.y) + "z:" + string(pos.z) + ">\n";
      ;
      return boid_str;
    }
};


