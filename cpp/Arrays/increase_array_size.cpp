#include <iostream>
using namespace std;
int main()
{
    int *p, *q;
    p = new int[5];
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    q = new int[10];
    for (int i = 0; i < 10; i++)
        q[i] = p[i];
    p = q;
    for (int i = 0; i < 5; i++)
        cout << q[i] << " ";

    delete[] p;

    return 0;
}