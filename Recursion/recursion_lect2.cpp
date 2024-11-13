// SOME RECURSION PROBLEMS

/* 01-> Print name through recursion using change of parameters
#include <bits/stdc++.h>
using namespace std;

void printName(int, int);

int main()
{
    int n = 5;
    printName(1, n);

    return 0;
}

void printName(int count, int N)
{
    if (count > N)
    {
        return;
    }

    cout << "Kunal\t" << count << endl;

    printName(count + 1, N);
}
*/

/*
// 2-> Print linearly from 1to N
#include <bits/stdc++.h>
using namespace std;

void printN(int count, int n)
{
    if (count > n)
    {
        return;
    }
    cout << count << " ";
    printN(count + 1, n);
}

int main()
{
    int n = 5;
    printN(1, n);

    return 0;
}
*/

/*
// 3-> Print from N to 1
#include <bits/stdc++.h>
using namespace std;

void printN(int count, int n)
{
    if (count == 0)
    {
        return;
    }
    cout << count << " ";
    printN(count - 1, n);
}

int main()
{
    int n = 5;
    printN(n, n);

    return 0;
}
*/

/*
// 4  -> using backtracking print 1 to N
#include <bits/stdc++.h>
using namespace std;
void f(int n)
{
    if (n < 1) // backtracking condition
    {
        return;
    }
    f(n - 1); // backtracking
    cout << n << " ";
}
int main()
{
    int n = 5;
    f(n);
    return 0;
}
*/
/*
// 5  -> using backtracking print N to 1

#include <bits/stdc++.h>
using namespace std;
void f(int count, int n)
{
    if (count < 1) // backtracking condition
    {
        return;
    }
    f(count - 1, n); // backtracking
    cout << n - count + 1 << " ";
}
int main()
{
    int n = 5;
    f(n, n);
    return 0;
}
*/