#include<iostream>
using namespace std;
void Increment(int a)
{
    a++;
    cout<<" The value of a in the user function "<<a<<endl;
}
void ActualIncrement(int *p)
{
(*p)++;
}
int main()
{
  int a;//10
  cin>>a;
  Increment(a);//calling increment function 
  cout<<"the value of a in main function is "<<a<<endl; //10
  ActualIncrement(&a);
  cout<<" the value of a after passing its address and undergone an increment "<<a;
}