#include<iostream>
using namespace std;
void Print_sub(string input,string output)
{
    //base case
    if(input.length()==0)
    {
        cout<<output<<endl;
        return;
    }
    Print_sub(input.substr(1),output);
    Print_sub(input.substr(1),output+input[0]);
}
 int main()
 {
 string s="ABC";
 Print_sub(s," ");
 }