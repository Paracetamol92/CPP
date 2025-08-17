#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}
int nCr(int n, int r)
{
    int t0, t1, t2;
    t0 = fact(n);
    t1 = fact(n - r);
    t2 = fact(r);
    return t0 / (t1 * t2);
}
int NCR(int n, int r)
{
    if (n == r || r == 0)
    {
        return 1;
    }
    return NCR(n - 1, r - 1) + NCR(n - 1, r);
}
int main()
{
    cout << nCr(4, 2) << endl;
    cout << NCR(10, 2) << endl;
    return 0;
}