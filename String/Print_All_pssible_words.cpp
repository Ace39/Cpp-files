#include<iostream>
using namespace std;
string keypad[]={" ","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};//it is a global array and can be accessed by anyy function
void Print_Words_From_KeyPad(string s,string ans)
{
if(s.length()==0)
{
    cout<<ans<<endl;
}
char ch=s[0];//s=25 and s[0]=2 
int a=ch-'0';//by this we can get the number from character form to integer form
string str=keypad[a];
for(int i=0;i<str.length();i++)
{
Print_Words_From_KeyPad(s.substr(1),ans+str[i]);
}
}
int main()
{
//now the user would type like we type in phone 234 or 23 so we are giving this to the function 
Print_Words_From_KeyPad("256"," ");
}