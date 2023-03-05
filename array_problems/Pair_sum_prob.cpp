#include<iostream>
using namespace std;
int main()
{
    int n;
    int k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int sum=a[i]+a[j];
            if(sum==k)
            {
                cout<<a[i]<<" "<<a[j]<<endl;
            }
        }
    }
    
}
