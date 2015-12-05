#include <iostream>
#include <cmath>
using namespace std;
#include <random>
#include "robot.cc"
#include "environment.cc"

class car : public Robot{
private:
      int state;
public:
    car(int x=0,int y=0,int z=0,int velocity=0,int theta=0)
    {
    Robot(x,y,z,velocity,theta);
    this->velocity=rand()%40+40;
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
    environment land_ocean(50000,50000,10000,20000);
     need a method to load a grid of heights and water depth
     need to ba able to add robots
    // call land_ocean "world"
    // world.addCar(100,100);
    //world.addSubmarine(100,100); // if you add a submarine where there is nowater, problem.
    
    land_ocean.create_land_ocean();

    }
};
