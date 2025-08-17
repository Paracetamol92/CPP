#include<iostream>
using namespace std;
int main(){
    int A[5] = {2, 3, 4, 5, 6};

    cout<<A[1]<<endl;
    cout<<sizeof(A)<<endl;

    // for(int i= 0; i<5; i++){
    //     cout<<A[i]<<" ";            //this is for loop 
    // }

    for( int x:A){
        cout<<x<<" ";
    }
    return 0;
}