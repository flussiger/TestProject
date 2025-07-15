#include "Event.h"

#include <string>

class Storm : public Event {
public:
    Storm(); // Default constructor
    Storm(const std::string& name, double speed, const std::string& direction);
    void display() const override;
    void print() const;
    void displayStorm() const;
    std::string getName() const { return name_; }
    double getSpeed() const { return speed_; }
    std::string getDirection() const { return direction_; }

private:
    std::string name_;
    double speed_;
    std::string direction_;
};