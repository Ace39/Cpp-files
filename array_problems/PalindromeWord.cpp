#include<iostream>
using namespace std;
int main()
{
int n=0,k=0;
char ch[100];
cin.getline(ch,100);
while(ch[n]!='\0')
{
n++;
}
for(int i=0;i<n;i++)
{
   if(ch[i]==ch[n-i-1])
   {
    k++;
   }

}
if(k==n/2||k==n/2+1)
{
    cout<<"Palindrome";
}
else
{
    cout<<"Not a paliindrome";
}
}