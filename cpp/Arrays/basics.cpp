#include<iostream>
using namespace std;
int main(){
    int A[5];  //declaration
    int B[5]={2,4,6,8,10};
    int C[10]={2,4,6};
    int D[5]={0};
    int E[]={2,4,5,6,7,8};

    for (int  i = 0; i < 5; i++)
    {
        cout<<&A[i]<<endl;    //getting address
    }
    
    return 0;
}