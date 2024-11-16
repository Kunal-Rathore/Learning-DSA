// Bubble sort
//  in bubble sort we push the max element of the array  by traversing or comparing 2 pairs of elements from 0th index till n-2 index
// sort array using bubble sort

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n- ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Bubble sort
    for (int i = n - 1; i >= 0; i--)
    {

        for (int j = 0; j <= i - 1; j++) // i-1  because if the elements at index <i are not maximum then obviously index i will maximum therefore we use i-1

        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}