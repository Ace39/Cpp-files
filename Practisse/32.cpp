#include<iostream>
using namespace std;
int main()//check palindrome
{
    char ch[100];
    cin>>ch;
    int l=0,k=0;
    while(ch[l]!='\0')
    {
        l++;
        
    }
    for(int i=0;i<l;i++)
    {
        if(ch[i]!=ch[l-i-1])
        {
        k=1;
        break;
        }
    }
    if(k==0)
    {
        cout<<"A palindrome word";
    }
}