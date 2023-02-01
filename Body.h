#ifndef BODY_H
#define BODY_H

// The Body class represents the car's body.
class Body {

private:
  string color;
  string shape;

public:
  // Constructor
  Body(string color, string shape) : color(color), shape(shape) {}

  // Getters
  string getColor();
  string getShape();

};

#endif
