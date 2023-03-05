#include<iostream>
using namespace std;
int Fibonacci(int n)
{
    if(n==1)
    {
        return 1;
    }
    if(n==0)
    {
        return 0;
    }
    int k=Fibonacci(n-1)+Fibonacci(n-2);
    return(k);
}
int main()
{
    int n;
    cin>>n;
    cout<<Fibonacci(n);
    
}