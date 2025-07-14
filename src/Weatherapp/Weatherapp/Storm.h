#include <string>

class Storm {
public:
    Storm(const std::string& name, double speed, const std::string& direction);
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