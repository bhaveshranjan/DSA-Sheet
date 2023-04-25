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
    int arr2[n+1];
    for(int i=0;i<n+1;i++)
    {
        arr2[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        //arr2[i]=0;
        int z=arr[i];
        arr2[z]=arr2[z]+1;
    }
    
    for(int j=0;j<n+1;j++)
    {
        if(arr2[j]>1)
        {
            cout<<j<<" ";
        }
    }
}