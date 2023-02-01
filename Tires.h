#ifndef TIRES_H
#define TIRES_H

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
  int getWidth();
  int getAspectRatio();
  int getDiameter();
  string getTreadType();

};

#endif
