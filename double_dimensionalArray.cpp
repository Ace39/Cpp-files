#include<iostream>
using namespace std;
int main()
{
  int n,m;
  int i,j=0;
  cout<<"Enter the no. of rows and columns you want in the array "<<endl;
  cin>>n>>m;
  cout<<"Enter a number you want to search in the matrix "<<endl;
  int k;
  cin>>k;
  int a[n][m];
  int p=0;
  cout<<"Enter the elements in the array "<<endl;
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
        if(a[i][j]==k)
        {
        p=1;
        break;
        }
    }
}
if(p==1)
{
    cout<<"elements is found at row index "<<i<<" & column index "<<j<<endl;
}
else{
cout<<"Element is not found in the matrix"<<endl;
}
}