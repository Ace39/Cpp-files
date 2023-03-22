#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    //to print the transpose of the matrix
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {a[j][i]=arr[i][j];}
            else
            {
                a[i][i]=arr[i][i];
            }
            
        }
    }
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;

}
}