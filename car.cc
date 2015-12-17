#include <iostream>
#include <cmath>
using namespace std;
#include <random>
#include "robot.cc"
#include "world.cc"

//rand()%4+4,(3.1415926/2)+(3.1415926/2)
class car : public Robot{
private:
      int state;
public:
    car(int x=0,int y=0,int z=0,double velocity=0,double theta=0):Robot(x,y,z,velocity,theta),state(1)
    {
    //Robot(x,y,z,velocity,theta);
    }
      void update_car_location() // for all movement, use real position and velocity
    {
        int input_x=get_x()+this->velocity*sin(this->theta);
        int input_y=get_y()+this->velocity*cos(this->theta);
        set_x(input_x);
        set_y(input_y);
    }



    void ifborder()
    {
    environment land_ocean(500,500,100,200);
     need a method to load a grid of heights and water depth
     need to ba able to add robots
    // call land_ocean "world"
    // world.addCar(100,100);
    //world.addSubmarine(100,100); // if you add a submarine where there is nowater, problem.



    }
};
