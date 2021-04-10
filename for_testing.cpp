#include <iostream>
using namespace std;

// Descending
void selectionSort(double list[], int listSize)
{
    for (int i = 0; i < listSize - 1; i++)
    {
        // Find the minimum in the list[i ... listsize-1]
        double currentMax = list[i];
        int currentMaxIndex = i;

        // {1, 9, 4.5, 6.6, 5.7, -4.5};

        for (int j = i + 1; j < listSize; j++)
        {
            if (currentMax < list[j])
            {
                currentMax = list[j];
                currentMaxIndex = j;
            }
        }

        // Swap list[i] with list[currentMinIndex] if neccessary
        if (currentMaxIndex != i)
        {
            list[currentMaxIndex] = list[i];
            list[i] = currentMax;
        }
    }
}

void printArray(double list[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << list[i] << " ";
    }
}

int main()
{
    double list[] = {1, 9, 4.5, 6.6, 5.7, -4.5};
    cout << "Original list: ";
    printArray(list, 6);
    selectionSort(list, 6);
    cout << endl;
    cout << "Modified list: ";
    printArray(list, 6);
    return 0;
}