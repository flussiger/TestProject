#include <iostream>
#include "Weather.h"
#include "storm.h"


void printWelcomeMessage() {
    std::cout << "Welcome to the Weather and Storm Tracker!" << std::endl;
    std::cout << "This program allows you to track weather conditions and storm details." << std::endl;
    std::cout << "You can create instances of Weather and Storm, and display their information." << std::endl;
    std::cout << "Let's get started!" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
}

void printMenu() {
    std::cout << "Menu:" << std::endl;
    std::cout << "1. Create Weather instance" << std::endl;
    std::cout << "2. Create Storm instance" << std::endl;
    std::cout << "3. Display Weather information" << std::endl;
    std::cout << "4. Display Storm information" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << " > ";
}

int main() {
    printWelcomeMessage();
    int choice = 0;
    printMenu();
    std::cin >> choice;

    std::cout << "DEBUG: You selected option: " << choice << std::endl;

    return 0;
}