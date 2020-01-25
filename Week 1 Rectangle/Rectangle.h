#include <iostream>

class Rectangle
{
private:
    int length;
    int width;

public:
    void printLengthWidth()
    {
        length = 9;
        width = 8;
        std::cout << "The length is: " << length << std::endl;
        std::cout << "The width is: " << width << std::endl;
        std::cout << "The Area is: " << length*width << std::endl;
        std::cout << "The perimter is: " << (2*length) + (2*width) << std::endl;

        for (int z = 1; z < 51; z++){
            if(z%2 == 0){
                std::cout << "Z is even: " << z << std::endl;
            } else{
                std::cout << "Z is odd: " << z << std::endl;
            }
        }

        for(int b = 1; b<11; b++){
            for(int c = 1; c<11; c++){
                 std::cout << "B is: " << b << "C is: " << c << std::endl;
            }
        }
    };
};