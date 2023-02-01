#ifndef ENGINE_H
#define ENGINE_H
#include<iostream>
// The Engine class represents the car's engine.
class Engine {
private:
  int horsepower;
  string fuel_type;

public:
  // Constructor
  Engine(int horsepower, string fuel_type)
    : horsepower(horsepower), fuel_type(fuel_type) {}

  // Getters
  int getHorsepower();
  string getFuelType(); 
};

#endif
