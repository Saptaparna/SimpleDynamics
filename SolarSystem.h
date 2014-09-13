#include <iostream>
#include <math.h>

using namespace std;

class SolarSystem{
  public:
  double mercury, venus, earth, mars, jupiter, neptune;
  double asteroid;
  double moon; 
  double distanceFromSun;
  double setDistance(int s) 
    {return distanceFromSun=s;}
};

class Planet : public SolarSystem{
  public:
    double mass;
    double radius;
    Planet() {}
    Planet (double r) : radius(r) {}
    double volume(double r)
      {return (4.0/3.0)*M_PI*pow(r, 3);}
    friend Planet duplicate (const Planet&);
};


Planet duplicate (const Planet& param)
{
    Planet pla;    
    pla.radius = param.radius*2;
    return pla;
}

template <class T>
class Interaction{
     T planets[2];
  public:
     Interaction (T first, T second)
     {
       planets[0]=first; 
       planets[1]=second;
     }
     T getMaxDistance ();
};
 
template <class T>
T Interaction<T>::getMaxDistance ()
{
  T retval;
  retval = planets[0]>planets[1]? planets[0] : planets[1];
  return retval;
} 
