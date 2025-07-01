#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enetr the size of array : "<<endl;
    cin>>a;

    int arr[a];

    int largest=INT16_MIN;
    for(int i=0;i<a;i++)
    {
        cout<<"enter number at "<<i<<" index : "<<endl;
        cin>>arr[i];
        if(largest<arr[i])
        {
            largest=arr[i];
        }
    }

    cout<<"Largest number in array is : "<<largest<<endl;

    return 0;
}