#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int s1=0,e1=m-1,s2=1,e2=n-2;
    while(s1<=e1&&s2<=e2)
    {
    for(int i=s1;i<=e1;i++)
    {
        cout<<arr[s2-1][i]<<" ";
    }
    if(e2-s2==1)
    {
        break;
    }
    for(int i=s2;i<=e2;i++)
    {
        cout<<arr[i][e1]<<" ";
    }
    if(e1-s1==1)
    {
        break;
    }
    for(int i=e1;i>=s1;i--)
    {
        cout<<arr[e2+1][i]<<" ";
    }
    for(int i=e2;i>=s2;i--)
    {
        cout<<arr[i][s1]<<" ";
    }
    s1++;
    s2++;
    e1--;
    e2--;
    }
}