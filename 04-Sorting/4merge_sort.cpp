
// 20 November

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &vec, int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    vector<int> temp;
    while (left <= mid && right <= high)
    {
        if (vec[left] <= vec[right])
        {
            temp.push_back(vec[left]);
            left++;
        }
        else
        {
            temp.push_back(vec[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(vec[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(vec[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {

        vec[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &vec, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    else
    {
        int mid = (low + high) / 2;
        mergeSort(vec, low, mid);
        mergeSort(vec, mid + 1, high);
        merge(vec, low, mid, high);
    }
}
int main()
{
    int n;
    cout << "Enter size of array- ";
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    mergeSort(vec, 0, n - 1);
    for (auto it : vec)
    {
        cout << it << " ";
    }

    return 0;
}