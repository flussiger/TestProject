#include "Event.h"

#include <string>

class Weather : public Event {
public:
    Weather(); // Default constructor
    Weather(const std::string& city, double temp);
    void display() const override;
    
    void print() const;
    void displayWeather() const;

private:
    std::string city_;
    double temp_;
};