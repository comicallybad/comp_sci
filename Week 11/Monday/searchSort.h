class SearchSort
{
private:
public:
    int linearSearch(const int arr[], int size, int value);
    int binarySearch(const int array[], int size, int value);
    void bubbleSort(int array[], int size);
    void selectionSort(int array[], int size, int &swaps);
    void swap(int &a, int &b);
};