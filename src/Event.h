#pragma once
#include <string>

class Event {
    public:
        virtual ~Event() {}
        virtual void display() const = 0; // Pure virtual function for displaying event details2
};