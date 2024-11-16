
//     Sorting

// Selection sort

// Ismae minimum element ka index uthao or swap mardo or yeh 0 th index se swapping karega and n-1 time swap hoga

#include <bits/stdc++.h>
using namespace std;

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

    for (int i = 0; i <= n - 2; i++) // arr = {5,3,4,2}
    {
        int mini = i; // stores the index of minimum element of the entire array
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }
    cout << "Array is- ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
