#include<iostream>
using namespace std;
int main()
{
   int n,m;
   cout<<"Enter the no. of rows and no. of columns you want in the matrix "<<endl;
   cin>>n>>m;
   cout<<"Enter the elements in the array "<<endl;
   int a[n][m];
   int st_j=0,ed_j=m-1,st_i=1,ed_i=n-2;
   for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>a[i][j];
    }
} 
while(st_j<=ed_j && st_i<=ed_i)
//for printing first row

    {
        for(int j=st_j;j<=ed_j;j++)
    {
    cout<<a[st_i][j]<<" ";
    }
    //for printing last column
    for(int i=st_i;i<=ed_i;i++)
    {
        cout<<a[i][ed_j-1]<<" ";
    }
    //for printing last row
    for(int j=ed_j;j>=st_j;j--)
    {
        cout<<a[ed_i+1][j]<<" ";
    }
    //for printing first column
    for(int i=ed_i;i>=st_i;i--)
{
    cout<<a[i][st_j]<<" ";
}
st_j++;
st_i++;
ed_i--;
ed_j--;
    }
}