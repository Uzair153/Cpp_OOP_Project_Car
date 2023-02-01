#include <iostream>
using namespace std;


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
  int getHorsepower() const { 
    return horsepower;
     }
  string getFuelType() const { 
    return fuel_type; 
    }
};

// The Transmission class represents the car's transmission.
class Transmission {
private:
  int number_of_gears;
public:
  // Constructor
  Transmission(int number_of_gears) : number_of_gears(number_of_gears) {}

  // Getter
  int getNumberOfGears() const { 
    return number_of_gears; 
    }

};

// The Brakes class represents the car's brakes.
class Brakes {

private:
  string material;
public:
  // Constructor
  Brakes(string material) : material(material) {}

  // Getter
  string getMaterial() const { 
    return material; 
    }

};

// The Tires class represents the car's tires.
class Tires {

private:
  int width;
  int aspect_ratio;
  int diameter;
  string tread_type;

public:
  // Constructor
  Tires(int width, int aspect_ratio, int diameter, string tread_type)
    : width(width), aspect_ratio(aspect_ratio), diameter(diameter), tread_type(tread_type) {}

  // Getters
  int getWidth() const { 
    return width; 
    }
  int getAspectRatio() const { 
    return aspect_ratio; 
  }
  int getDiameter() const { 
    return diameter; 
  }
  string getTreadType() const { 
    return tread_type;
     }

};

// The Body class represents the car's body.
class Body {

private:
  string color;
  string shape;

public:
  // Constructor
  Body(string color, string shape) : color(color), shape(shape) {}

  // Getters
  string getColor() const { 
    return color;
     }
  string getShape() const { 
    return shape;
   }

};

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
  string getMake() const { 
    return make;
     }
  string getModel() const { 
    return model;
     }
int getYear() const { 
    return year;
 }
Engine getEngine() const { 
    return engine; 
    }
Transmission getTransmission() const { 
    return transmission;
 }
Brakes getBrakes() const { 
    return brakes;
     }
Tires getTires() const { 
    return tires;
 }
Body getBody() const { 
    return body;
 }
};

int main() {
// Create a car with the specified parts.
Engine engine(250, "gasoline");
Transmission transmission(6);
Brakes brakes("ceramic");
Tires tires(225, 45, 18, "performance");
Body body("red", "coupe");
Car car("Ford", "Mustang", 2020, engine, transmission, brakes, tires, body);

// Print out the car's details.
cout << "Make: " << car.getMake() << endl;
cout << "Model: " << car.getModel() << endl;
cout << "Year: " << car.getYear() << endl;
cout << "Engine: " << car.getEngine().getHorsepower() << " horsepower " << car.getEngine().getFuelType() << " engine" << endl;
cout << "Transmission: " << car.getTransmission().getNumberOfGears() << "-speed transmission" << endl;
cout << "Brakes: " << car.getBrakes().getMaterial() << " brakes" << endl;
cout << "Tires: " << car.getTires().getWidth() << "/" << car.getTires().getAspectRatio() << "-" << car.getTires().getDiameter() << " " << car.getTires().getTreadType() << " tires" << endl;
cout << "Body: " << car.getBody().getColor() << " " << car.getBody().getShape() << " body" << endl;

return 0;
}

