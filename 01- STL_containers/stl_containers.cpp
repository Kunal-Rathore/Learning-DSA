#include <bits/stdc++.h>
using namespace std;
int main()
{

    // PAIR in C++
    cout << "\nPAIR\n";
    pair<int, int> a = {2, 34};                       // pair "a" declaration +  initialization
    cout << a.first << " " << a.second << endl;       // Calling each value of pair "a"
    pair<int, pair<char, char>> a1 = {1, {'a', '4'}}; // nested pair "a1" declaration + initialization
    cout << a1.first << " "                           // Calling 1st value of 1st pair "a1"
         << a1.second.first << " "                    // Calling 1st value of 2nd pair "a1"
         << a1.second.second << endl;                 // Calling 2nd  value of 2nd pair "a1"

    // VECTOR in C++   -> It has all properties of array and many more and it also starts from 0 th index
    cout << "\nVECTOR\n";
    vector<int> b;              // declaration of vector b of int data type
    b.push_back(5);             // stores 5 in vector b at 1st place
    b.emplace_back(10);         // stores 10 in vector b at 2nd place,  and emplace_back is quiet faster than push_back
    vector<pair<int, char>> b1; // declaration of vector b1 of pair int and char data type
    b1.push_back({9, 'u'});
    b1.emplace_back(10, 'o');

    vector<int> b2(5, 10); // creates vector of size 5 and storing 10 at each place
    vector<int> b3(5, 8);  // creates vector of size 5 and storing 0 at each place

    vector<int> b4(b3); // creates vector storing values of b3

    // ITERATOR  -> Similarly  like pointer
    cout << "\nITERATOR\n";
    vector<int>::iterator it = b4.begin(); // points address of b4[0]

    cout << *(it) << endl; // derefrencing iterator
    it++;

    vector<int> c = {3, 23, 53, 24, 12}; // vector declaration + initialisation

    c.erase(c.begin(), c.begin() + 3); // erase function
    for (auto it : c)
    {
        cout << it << " ";
    }
    cout << endl;
    c.insert(c.begin() + 1, 3, 90);

    for (auto it = c.begin(); it != c.end(); it++)
    {
        cout << *(it) << " ";
    }

    cout << endl;

    c.swap(b4); // Swapping function swapping c in b4

    for (auto it : c)
    {
        cout << it << " ";
    }
    b.clear(); // it removes b from memory
    b1.clear();
    b2.clear();
    b3.clear();
    b4.clear();
    c.clear();
    cout << endl;

    // LIST -> same as vector but it has push_front and emplace_front function too
    cout << "\nLIST\n";
    list<int> l = {3, 234, 23, 21};
    l.push_front(1);    // list became {1,3,234,23,21}
    l.emplace_front(2); // {1,2,3,234,23,21}
    for (auto it : l)
    {
        cout << it << " ";
    }
    cout << endl;

    // DEQUE  -> it is same as list

    // STACK  -> it is LIFO =>last in first out   and there is no index type thing
    cout << "\nSTACK\n";
    stack<int> s;
    s.push(3); // {3}
    s.push(2); // {2,3}
    s.push(1); // {1,2,3}
    s.push(9); // {9,1,2,3}

    cout << s.top() << endl;

    // QUEUE -> it is FIFO => first in first out
    cout << "\nQUEUE\n";
    queue<int> q;
    q.push(5);     //{5}
    q.emplace(10); //{5,10}
    q.emplace(1);  //{5,10,1}

    cout << q.back() << endl;

    q.pop(); // removes first element of the stack or queue

    // PRIORITY QUEUE   ->  Same as queue but help in auto arranging the queue in decreasing order
    cout << "\nPRIORITY QUEUE\n";
    priority_queue<int> q1;
    // same fuction of queue

    q1.emplace(2);
    q1.emplace(12);
    q1.emplace(1);
    q1.emplace(10);
    cout << q1.top() << endl;

    // for increasing order

    priority_queue<int, vector<int>, greater<int>> q2;
    q2.emplace(2);
    q2.emplace(4);
    q2.emplace(1);
    q2.emplace(9);
    cout << q2.top() << endl;

    // SET -> they are simillar as queue but they auto sort and stores unique values in each set
    cout << "\nSET\n";
    set<int> s1;
    s1.insert(11); //{11}
    s1.insert(2);  //{2,11}
    s1.insert(2);  //{2,11}
    s1.insert(1);  //{1,2,11}

    for (auto it : s1)
    {
        cout << it << " ";
    }
    cout << endl;

    // Some funtions in set

    auto a7 = s1.find(11); // stores address of 11 if exist in set s
    cout << *a7 << endl;
    s1.erase(1); // erase the given element

    auto b7 = s1.count(1); // if one exist in set gives true else false
    cout << b7 << endl;
    s1.erase(1);
    // Multiset -> Same as set but cannot contain unique values

    // Unordered set -> Same as set but cannot sort the set automatically and it also contains only unique values

    // MAP ->  same as set which stores sorted value but no unique because it contains key as well so the key it contains should be unique

    cout << "\nMAP\n";
    map<int, int> m; // first int declares data type of key second int declares data type of value

    m.emplace(2, 3); // key 2 data is 3
    m.insert({3, 9});

    for (auto it : m)
    {
        cout << it.first << " " << it.second << "  ";
    }
    cout << endl;

    cout << "\nEND";

    // That's all about STL containers for now.
}
