#include <iostream>
using namespace std;

class DistanceCalculator {
protected:
    int meters;
    int timeinSeconds;

public:
    DistanceCalculator() {
        meters = 0;
        timeinSeconds = 0;
    }

    virtual int calculateDistance() {
        return 0;   //Default implementation, overidden by derived class 
    }
};

class SpeedCalculator : public DistanceCalculator {
public:
    SpeedCalculator(int meters, int timeinSeconds) {
        this->meters = meters;
        this->timeinSeconds = timeinSeconds;
    }

    int calculateDistance() override {
        if(timeinSeconds != 0) {
            return meters/timeinSeconds;
        } else {
            return 0;
        }
    }
};

int main() {
    DistanceCalculator* dc = new SpeedCalculator(1000, 60); //distance = speed
    cout << "Calculated Speed: " << dc->calculateDistance() << " m/s" << endl;

    delete dc;  //remember to free the memory

    return 0;
}

/*
Virtual Function in cpp: 
> Virtual function is a member function which is declared within base class and is re-defined (Overriden) by derived class.


Tasks:

1. Shape Hierarchy: Create a hierarchy of geometric shapes (e.g., Circle, Square, Triangle) with a base class 'Shape'. Define a virtual function 'calculateArea()' in the base class and override it in each derived class to calculate the area of each shape.

2. Employee Management: Implement an Employee Management system with a base class 'Employee' and derived classes for different types of employees (e.g., Manager, Engineer). Use virtual functions to calculate salaries, which can vary by employee type.

3. Bank Account: Create a banking application with a base class 'BankAccount' and derived classes for different account types (e.g., Savings, Checking). Implement virtual functions to perform common banking operations like deposit and withdrawal.

4. Animal Zoo: Model a zoo with various animals. Create a base class 'Animal' with virtual functions like 'makeSound()' and 'eat()'. Implement these functions in derived classes (e.g., Lion, Elephant) to simulate animal behavior.

5. Vehicle Simulation: Build a vehicle simulation system with a base class 'Vehicle' and derived classes (e.g., Car, Bicycle, Truck). Use virtual functions to calculate fuel consumption, speed, and other vehicle-specific properties.

6. Video Game Characters: Design a simple video game character system. Create a base class 'Character' and derived classes for different character types (e.g., Warrior, Mage). Implement virtual functions for character actions like attack and defend.

7. Geometry Calculator: Develop a geometry calculator that can calculate various geometric properties (e.g., area, perimeter) for different shapes (e.g., Circle, Rectangle, Triangle). Use virtual functions to perform calculations based on shape type.

8. University Course Registration: Create a system to manage university course registrations. Define a base class 'Course' and derived classes for specific course types (e.g., Math, History). Use virtual functions to handle student enrollments and grading.

9. Restaurant Menu: Build a program to manage a restaurant menu. Define a base class 'MenuItem' and derived classes for different menu items (e.g., Appetizer, Main Course). Implement virtual functions for item preparation and pricing.

*/