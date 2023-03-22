#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            k=1;
            break;
        }
    }
    if(k==0)
    {
        cout<<"Prime";
    }
    else
    cout<<"Not Prime";

}