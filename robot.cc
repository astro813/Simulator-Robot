
#include <iostream>
#include <cmath>
using namespace std;
#include <random>
#include <vector>

class Robot{
private:
     double x;
     double y;
     double z;
     vector<double*> realPos;
     vector<double> realVelocity;
     vector<double> realtheta;


public:
    double velocity;
    double theta;
    Robot(double x=0,double y=0,double z=0, double velocity=0, double theta=0):x(x),y(y),z(z),velocity(velocity),theta(theta){

    }

    void setlocation(double x, double y, double z=0){this->x=x;this->y=y;this->z=z;}

    virtual double get_x(){
     return this->x;
    }

    virtual double get_y(){
     return this->y;
    }

    virtual double get_z(){
     return this->z;
    }

    virtual void set_x(double input_x){
     this->x=input_x;
    }

    virtual void set_y(double input_y){
     this->y=input_y;
    }

    virtual void set_z(double input_z){
     this->z=input_z;
    }

    virtual void set_velocity_theta(double velocity,double theta)
    {
        this->velocity=velocity;
        this->theta=theta;
    }

    void updatetate()
    {
        this->x=this->x+ this->velocity*cos(theta);
        this->y=this->y+ this->velocity*sin(theta);
        double location[3];
        location[0]=this->x;
        location[1]=this->y;
        location[2]=this->z;
        realPos.push_back(location);
        realVelocity.push_back(this->velocity);
        realtheta.push_back(this->theta);

    }

     friend ostream& operator <<(ostream& s, Robot c){
     return s << c.x<<" " <<c.y<< " "<< c.z<<" " <<c.velocity<<" " <<c.theta<<" " ;
     }
};

