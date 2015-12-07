#include <iostream>
#include <cmath>
using namespace std;
#include <random>
#include "robot.cc"
#include <vector>


class sensors: public Robot{
private:
     Robot& c;
     vector<double*> believePos;
     vector<double> believeVelocity;
     vector<double> believetheta;
     double sensors_x=0;
     double sensors_y=0;
     double sensors_z=0;
     double sensors_velocity=0;
     double sensors_theta=0;

public:
     sensors(Robot& r):c(r){}
     double normaldistribution(){
     default_random_engine generator;
     normal_distribution<double> distribution(0.0,1.0);
     return distribution(generator);
     }

     void gps(){
     this->sensors_x= get_x()+normaldistribution();
     this->sensors_y= get_y()+normaldistribution();
     this->sensors_z= get_z()+normaldistribution();
     double believePosition[3];
     believePosition[0]=this->sensors_x;
     believePosition[1]=this->sensors_y;
     believePosition[2]=this->sensors_z;
     believePos.push_back(believePosition);
     }

     void compass(){
     this->sensors_theta= this->theta+normaldistribution();
     believetheta.push_back(this->sensors_theta);
     }

     void accelerometer(){
     this->sensors_velocity= this->velocity+normaldistribution();
     believeVelocity.push_back(this->sensors_velocity);
     }

     friend ostream& operator <<(ostream& s, sensors c){
     return s << c.get_x()<<" " <<c.get_y()<< " "<< c.get_z()<<" " <<c.velocity<<" " <<c.theta<<" " ;
     }
};
