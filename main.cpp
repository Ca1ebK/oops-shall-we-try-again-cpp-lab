#include <iostream>

#include "src/validate_input.hpp"

int main() {
  validate_input(0, 1, "Please enter a value", "Your value is invalid");
  validate_input(1, 2, "Please enter a value", "Your value is invalid");
  validate_input(-1000, 123894, "Please enter a value", "Your value is invalid");
  validate_input(1, 100, "Please enter a value", "Your value is invalid");
  validate_input(0, 0, "Please enter a value", "Your value is invalid");
}
