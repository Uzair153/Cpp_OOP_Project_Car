#ifndef BRAKES_H
#define BRAKES_H
// The Brakes class represents the car's brakes.
class Brakes {

private:
  string material;
public:
  // Constructor
  Brakes(string material) : material(material) {}

  // Getter
  string getMaterial();

};

#endif
