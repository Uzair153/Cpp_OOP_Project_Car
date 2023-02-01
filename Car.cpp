#include "Engine.h"
#include "Transmission.h"
#include "Brakes.h"
#include "Tires.h"
#include "Body.h"
#include "Car.h"
#include<iostream>
#include<string>
using namespace std;

string Car::getMake(){
return make;	
}
string Car::getModel(){
return model;	
}
int Car::getYear(){
return year;	
}
Engine Car::getEngine(){
return engine;	
}
Transmission Car::getTransmission(){
return transmission;	
}
Brakes Car::getBrakes(){
return brakes;	
}
Tires Car::getTires(){
return tires;	
}
Body car::getBody(){
return body;	
}
