#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        for(int k=j;k<n-1;k++)
        {
            if(a[i][k]>a[i][k+1])
            {
                int temp=a[i][k];
                a[i][k]=a[i][k+1];
                a[i][k+1]=temp;
            }
        }
        }
    }
    for(int i=m-1;i>=0;i--)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=j;k<n-1;k++)
            {
                if(a[k][i]>a[k+1][i])
                {
                    int temp=a[k][i];
                    a[k][i]=a[k+1][i];
                    a[k+1][i]=temp;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}