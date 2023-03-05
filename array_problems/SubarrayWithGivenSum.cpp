#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    cin>>n>>sum;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        int s=0;
        for(int j=i;j<n;j++)
        {
        s=s+a[j];
        if(s==sum)
        {
        cout<<"Starting index is "<<i<<" Last index is "<<j<<endl;
        }
        }
    }//but this has time complexity n^2 and in given question we have to maintain a time complexity of n
}