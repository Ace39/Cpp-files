#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    while(n!=0)
    {
        int s=n%2;
        sum=sum*10+s;
        n=n/2;
    }
    cout<<sum;
}