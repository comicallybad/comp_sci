#include "searchSort.h"
#include <iostream>

using namespace std;

//*****************************************************************
// The linearSearch function performs a linear search on an       *
// integer array. The array arr, which has a maximum of size      *
// elements, is searched for the number stored in value. If the   *
// number is found, its array subscript is returned. Otherwise,   *
// -1 is returned indicating the value was not in the array.      *
//*****************************************************************
int SearchSort::linearSearch(const int arr[], int size, int value)
{
    int index = 0;      // Used as a subscript to search array
    int position = -1;  // To record position of search value
    bool found = false; // Flag to indicate if the value was found

    while (index < size && !found)
    {
        if (arr[index] == value) // If the value is found
        {
            found = true;     // Set the flag
            position = index; // Record the value's subscript
        }
        index++; // Go to the next element
    }
    return position; // Return the position, or -1
}

//***************************************************************
// The binarySearch function performs a binary search on an     *
// integer array. array, which has a maximum of size elements,  *
// is searched for the number stored in value. If the number is *
// found, its array subscript is returned. Otherwise, -1 is     *
// returned indicating the value was not in the array.          *
//***************************************************************

int SearchSort::binarySearch(const int array[], int size, int value)
{
    int first = 0,       // First array element
        last = size - 1, // Last array element
        middle,          // Mid point of search
        position = -1;   // Position of search value
    bool found = false;  // Flag

    while (!found && first <= last)
    {
        middle = (first + last) / 2; // Calculate mid point
        if (array[middle] == value)  // If value is found at mid
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value) // If value is in lower half
            last = middle - 1;
        else
            first = middle + 1; // If value is in upper half
    }
    return position;
}

//*****************************************************************
// The bubbleSort function sorts an int array in ascending order. *
//*****************************************************************
void SearchSort::bubbleSort(int array[], int size)
{
    int maxElement;
    int index;

    for (maxElement = size - 1; maxElement > 0; maxElement--)
    {
        for (index = 0; index < maxElement; index++)
        {
            if (array[index] > array[index + 1])
            {
                swap(array[index], array[index + 1]);
            }
        }
    }
}

//********************************************************************
// The selectionSort function sorts an int array in ascending order. *
//********************************************************************
void SearchSort::selectionSort(int array[], int size, int &swaps)
{
    swaps = 0;
    int minIndex, minValue;

    for (int start = 0; start < (size - 1); start++)
    {
        minIndex = start;
        minValue = array[start];
        for (int index = start + 1; index < size; index++)
        {
            if (array[index] < minValue)
            {
                swaps++;
                minValue = array[index];
                minIndex = index;
            }
        }
        swap(array[minIndex], array[start]);
    }
}

//***************************************************
// The swap function swaps a and b in memory.       *
//***************************************************
void SearchSort::swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
