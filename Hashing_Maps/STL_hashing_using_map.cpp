// Hashing is not possible for larger no. like 10^8 and so on so we can use STL (maps) for hashing cause it has key and value which requires less time and space

// Hashing using maps

// no. hashing using maps
//  #include <bits/stdc++.h>
//  using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter size of an array- ";
//     cin >> n;
//     int arr[n];
//     map<int, int> m;   // time complexity is O(N)
// declared map having 0 in key and value both
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         // hashing

//         m[arr[i]] += 1;
//     }

//     // storing

//     for (int i = 0; i < n; i++)
//     {
//         // it saves the no. of time the element present in the array arr in map at value block and the element in key block

//         // for above line the element of array "arr" is key and the no. of times it comes is value
//     }

//     // iterate in map
//     for (auto it : m)
//     {
//         cout << it.first << " -> " << it.second << endl;
//     }

//     // fetching

//     int quantity;
//     cout << "Enter quantity of element want to fetch- ";
//     cin >> quantity;

//     while (quantity > 0)
//     {
//         int no;
//         cout << "Enter no want to access- ";
//         cin >> no;
//         cout << "The no. cames " << m[no] << " times" << endl;

//         quantity--;
//     }

//     return 0;
// }

// Character hasing using maps

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     cout << "Enter the string- ";
//     cin >> s;
//     unordered_map<char, int> m; // in most most cases time complexity will only 1 through unordered map
//     for (int i = 0; i < s.size(); i++)
//     {
//         m[s[i]] += 1;
//     }
//     int quantity;
//     cout << "Enter quantity- ";
//     cin >> quantity;

//     while (quantity > 0)
//     {
//         char c;
//         cout << "Enter the character- ";
//         cin >> c;
//         cout << "The character " << c << " appears " << m[c] << " times in the string" << endl; // prints value using key
//         quantity--;
//     }

//     return 0;
// }

//                             HW

//   Find the minimum and maximum frequency element of the array

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter size of array- ";
//     cin >> n;
//     int arr[n];

//     cout << "Enter array-\n";

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     // hashing
//     map<int, int> m;
//     // storing

//     for (int i = 0; i < n; i++)
//     {
//         m[arr[i]] += 1; // gives m.second basically gives counter of the element
//     }
//     int max = INT_MIN;
//     int min = INT_MAX;
//     int maxelement;
//     int minelement;

//     // fetch
//     for (auto it : m)
//     {
//         if (it.second > max)
//         {
//             max = it.second;
//             maxelement = it.first;
//         }
//         if (it.second < min)
//         {
//             min = it.second;
//             minelement = it.first;
//         }
//     }
//     cout << "Maximum frequency element is- " << maxelement << " having frequency " << max << endl;
//     cout << "Minimum frequency element is- " << minelement << " having frequency " << min << endl;

//     return 0;
// }