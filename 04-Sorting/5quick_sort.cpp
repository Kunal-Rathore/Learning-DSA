

// Quick Sort

#include <bits/stdc++.h>
using namespace std;

int pivot(vector<int> &v, int low, int high)
{
    int pivot = 0;
    int i = low;
    int j = high;

    while (i < j)
    {
        while (v[i] <= v[pivot])
        {
            i++;
        }
        while (v[j] >= v[pivot])
        {
            j--;
        }

        while (i < j)
        {
            swap(v[i], v[j]);
        }
    }
    swap(v[j], v[pivot]);
    return j;
}

void quick_sort(vector<int> &v, int low, int high)
{
    if (low == high)
    {
        return;
    }

    else
    {
        int partitionIndex = pivot(v, low, high);
        quick_sort(v, low, partitionIndex - 1);
        quick_sort(v, partitionIndex + 1, high);
    }
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    quick_sort(v, 0, n - 1);

    for (auto it : v)
    {
        cout << it << " ";
    }

    return 0;
}