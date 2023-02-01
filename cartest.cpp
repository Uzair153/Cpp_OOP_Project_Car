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
	cout<<"\n\n\t\t  OOP TERM PROJECT";
	cout<<"\n\n\n\t\t  Project Name : Car Managment System";
	cout<<"\n\n\t\t\tMADE BY : Muhammad Abdullah, Uzair Ahmed, Ali Bashir, Rija Shahzaad";
	cout<<"\n\n\t\t\tSubmitted To : Ma'am Ozma Omer";
	cout<<"\n\n\t\t\tInstitite : University Of Education";
	
	cout<<"\n\n\n\n\t\t\t\t\t\t\t\tPress Enter To Continue";
	cin.get();
	
//// Create a car with the specified parts. [Use of constructor]
//Engine engine(250, "gasoline");
//Transmission transmission(6);
//Brakes brakes("ceramic");
//Tires tires(225, 45, 18, "performance");
//Body body("red", "coupe");
//Car car("Ford", "Mustang", 2020, engine, transmission, brakes, tires, body);
//
//// Print out the car's details.
//cout << "Make: " << car.getMake() << endl;
//cout << "Model: " << car.getModel() << endl;
//cout << "Year: " << car.getYear() << endl;
//cout << "Engine: " << car.getEngine().getHorsepower() << " horsepower " << car.getEngine().getFuelType() << " engine" << endl;
//cout << "Transmission: " << car.getTransmission().getNumberOfGears() << "-speed transmission" << endl;
//cout << "Brakes: " << car.getBrakes().getMaterial() << " brakes" << endl;
//cout << "Tires: " << car.getTires().getWidth() << "/" << car.getTires().getAspectRatio() << "-" << car.getTires().getDiameter() << " " << car.getTires().getTreadType() << " tires" << endl;
//cout << "Body: " << car.getBody().getColor() << " " << car.getBody().getShape() << " body" << endl;
//                                       [Take Input from user]
// Get user input for make, model, and year.
string make, model;
int year;
int make_option;

cout << "Select the Car make: "<< endl;
cout << "1: Mercedes" << endl;
cout << "2: Honda" << endl;
cout << "3: Suzuki" << endl;
cout << "4: Toyota" << endl;
cout << "5: KIA" << endl;
cout << "6: Jaguar" << endl;
cout << "7: Jeep" << endl;
cout << "8: Lexus" << endl;
cin >> make_option;

switch (make_option) {
case 1:
make = "Mercedes";
break;
case 2:
make = "Honda";
break;
case 3:
make = "Suzuki";
break;
case 4:
make = "Toyota";
break;
case 5:
make = "KIA";
break;
case 6:
make = "Jaguar";
break;
case 7:
make = "Jeep";
break;
case 8:
make = "Lexus";
break;
default:
cout << "Invalid option." << endl;
break;
return 0;
}
cout << "Enter model: ";
cin >> model;
cout << "Enter year: ";
cin >> year;

// Get user input for Engine.
int horsepower;
string fuel_type;
cout << "Enter horsepower: ";
cin >> horsepower;
cout << "Select fuel type: "<< endl;
cout << "1. Gasoline" << endl;
cout << "2. Diesel Fuel" << endl;
cout << "3. Bio-diesel" << endl;
cout << "4. Ethanol" << endl;
int fuel_type_option;
cin >> fuel_type_option;

// string fuel_type;
switch(fuel_type_option) {
case 1:
fuel_type = "Gasoline";
break;
case 2:
fuel_type = "Diesel Fuel";
break;
case 3:
fuel_type = "Bio-diesel";
break;
case 4:
fuel_type = "Ethanol";
break;
default:
cout << "Invalid option" << endl;
return 0;
}
Engine engine(horsepower, fuel_type);

// Get user input for Transmission.
int number_of_gears;
cout << "Enter number of gears: ";
cin >> number_of_gears;
Transmission transmission(number_of_gears);

// Get user input for Brakes.
string material;
int material_type;
cout << "Enter the brakes material: "<< endl;
cout << "1: Organic "<< endl;
cout << "2: Ceramic" << endl;
cout << "3: semi-metallic " << endl;
cin >> material_type;
switch (material_type) {
case 1:
material = "Organic";
break;
case 2:
material = "Ceramic";
break;
case 3:
material = "semi-metallic";
break;
default:
cout << "Invalid input." << endl;
}

Brakes brakes(material);


// Get user input for Tires.
int width, aspect_ratio, diameter;
string tread_type;
int tread_type_option;
cout << "Enter tire width (mm): ";
cin >> width;
cout << "Enter aspect ratio (%): ";
cin >> aspect_ratio;
cout << "Enter diameter (in): ";
cin >> diameter;
cout << "Enter tread type: "<< endl;
cout << "1: Symmetric Tread Pattern" << endl;
cout << "2: Asymmetric Tread Pattern" << endl;
cout << "3: Directional Tread Pattern" << endl;
cin >> tread_type_option;

switch (tread_type_option) {
  case 1:
    tread_type = "Symmetric Tread Pattern";
    break;
  case 2:
    tread_type = "Asymmetric Tread Pattern";
    break;
  case 3:
    tread_type = "Directional Tread Pattern";
    break;
  default:
    cout << "Invalid tread type. Please enter a valid option." << endl;
}

Tires tires(width, aspect_ratio, diameter, tread_type);

// Get user input for Body.
string color, shape;
cout << "Enter color: ";
cin >> color;
cout << "Enter shape: ";
cin >> shape;
Body body(color, shape);

// Create a car with the specified parts.
Car car(make, model, year, engine, transmission, brakes, tires, body);

// Print out the car's details.
int input;
cout << "************************************************************************************************"<< endl;
cout << "************************************************************************************************"<< endl;
cout << "Enter 1 to display car details or 2 to cancel: " <<  endl;
cin >> input;
switch (input) {
case 1:
cout << "************************************************************************************************"<< endl;
cout << "##################################<Entered Car Details in System>##################################"<< endl;
cout << "Make: " << car.getMake() << endl;
cout << "Model: " << car.getModel() << endl;
cout << "Year: " << car.getYear() << endl;
cout << "Horsepower: " << car.getEngine().getHorsepower() << endl;
cout << "Fuel type: " << car.getEngine().getFuelType() << endl;
cout << "Number of gears: " << car.getTransmission().getNumberOfGears() << endl;
cout << "Material: " << car.getBrakes().getMaterial() << endl;
cout << "Width: " << car.getTires().getWidth() << endl;
cout << "Aspect ratio: " << car.getTires().getAspectRatio() << endl;
cout << "Diameter: " << car.getTires().getDiameter() << endl;
cout << "Tread type: " << car.getTires().getTreadType() << endl;
cout << "Color: " << car.getBody().getColor() << endl;
cout << "Shape: " << car.getBody().getShape() << endl;
break;
case 2:
cout << "Action canceled. " << endl;
break;
default:
cout << "Invalid input. " << endl;
}
cout<<"*************************************Program Run Successfully***********************************************************";
return 0;

}




