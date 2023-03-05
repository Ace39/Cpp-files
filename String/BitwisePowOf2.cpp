#include<iostream>
using namespace std;
int Ispow2(int n)
{
    return(n&&!(n&n-1));//if n is pow of 2 then n&n-1 would give 0 then ! of it  will give value 1 
    //now if n=0 then n-1 would fail so for this if n=0 n&& would make all the eq 0 returning false
}
int main()
{int n;
cin>>n;
cout<<Ispow2(n);
}