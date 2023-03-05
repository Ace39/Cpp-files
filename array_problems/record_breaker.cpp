#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of days "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the no. of visitors visited on the ith day "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int MAX=a[0];
    for(int i=0;i<n;i++)
    {
        MAX=max(MAX,a[i]);   
        if(a[i]>a[i+1] && MAX==a[i] && i<(n-1))
        {
            cout<<"day "<<i+1<<" is a record breaking day "<<endl;
        }
        if(i==n-1 && MAX==a[i])
        {
        cout<<" Last day is also record breaking";
        }
    }
}