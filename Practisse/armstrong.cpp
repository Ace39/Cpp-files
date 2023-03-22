#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=n;
    int s=0;
    while(n!=0)
    {
      s=s+(n%10)*(n%10)*(n%10);
      n=n/10;  
    }
    if(k==s)
    {
        cout<<"Armstrong No.";
    }
    else
    cout<<"Not Armstrong";
}