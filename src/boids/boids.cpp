/* 
Boids Implementation (boids.h)
October 28th, 2019
by lacoperon (elliot.james.williams@gmail.com)
Open Source under the Apache 2.0 License
*/

#include <iostream>
#include "boids.h"
using std::cout;
using std::endl;
 
Boid::Boid() {
  name = string("Elliot");
  pos = Position({0.0, 0.0, 0.0});
  vel = Velocity({0.0, 0.0, 0.0});
};

int main() {
  Boid example_boid;
  cout << string(example_boid) << endl;
  cout << example_boid.toStr() << endl;
}
