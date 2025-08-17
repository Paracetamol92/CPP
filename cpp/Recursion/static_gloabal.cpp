#include<iostream>
using namespace std;
int x = 0;
int fun(int a){
    // static int x = 0;
    if (a>0)
    {
        x++;
        return fun(a-1)+x;
    }
    return 0;
}

int main(){
    int r;
    r = fun(5);
    cout<<r;

    r= fun(5);
    cout<<r;
    return 0;
}