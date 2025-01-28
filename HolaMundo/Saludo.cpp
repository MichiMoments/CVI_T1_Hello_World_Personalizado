#include <iostream>
#include <string>
#include <ctime>

class Saludo {
public:
    void printHola() {
        std::time_t t = std::time(nullptr);
        struct tm timeInfo;
        char date[100];
        if (localtime_s(&timeInfo, &t) == 0) {
            if (std::strftime(date, sizeof(date), "%d/%m/%Y", &timeInfo)) {
                std::cout << "Hola Mundo. Saludo de David Perez hoy " << date << std::endl;
            }
        }
    }
};