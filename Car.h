#ifndef CAR_H
#define CAR_H

// The Car class represents a car with all of its parts.
class Car {
    
private:
string make;
string model;
int year;
Engine engine;
Transmission transmission;
Brakes brakes;
Tires tires;
Body body;
public:
  // Constructor
  Car(string make, string model, int year,
      Engine engine, Transmission transmission,
      Brakes brakes, Tires tires, Body body)
    : make(make), model(model), year(year),
      engine(engine), transmission(transmission),
      brakes(brakes), tires(tires), body(body) {}

  // Getters
string getMake();
string getModel();
int getYear();
Engine getEngine();
Transmission getTransmission(); 
Brakes getBrakes();
Tires getTires();
Body getBody();
};

#endif
