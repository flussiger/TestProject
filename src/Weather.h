#include <string>

class Weather {
public:
    Weather(); // Default constructor
    Weather(const std::string& city, double temp);
    void print() const;
    void displayWeather() const;

private:
    std::string city_;
    double temp_;
};