
/*
to write a program to take an iput from the user as a string then covert the whole string 
into upper case then covert the same given string into lower case
*/
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string ToUpperCase(string s,int l)
{
for(int i=0;i<l;i++)
{
  if(s[i]>='a'&&s[i]<='z')
  {
    s[i]-=32;
  }
}
return(s);
}
string ToLowerCase(string s,int l)
{
for(int i=0;i<l;i++)
{
    if(s[i]>='A'&&s[i]<='Z')
    {
        s[i]+=32;
    }
}
return(s);
}
int main()
{
string s;
cin>>s;
int l=s.length();
cout<<ToUpperCase(s,l)<<endl;
cout<<ToLowerCase(s,l)<<endl;
}