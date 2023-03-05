#include<iostream>
using namespace std;
void Swapping(int a,int b)
{
int temp=b;
b=a;
a=temp;
cout<<"The numbers will appear swapped in user function"<<a<<" "<<b<<endl;
}
void ActualSwapping(int *p,int *q)
{
int temp=*p;
*p=*q;
*q=temp;
}
int main()
{
int a,b;
cin>>a>>b;
Swapping(a,b);
cout<<"The numbers will not appear to be swapped in the main function as copy of the values has been paased and so no effect is seen in the original value"<<a<<" "<<b<<endl;
ActualSwapping(&a,&b);
cout<<"Now the variables will appear to be swapped"<<a<<" "<<b;
}