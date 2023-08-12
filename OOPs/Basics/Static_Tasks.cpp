#include<iostream>
using namespace std;

/*
Problem 2: Singleton Design Pattern
Implement a singleton class 'Logger' using a static member function that returns the same instance of the class every time it is called. The class should have a static variable to hold the instance and a member function to log messages.
*/
/*
class Logger {
    private:
        static Logger *instance;    // static variable to hold the instance
        Logger() {} // private constructor
    public:
        static Logger *getInstance() {
            if (instance == NULL) {
                instance = new Logger();
            }
            return instance;
        }
        void log(string message) {
            cout << message << endl;
        }
};

Logger *Logger::instance = NULL;

int main() {
    Logger *logger = Logger::getInstance(); //getInstance method will call the constructor only once and return the same instance every time it is called.
    logger->log("Hello World"); 
    logger->log("23");
    logger->log("567");

    //without using getInstance method
    Logger *logger2;
    logger2->log("Hello World");
    // Logger a = new Logger();    // this will give error as the constructor is private

    return 0;
}
*/
/*
Problem 5: Password Generator
Create a class 'PasswordGenerator' with a static function 'generatePassword' that generates a random password based on certain criteria (e.g., length, inclusion of numbers and special characters). The class should use a static variable to keep track of the number of passwords generated.
*/


class PasswordGenerator {
    private:
        static int count;
    public:
        static string generatePassword(int length) {
            string password = "";
            for(int i=0; i < length; i++) {
                password += (char)(rand() % 26 + 97);
            }
            count++;
            return password;
        }
        static int getCount() {
            return count;
        }
};

int PasswordGenerator::count = 0;

// instead of using PasswordGenerator::generatePassword we can take use of typedef.
typedef PasswordGenerator PG;

int main() {
    cout << PG::generatePassword(5) << endl;
    cout << PG::generatePassword(15) << endl;
    cout << PG::generatePassword(19) << endl;
    cout << PG::getCount() << endl;
    return 0;
}