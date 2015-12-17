<<<<<<< HEAD
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
    car(int x=0,int y=0,int z=0,double velocity=0,double theta=0,state=1):Robot(x,y,z,velocity,theta),state(1){
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
    if(get_x()>20)&&(get_y()>25)&&(get_Z<0)
    {
        this->state=0;
    }
    }

    friend car operrator ^(car a,car b){
    if(a.get_x()=b.get_x())&&(a.get_y()=b.get.y())
    {
        a.state=0;
        b.state=0;
    }
    else{
        a.state=1;
        b.state=1;
    }
    }
};

