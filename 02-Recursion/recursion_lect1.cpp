
// RECURSION -> When a function calls itself untill a specific condition is met.

#include <bits/stdc++.h>
using namespace std;
int count = 1;
void f()
{
    cout << ::count;
    ::count++;
    if (::count == 9) // base condition prevent stack overflow
    {
        return;
    }
    f(); // recursion
}
int main()
{

    f(); // calling function

    return 0;
}