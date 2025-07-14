#include <iostream>
#include "Weather.h"
#include "storm.h"

void displayWeatherInfo(const Weather& weather) {
    weather.displayWeather();
}

void displayStormInfo(const Storm& storm) {
    storm.displayStorm();
}


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
}

void createWeatherInstance(Weather& weather)
{
    std::string city;
    double temperature;
    std::cout << "Enter city name: ";
    std::cin >> city;
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> temperature;
    weather = Weather(city, temperature);

    displayWeatherInfo(weather);
}

void createStormInstance(Storm& storm){
    std::string stormName, direction;
    double speed;
    std::cout << "Enter a name for the storm:";
    std::cin >> stormName;
    std::cout << "Enter storm speed in km/h: ";
    std::cin >> speed;
    std::cout << "Enter storm direction: ";
    std::cin >> direction;
    storm = Storm(stormName, speed, direction);

    displayStormInfo(storm);
}


int main() {
    printWelcomeMessage();
    Weather weather;
    Storm storm;
    int choice = 0;
    printMenu();
    while (true) {
        std::cout << " > ";
        if (scanf("%d", &choice) == 1 && choice >= 1 && choice <= 5) {
            if (choice == 1)
            {
                createWeatherInstance(weather);
            }
            else if (choice == 2)
            {
                createStormInstance(storm);
            }
            else if (choice == 3)
            {
                displayWeatherInfo(weather);
            }
            else if (choice == 4)
            {
                displayStormInfo(storm);
            }
            else if (choice == 5)
            {
                std::cout << "Exiting the program. Goodbye!" << std::endl;
                break;
            }
        } else {
            std::cout << "Invalid input. Please enter a number between 1 and 5.\n";
            // Clear the input buffer
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {}
        }
    }
    return 0;
}