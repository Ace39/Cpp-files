#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int check_arr[100];
    for(int i=0;i<100;i++)
    {

        check_arr[i]=false;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            check_arr[arr[i]]=true;
        }
    }

for(int i=0;i<n;i++)
{
    if(check_arr[i]==false)
    {
        cout<<"The smallest positive number missing is "<< i <<endl;
        break;
    }
}
    }
