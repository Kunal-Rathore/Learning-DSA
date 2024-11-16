#include <bits/stdc++.h>
using namespace std;

// Sorting

// selection sort - select minimum and replace with i index element
void selection_sort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }
}

// bubble sort -   push the max element at last index

void bubble_sort(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// insertion sort -  in this we insert the right element at right index linearly

void insertion_sort(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}
int main()
{
    int n;
    cout << "Enter size of array- ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // cout << "Calling selection sort-\n ";
    // selection_sort(n, arr);

    // cout << "Array is- ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // cout << "Calling bubble sort-\n ";
    // bubble_sort(arr, n);

    // cout << "Array is- ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // cout << "Calling insertion sort-\n ";
    // insertion_sort(arr, n);

    // cout << "Array is- ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}