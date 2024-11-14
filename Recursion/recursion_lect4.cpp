// Problems on functional recursion

// 1 Reverse an array   using two pointer

// #include <bits/stdc++.h>
// using namespace std;
// void swapf(int arr[], int a, int b)
// {
//     if (a >= b)
//     {
//         for (int i = 0; i < 5; i++)
//         {
//             cout << arr[i] << " ";
//         }

//         return;
//     }
//     swap(arr[a], arr[b]);
//     swapf(arr, a + 1, b - 1);
// }
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     swapf(arr, 0, 4);

//     return 0;
// }

// 1.2 -> reverse array using one pointer

// #include <bits/stdc++.h>
// using namespace std;
// void swapf(int arr[], int i, int size = 5)
// {
//     if (i >= size / 2)
//     {
//         for (int i = 0; i < 5; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         return;
//     }

//     swap(arr[i], arr[size - i - 1]);
//     swapf(arr, i + 1);
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     swapf(arr, 0);

//     return 0;
// }

// 2->  Check the no. is palindrome or not

// #include <bits/stdc++.h>
// using namespace std;

// bool palindrome(string st, int i, int size)
// {
//     if (i >= size / 2)
//     {
//         return true;
//     }
//     else if (st[i] != st[size - i - 1])
//     {
//         return false;
//     }
//     else
//     {
//         return palindrome(st, i + 1, size);
//     }
// }

// int main()
// {
//     string st = {"MADAM"};

//     cout << palindrome(st, 0, 5);

//     return 0;
// }