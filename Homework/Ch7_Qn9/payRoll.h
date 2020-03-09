class PayRoll
{
private:
    const int empID[7] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hours[7];
    int payRate[7];
    int wages[7];

public:
    void display();
    void calculateWages();
    void displayWages();
};