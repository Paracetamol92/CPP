#include<iostream>
using namespace std;
void TOH(int n, int a,int b, int c)
{
    if (n>0)
    {
        TOH(n-1,a,c,b);
        cout<<"Move disc 1 from "<<a<<" to " <<c<<endl;
        TOH(n-1,b,a,c);
        cout << "Move disk " << n << " from " << a << " to " << c << endl;

    }
    
}
int main(){
    TOH(4,1,2,3);
    return 0;
}