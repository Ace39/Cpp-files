#include<iostream>
using namespace std;
void reverse_string(string s,int i,int l)
{
    if(i==l)
    {
      return;// it return nothing to the caller object as the return type of the function is void 
    }
reverse_string(s,i+1,l);
cout<<s[i];
}
int main()
{
string s;
cin>>s;
int l=s.length();
reverse_string(s,0,l);
}