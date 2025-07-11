#include "Storm.h"
#include <iostream>

Storm::Storm(const std::string& name, double speed, const std::string& direction)
    : name_(name), speed_(speed), direction_(direction) {}

void Storm::print() const {
    std::cout << "Sturm: " << name_
              << ", Geschwindigkeit: " << speed_ << " km/h"
              << ", Richtung: " << direction_ << "\n";
}