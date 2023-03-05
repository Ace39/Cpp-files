#include<iostream>
using namespace std;
void Print_Sub_ASCII(string input,string output)
{
    if(input.length()==0)//base case
    {
        cout<<output<<endl;
        return;
    }
    char ch=input[0];
    int d=ch;//that ch would get converted to its ASCII form 
Print_Sub_ASCII(input.substr(1),output);
Print_Sub_ASCII(input.substr(1),output+ch);
Print_Sub_ASCII(input.substr(1),output+to_string(d));
}
int main()
{
string s="AB";
Print_Sub_ASCII(s," ");
}