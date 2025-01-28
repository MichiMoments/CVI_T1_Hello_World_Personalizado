#include <iostream>
#include <string>
#include <ctime>

class Saludo {
public:
    void printHola() {
        std::time_t t = std::time(nullptr);
        char date[100];
        if (std::strftime(date, sizeof(date), "%d/%m/%Y", std::localtime(&t))) {
            std::cout << "Hola Mundo. Saludo de David Perez hoy " << date << std::endl;
        }
    }
};