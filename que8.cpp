#include<iostream>
using namespace std;
int main()
{
    int n, max=INT_MIN;
    cin>>n;
   int  arr[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   for(int i=0;i<n;i++)
   {
   int sum=0;
    for(int j=i;j<n;j++)
    {
        sum+=arr[j];
        if(max<sum)
    {
        max=sum;
    }  
    }
   }
   cout<<max<<endl;
   return 0;
}