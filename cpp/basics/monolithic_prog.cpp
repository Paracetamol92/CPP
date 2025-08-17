#include<iostream>
using namespace std;

int main(){
    int length=0, breadth = 0;
    cout<<"Enter the length and breadth ";
    cin>>length>>breadth;
    int area = length*breadth;
    int perimeter = 2*(length+breadth);

    cout<<"Area is "<<area<<endl<<"Perimeter is "<<perimeter<<endl;
    return 0 ;
}