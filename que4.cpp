#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"Kindly Enter only 0,1,2 as input"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Original arrays are:"<<arr[i]<<endl;
    }
    int z=0,o=0,t=0;
    for(int i=0;i<n;i++)
    {
    if(arr[i]==0)
    {
        z++;
    }
    else if(arr[i]==1)
    {
        o++;
    }
    else if(arr[i]==2)
    {
        t++;
    }
    }
    for(int i=0;i<z;i++)
    {
    arr[i]=0;
    }
    for(int i=z;i<o+z;i++)
    {
    arr[i]=1;
    }
    for(int i=o+z;i<t+o+z;i++)
    {
    arr[i]=2;
    }
    cout<<"Sorted array without using any sorting algorithm"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}