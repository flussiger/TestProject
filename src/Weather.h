#include <string>

class Weather {
public:
    Weather(const std::string& city, double temp);
    void print() const;

private:
    std::string city_;
    double temp_;
};