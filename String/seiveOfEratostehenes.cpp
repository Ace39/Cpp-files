#include<iostream>
using namespace std;
int main()
{
    //int n;
    //cout<<"Enter a number upto which you want to print prime nos";
    //cin>>n;
    int arr[51];
    for(int i=2;i<=50;i++)
    {
        arr[i]=0;
    }
    for(int i=2;i<=50;i++)
    {
        for(int j=i*i;j<=50;j++)
        {
        if(j%i==0)
        {
            arr[j]=1;//marked
        }
        }
    }
    for(int i=2;i<51;i++)
    {
        if(arr[i]==0)
        {
            cout<<i<<endl;
        }
    }


}