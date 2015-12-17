#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include "car.cc"
using namespace std;
//
//
//
//

class world{
private:
    double HEIGHT;
    double WIDTH;
    double DEPTH;
    vector<vector<vector<double> > > world3D;
    // need a 2d or 3d grid of land, water, (and if 3d, air)
       //worldneeds a list of robots...
public:
      world(double HEIGHT,double WIDTH,double DEPTH):HEIGHT(HEIGHT),WIDTH(WIDTH),DEPTH(DEPTH)
      {
       world3D.resize(HEIGHT);
      for (int i = 0; i < HEIGHT; i++)
        {
            world3D[i].resize(WIDTH);
            for (int j = 0; j < WIDTH; j++)
                {
                    world3D[i][j].resize(DEPTH);
            }
        }
       for (int i = 0; i < HEIGHT; i++)
        {
            for (int j = 0; j < WIDTH; j++)
                {
                   for (int k = 0; k < DEPTH; k++){
                    world3D[i][j][k]=0;
                   }
            }
        }
      }
    // creat a 3D module with value 0

            void read_in_txt()
            {
                fstream myfile("data.txt", ios_base::in);
                double a;
                for(int i=0;i<HEIGHT;i++)
                    {
                        for(int j=0;j<WIDTH;j++)
                        {
                            for(int k=0;k<DEPTH;k++)
                            {
                            if(myfile >> a)
                                {
                                world3D[i][j][k]=a;
                                }
                            }
                        }
                    }
            }

    //get the data from txt file


      void addcar(int x,int y)
      {
      car a(x,y);
      }



      int getdwidth(){
      return this->WIDTH;
      }
      int getdepth(){
      return this->DEPTH;
      }
      int getheight(){
      return this->HEIGHT;
      }
      int getworld(double HEIGHT,double WIDTH,double DEPTH)
      {
          return world3D[HEIGHT][WIDTH][DEPTH];
      }
};

/*
int main(){
worldc(3,3,4);
cout<<c.getheight()<<endl;
cout<<c.getenvironment(1,2,2);
}
*/
