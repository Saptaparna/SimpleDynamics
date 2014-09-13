#include "SolarSystem.h"

int main(){

  Planet planet;
  planet.radius = 5;
  double rad =  planet.radius;
  cout << "Volume of the planet = " << planet.volume(rad) << endl; 
  SolarSystem *ss = &planet;
  double distance = ss->setDistance(25);
  cout << "Volume of the solar system = " << planet.volume(distance) << endl;
  //understanding templates:
  Interaction <int> myobject(36, 44);  
  cout << myobject.getMaxDistance()<< endl;
  //understanding friendship:
  Planet pla (2);
  planet = duplicate (pla);
  double rad2 = planet.radius;
  cout << "Volume of the planet = " << planet.volume(rad2) << endl;  
  return 0;


}
