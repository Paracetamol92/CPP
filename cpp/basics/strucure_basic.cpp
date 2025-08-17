#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
    char name;
};
int main(){

    struct rectangle r1; // declaration 
   
    struct rectangle r2 = {10, 5}; //declaration + intialisation
    cout<<sizeof(r2)<<endl;
    cout<<r2.length<<endl;
    cout<<r2.breadth<<endl;
    cout<<"Hello world";
}
