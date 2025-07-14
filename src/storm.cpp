#include "storm.h"
#include <iostream>

Storm::Storm() : name_(""), speed_(0.0), direction_("") {}

Storm::Storm(const std::string& name, double speed, const std::string& direction)
    : name_(name), speed_(speed), direction_(direction) {}

void Storm::print() const {
    std::cout << "Sturm: " << name_
              << ", Geschwindigkeit: " << speed_ << " km/h"
              << ", Richtung: " << direction_ << "\n";
}

void Storm::displayStorm() const {
    std::cout << "Aktueller Sturm: " << name_ << " Geschwindigkeit: " << 
        speed_ << "km/h. Richtung: " << direction_ << std::endl;
}