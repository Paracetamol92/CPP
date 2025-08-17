#include <iostream>
using namespace std;

// using iterative method
int Ifib(int n)
{
    int to = 0, t1 = 1, s;
    if (n <= 1)
        return n;
    for (int i = 2; i <= n; i++)
    {
        s = to + t1;
        to = t1;
        t1 = s;
    }
    return s;
}

// using recursion method
int Rfib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return Rfib(n - 2) + Rfib(n - 1);
}
// using memoization 
int F[10];
int memoizationFib(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    if (F[n - 2] == -1)
    {
        F[n - 2] = memoizationFib(n - 2);
    }
    if (F[n - 1] == -1)
    {
        F[n - 1] = memoizationFib(n - 1);
    }
    return F[n - 2] + F[n - 1];
}

int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        F[i] = -1;
    }
    cout << Ifib(10) << endl;

    cout << Rfib(10) << endl;
    cout << memoizationFib(10) << endl;
    return 0;
}