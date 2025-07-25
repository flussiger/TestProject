#include "Weather.h"
#include <iostream>

Weather::Weather() : city_(""), temp_(0.0) {} //default constructor

Weather::Weather(const std::string& city, double temp)
    : city_(city), temp_(temp) {}

void Weather::print() const {
    std::cout << "Stadt: " << city_ << ", Temperatur: " << temp_ << "°C\n";
}
void Weather::displayWeather() const {
    std::cout << "Aktuelles Wetter in " << city_ << ": " << temp_ << "°C\n";
}

void Weather::display() const {
    std::cout << "Weather in " << city_ << ": " << temp_ << "°C\n";
}