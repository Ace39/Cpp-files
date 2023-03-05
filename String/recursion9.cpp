/*
move all x to the end of the string 
axxbdxcefxhix
abdcefhixxxxx
*/
#include<iostream>
using namespace std;
void End_X(string s,int i,int l)
{
    //base case
    if(i==l)
    {
        cout<<s;
    }
    if(s[i]=='x')
    {
        s.erase(i,1);
        s=s+'x';
        End_X(s,i,l-1);
    }
    else
    {
        End_X(s,i+1,l);
    }
}
int main()
{
string s;
cin>>s;
int l=s.length();
End_X(s,0,l);
}
