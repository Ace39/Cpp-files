#include<iostream>
using namespace std;
int No_of_set_in_bit(int n)
{
    int c=0;
    while(n!=0)
    {
        c++;
        n=n&n-1;
    }
    return c;
}
int main()
{
int n;
cin>>n;
cout<<No_of_set_in_bit(n);
}