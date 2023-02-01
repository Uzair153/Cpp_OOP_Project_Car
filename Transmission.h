#ifndef TRANSMISSION_H
#define TRANSMISSION_H

// The Transmission class represents the car's transmission.
class Transmission {
private:
  int number_of_gears;
public:
  // Constructor
  Transmission(int number_of_gears) : number_of_gears(number_of_gears) {}

  // Getter
  int getNumberOfGears();
};
#endif
