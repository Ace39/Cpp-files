#include<iostream>
using namespace std;
void Remove_duplicates(string s,int i,int l)
{ //base case
if(i==l)
{
    cout<<s;
}
    string str=s.substr(0,i+1);
    for(int j=i+1;j<l;j++)
    {
    if(s[i]!=s[j])
    {
        str=str+s[j];
    }
    }
    int k=str.length();
    Remove_duplicates(str,i+1,k);
}
int main()
{
string s;
cin>>s;
int l=s.length();
Remove_duplicates(s,0,l);
}