#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,kmax,kmin;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if (arr[j] > arr[j + 1])
            swap(arr[j],arr[j+1]);
        }
    }
        
        cout<<"Enter Kth maximum number"<<endl;
        cin>>kmax;
        cout<<"Maximum Kth Numbers are:"<<arr[n-kmax]<<endl;
        cout<<"Enter Kth minimum number"<<endl;
        cin>>kmin;
        cout<<"Minimum Kth Numbers are:"<<arr[kmin-1]<<endl;
    
    return 0;
}