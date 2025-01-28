#include <string>

using namespace std;

class Saludo {
private:
    time_t t;
    struct tm timeInfo;
    char date[100];

public:
    void printHola();
};