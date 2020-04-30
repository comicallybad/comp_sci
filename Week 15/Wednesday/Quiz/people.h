#ifndef PEOPLE_H
#define PEOPLE_H

class People
{
private:
    char name[51] = {};
    char address[51] = {};
    int age = 0;
    char phone[14] = {};
    double salary = 0;

public:
    void setName(char[]);
    char *getName();
    void setAge(int);
    int getAge();
    void setAddress(char[]);
    char *getAddress();
    void setPhone(char[]);
    char *getPhone();
    void setSalary(double);
    double getSalary();
    void writeToFile(People);
    void readFromFile(People);
};

#endif