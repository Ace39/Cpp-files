#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"enter a number N to fom a N*N matrix "<<endl;
   cin>>n;
   int a[n][n];
   cout<<"Enter the elements in the array "<<endl;
   for(int i=0;i<n;i++) 
   {
    for(int j=0;j<n;j++)
    {
        cin>>a[i][j];
    }
   }
   for(int i=0;i<n;i++)
   {
   // for(int j=0;j<n;j++) this for loop was wrong as on swapping elements return to their original positioon
   for(int j=i;j<n;j++)
    {
        if(i!=j)
        {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
   }
   cout<<"Your transposed array is "<<endl;
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
   }
}