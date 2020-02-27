#include <cstdlib>
#include <ctime>

class RandomNumber
{
private:
    int random;
    int guess;

public:
    void start();
    void displayMessage();
    void check(int guess);
    void winScreen();
};