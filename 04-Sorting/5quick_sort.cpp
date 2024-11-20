#include <bits/stdc++.h>

using namespace std;

int devide(vector<int> &arr, int low, int high)
{
    int pivot = low;
    int i = low;
    int j = high;
    while (i < j) // this loop is for swaping all elements of array
    {
        while (i < high && arr[i] <= arr[pivot]) // this loop is traversing array until arr[i] !> arr[pivot]
        {
            i++;
        }
        while (j > low && arr[j] >= arr[pivot]) // this loop is traversing array until arr[i] !< arr[pivot]
        {
            j--;
        }
        if (i < j) // this condition is for swapping when above loops get failed it means arr[i]> arr[pivot]  and arr[j]< arr[pivot]  so we need to swap them to enter pivot in mid
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[pivot], arr[j]); // after successful swaping we swap the element at j th index and the pivot index element so pivot comes in middle and make partition
    return j;                 // returning the partition element for dividing and arranging left and right side array of the partition index
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high) // it do the divide and arrange only when there is more than one element in the array
    {
        int partitionindex = devide(arr, low, high); // returning the partition index and calling fuction for dividing and arranging

        quickSort(arr, low, partitionindex - 1);  // calling quickSort function for dividing and arranging left side array
        quickSort(arr, partitionindex + 1, high); // calling quickSort function for dividing and arranging right side array
    }
}

int main()
{
    cout << "Enter size of array- ";
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);
    for (auto it : arr)
    {
        cout << it << " ";
    }
}