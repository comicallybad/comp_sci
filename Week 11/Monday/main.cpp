#include "searchSort.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    SearchSort ss;

    //linear search
    const int SIZE = 10;
    int array[SIZE] = {1, 5, 111, 3, 5, 87, 75, 98, 100, 82};
    int results;

    results = ss.linearSearch(array, SIZE, 100);

    if (results == -1)
        cout << "You did not earn 100 points on any test\n";
    else
    {
        cout << "You earned 100 points on test ";
        cout << (results + 1) << endl;
    }

    results = ss.binarySearch(array, SIZE, 111);

    if (results == -1)
        cout << "That number does not exist in the array.\n";
    else
        cout << "Found at element " << results << " in the array." << endl;

    //bubble sort
    int bubbleSortArray[SIZE] = {1, 5, 111, 3, 5, 87, 75, 98, 100, 82};
    cout << "The unsorted values:\n";
    for (auto element : bubbleSortArray)
        cout << element << " ";
    cout << endl;

    ss.bubbleSort(bubbleSortArray, SIZE);

    cout << "The sorted values:\n";
    for (auto element : bubbleSortArray)
        cout << element << " ";
    cout << endl;

    //selection sort
    int selectionSortArray[SIZE] = {1, 5, 111, 3, 5, 87, 75, 98, 100, 82};
    cout << "The unsorted values:\n";
    for (auto element : selectionSortArray)
        cout << element << " ";
    cout << endl;

    int s;
    ss.selectionSort(selectionSortArray, SIZE, s);

    cout << "The sorted values:\n";
    for (auto element : selectionSortArray)
        cout << element << " ";
    cout << endl;
    cout << "There were: " << s << " swaps" << endl;

    //Extra credit
    const int SIZEEC = 100;
    int ECswaps;
    int ECvalues[SIZEEC];
    srand(time(0));

    //create random generated array
    for (int i = 0; i < 100; i++)
        ECvalues[i] = rand() % 251;

    cout << "The unsorted values:\n";
    for (int i = 0; i < 100; i++)
        cout << ECvalues[i] << ", ";

    ss.selectionSort(ECvalues, SIZEEC, ECswaps);

    //log out sorted array
    cout << "\nThe sorted values:\n";
    for (int i = 0; i < 100; i++)
        cout << ECvalues[i] << ", ";

    cout << "\nThere were: " << ECswaps << " swaps" << endl;

    return 0;
}