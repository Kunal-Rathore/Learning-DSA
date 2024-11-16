// Instertion sort

// In this we put the element at correct index eg - 8,4,3,6 then at 1st step it will 4,8,3,6

#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int j = i;                           // j=i cause at every iteration we goes from i th index
                                             // traversing each element of array from index 1 and checking whether it is less than "j-1" index  and swaping it
                                             // here we use j-- so it checks after swaping did after swaping the smaller element is still smaller than previous element or not
        while (j > 0 && arr[j] < arr[j - 1]) // here we use && arr[j]< arr[j-1]  which compare the j th element and the j th previous element
        {
            swap(arr[j], arr[j - 1]);
            j--; // main hero of the story
                 // eg arr = 4,3,2,1   here at 1st it fails cause j=0  then at second it swaps 4 and 3 then go for index 2 where it swaps 2 and 4 then check did 2 comes at index 1 is smaller than of element of index 0 if yes then it reswap
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

    insertion_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}