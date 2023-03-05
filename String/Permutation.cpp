#include<iostream>
using namespace std;
void Print_permutation(string s,string ans)
{
    if(s.length()==1)
    {
        cout<<s+ans<<endl;
        return;
    }
for(int i=0;i<s.length();i++)
{
    char ch=s[i];
    string ros=s.substr(0,i)+s.substr(i+1);
    Print_permutation(ros,ans+ch);
}
}
int main()
{
string s="ABC";
Print_permutation(s,"");
}