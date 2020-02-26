#include <string>

using namespace std;

class Membership
{
private:
    const double ADULT_RATE = 120.0,
                 CHILD_RATE = 60.0,
                 SENIOR_RATE = 100.0;
    int choice, // Holds the user's menu choice
        months; // Number of months being paid

public:
    void init();
    void displayMenu();
    int getChoice();
    void showFees(string memberType, double rate, int months);
};