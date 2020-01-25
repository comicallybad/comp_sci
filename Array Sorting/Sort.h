#include <iostream>

class Sort
{
private:
    int arrayList[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

public:
    void sort()
    {
        int temp;
        for (int i = 0; i < sizeof(arrayList) / sizeof(arrayList[0]); i++)
        {
            for (int j = 0; j < (sizeof(arrayList) / sizeof(arrayList[0])) - 1 - i; j++)
            {
                int z = j + 1;
                if (arrayList[j] > arrayList[z])
                {
                    temp = arrayList[z];
                    arrayList[z] = arrayList[j];
                    arrayList[j] = temp;
                };
            };
        };

        for (int p = 0; p < sizeof(arrayList) / sizeof(arrayList[0]); p++)
        {
            std::cout << arrayList[p] << std::endl;
        };
    };
};