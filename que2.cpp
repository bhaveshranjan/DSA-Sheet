#include<iostream>
using namespace std;
int main()
{
    int n,max,min;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    min=arr[0];
        for(int i=0;i<n;i++)
        {
            
                if(max<=arr[i]){
                max=arr[i];
                }
                else if(min>=arr[i])
                {
                    min=arr[i];
                }
            }
        cout<<"Maximum="<<max<<endl;
            cout<<"Minimum="<<min;
        return 0;
}