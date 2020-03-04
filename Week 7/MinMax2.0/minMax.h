class MinMax
{
private:
    int numbers[50];

public:
    void generateStore();
    int doSum();
    void findMinMax(int &lowest, int &highest);
    int findMin();
    int findMax();
};