#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int new_arr[n];
    
        for(int i=0;i<n;i++)
        {
        new_arr[i]=arr[n-(i+1)];
        }
        for(int i=0;i<n;i++)
        {
        cout<<"original Arrays are:"<<arr[i]<<endl;
        }
        for(int i=0;i<n;i++)
        {
        cout<<"Reverse Arrays are:"<<new_arr[i]<<endl;
        }

}