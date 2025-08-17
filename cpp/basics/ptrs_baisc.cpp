#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *p;
    p = &a;

    // cout<<a<<endl;
    // cout<<*p;


    //pointers ot an Array
    int A[5]= {2, 4, 6, 8, 10};
    int *q;
    q = A;

    for(int i = 0; i<5; i++){
        cout<<A[i]<<" ";
        cout<<p[i]<<" ";
    };
    return 0;
}