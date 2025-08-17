#include<iostream>
using namespace std;
struct Array
{
    int *A;
    int size;
    int length;
};
void Display (struct Array arr)
{
    int i;
    for ( i = 0; i < arr.length; i++)
    {
        cout<<" "<<arr.A[i];
    }
    
};

int main()
{
    struct Array arr;
    int n;
    cout<<"Enter the size of the array : ";
    cin>>arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;

    cout<<"Enter the number in the arrrays : "<<endl;
    cin>>n;

    cout<<"Enter all the elements :"<<endl;; 
    for(int i = 0; i<n;i++){
        cin>>arr.A[i];
    }
    arr.length = n;
    
    Display(arr);
    delete[] arr.A;
    return 0;
}