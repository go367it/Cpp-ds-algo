#include <iostream>

using namespace std;

void selectionSort(int limit, int arr[])
{
    // first loop for going through the array
    for (int i = 0; i < limit; i++)
    {
        int index = i; // declaring index for storing index of the smallest element
        // second loop for going through the unsorted part of the array
        for (int j = i; j < limit; j++)
        {
            // checking if current element id less than index elemnt
            // if true then updating the index value to the current value
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        // swapping after finding the smallest element index
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    // for printing the array
    for (int i = 0; i < limit; i++)
    {
        cout << arr[i];
    }
}

int main()
{

    cout << "Enter Limit: ";
    int limit;
    cin >> limit;   // taking the array limit
    int arr[limit]; // declaring an array and assigning the limit to it
    cout << "\n Enter the array details: \n";
    for (int i = 0; i < limit; i++)
    {
        cin >> arr[i];
    }

    selectionSort(limit, arr); // calling function

    return 0;
}