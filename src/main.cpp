#include <iostream>
#include <vector>
#include "Weather.h"
#include "storm.h"
#include "Event.h"

void displayWeatherInfo(const Weather& weather) {
    weather.displayWeather();
    std::cout << "\n\n\n";
}

void displayStormInfo(const Storm& storm) {
    storm.displayStorm();
    std::cout << "\n\n\n";
}

void displayPolyMorph()
{

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
    std::cout << "6. Display Polymorphically" << std::endl;
    std::cout << "5. Exit" << std::endl;
}

void createWeatherInstance(Weather& weather)
{
    std::cout << "---- Creating Weather Instance ------:" << std::endl;
    std::string city;
    double temperature;
    std::cout << "Enter city name: ";
    std::cin >> city;
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> temperature;
    weather = Weather(city, temperature);
    std::cout << "\n\n";
}

void createStormInstance(Storm& storm) {
    std::cout << "---- Creating Storm Instance ------:" << std::endl;
    std::string stormName, direction;
    double speed;
    std::cout << "Enter a name for the storm:";
    std::cin >> stormName;
    std::cout << "Enter storm speed in km/h: ";
    std::cin >> speed;
    std::cout << "Enter storm direction: ";
    std::cin >> direction;
    storm = Storm(stormName, speed, direction);
    std::cout << "\n\n";
}


int main() {
    printWelcomeMessage();
    Weather weather;
    std::vector<Storm> storms;
    std::vector<Weather> weathers;
    std::vector<Event*> events;
    Weather w("Vienna", 23.5);
    Storm s("Hurricane", 120.0, "North-East");
    events.push_back(&w);
    events.push_back(&s);
    int choice = 0;
    while (true) {
        printMenu();
        std::cout << " > ";
        if (scanf("%d", &choice) == 1 && choice >= 1 && choice <= 6) {
            if (choice == 1) {
                Weather newWeather;
                createWeatherInstance(newWeather);
                weathers.push_back(newWeather);
            }
            else if (choice == 2) {
                Storm newStorm;
                createStormInstance(newStorm);
                storms.push_back(newStorm);
            }
            else if (choice == 3) {
                if (weathers.empty())
                {
                    std::cout << "No weather instances created yet.\n";
                } else {
                    for (const auto& w : weathers) {
                        displayWeatherInfo(w);
                    }
                }
            }
            else if (choice == 4) {
                if (storms.empty()) {
                    std::cout << "No storms created yet.\n";
                } else {
                    for (const auto& s : storms) {
                        displayStormInfo(s);
                    }
                }
            }

            else if (choice == 6)
            {
                for (const auto* e : events) 
                {
                    e->display(); // Calls the correct display() for Weather or Storm
                }    
            }

            else if (choice == 5) {
                std::cout << "Exiting the program. Goodbye!" << std::endl;
                break;
            }
        } else {
            std::cout << "Invalid input. Please enter a number between 1 and 5.\n";
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {}
        }
    }
    return 0;
}