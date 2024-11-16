// 1->   Sum of n no. using parameterised form

// #include <bits/stdc++.h>
// using namespace std;

// void sumn(int i, int n = 0)
// {
//     if (i < 1)
//     {
//         cout << n;
//         return;
//     }
//     sumn(i - 1, n + i);
// }

// int main()
// {
//     int n = 3;

//     sumn(n);

//     return 0;
// }

// 1.2-> Print sum of N using recursion functional approach return

// #include <bits/stdc++.h>
// using namespace std;

// int sumn(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         return n + sumn(n - 1);
//     }
// }

// int main()
// {
//     int n = 3;
//     cout << sumn(n);

//     return 0;
// }

// 2 -> print factorial using recursion both approach
// 2.1 using parameter

// #include <bits/stdc++.h>
// using namespace std;

// void fac(int i, int n = 1)
// {
//     if (i < 1)
//     {
//         cout << n;
//         return;
//     }
//     fac(i - 1, n * i);
// }

// int main()
// {
//     int n = 4;
//     fac(n);

//     return 0;
// }

// 2.2 -> using functional return approach

// #include <bits/stdc++.h>
// using namespace std;

// int fac(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * fac(n - 1);
//     }
// }
// int main()
// {
//     int n = 4;
//     cout << fac(n);

//     return 0;
// }