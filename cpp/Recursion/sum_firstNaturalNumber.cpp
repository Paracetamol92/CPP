#include <iostream>
using namespace std;

int sum1(int n)
{ // using formula
    if (n == 0)
    {
        return 0;
    }
    return n * (n + 1) / 2;
}
int sum2(int m) // using for loop
{
    int i;
    int s = 0;
    for (int i = 1; i <= m; i++)
        s = s + i;
    return s;
}
int sum3(int n)
{ // using recursion
    if (n == 0)
        return 0;
    return sum3(n - 1) + n;
}
int main()
{
    cout << sum1(5) << endl;
    cout << sum2(5) << endl;
    cout << sum3(5) << endl;
}