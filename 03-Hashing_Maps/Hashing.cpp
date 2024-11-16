

// Hashing maps  -> Storing and fetching while needed

// 1 No. of times element present through hashing

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter array size- ";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int maximumElement;
//     cout
//         << "Enter the maximumElement array can have- ";
//     cin >> maximumElement;              // say 7
//     int hash[maximumElement + 1] = {0}; // say n =7 then our array starts form 0th index therefore +1 is needed

//     // now main:-   //storing no. of times elements of array arr coming in hash

//     for (int i = 0; i < n; i++)
//     {
//         hash[arr[i]] += 1; // it basically stores the no. of times each element present in the array "arr" in the hash at the index of the element no.  (yeh jo no. arr mae present hae usko usi no. kae hash kae index mae store and count karega, jissae ek baar mae pta chal jayega ki jo elements arr mae present hae voh kon kon se hae or kitni baar hae )
//     }
//     // let's say arr[] ={1,2,1,3,2}
//     // after this hash will be -> hash[8] = {0,2,2,1,0,0,0,0}

//     int quantity; // stores the quantity of elements wants to fetch
//     cout << "Enter quantity of elements- ";
//     cin >> quantity;
//     while (quantity > 0)
//     {
//         int no; // to get which elements wants to fetch
//         cin >> no;
//         cout << no << " is present " << hash[no] << " of times" << endl; // print no. of times element present in the arr
//         quantity--;
//     }

//     return 0;
// }

// 2 No. of times character present in string through hashing   (for lower case)

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string st;
//     cout << "Enter string in lower case- ";
//     cin >> st;

//     int hash[26] = {0}; // 26 size because there exists only 26 alphabates

//     // hashing

//     // storing
//     for (int i = 0; i < st.size(); i++)
//     {
//         hash[st[i] - 'a'] += 1; //   where "st[i] -'a' " is 0 to 25 through the help of asci value

//         // above line stores the no. of times the character comes in the string at 0th index of hash for a ,for b at 1st index of hash and similary so on
//     }

//     // fetching

//     int quantity;
//     cout << "Enter quantity of characters you wants to fetch- ";
//     cin >> quantity;

//     while (quantity > 0)
//     {
//         char ch;
//         cout << "Enter the character wants to fetch- ";
//         cin >> ch;
//         cout << "The character " << ch << " exists in the string for " << hash[ch - 'a'] << " times" << endl;
//         // where "ch-'a'" select the index of hash say ch is c then c-a is 99-97 which is 2 at which the count of character c is stored in the hash
//         quantity--;
//     }

//     return 0;
// }

// 3 No. of times any character present in string through hashing   (for all 256 characters)
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string st;
//     cout << "Enter string in lower case- ";
//     cin >> st;

//     int hash[256] = {0}; // 26 size because there exists only 26 alphabates

//     // hashing

//     // storing
//     for (int i = 0; i < st.size(); i++)
//     {
//         hash[st[i]] += 1;

//         // above line stores the no. of times the character comes in the string at 97th index of hash for a ,for b at 1st index of hash and similary so on
//     }

//     // fetching

//     int quantity;
//     cout << "Enter quantity of characters you wants to fetch- ";
//     cin >> quantity;

//     while (quantity > 0)
//     {
//         char ch;
//         cout << "Enter the character wants to fetch- ";
//         cin >> ch;
//         cout << "The character " << ch << " exists in the string for " << hash[ch] << " times" << endl;
//         // where "ch select the index of hash say ch is c then c is 99 which is 99 at which the count of character c is stored in the hash
//         quantity--;
//     }

//     return 0;
// }
