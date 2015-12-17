#include <iostream>
#include <vector>
#include "robot.cc"
#include "sensors.cc"
#include "car.cc"
#include "world.cc"
using namespace std;

int main(){
world a(50,10);
car f(30,3,0);
car b(20,6,0);
world.addcar(30,3,0);
world.addcar(20,6,0);
}
