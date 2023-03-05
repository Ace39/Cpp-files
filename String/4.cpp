/*
to print the maximum frequency of an character in the word 
eg:- "abfabfabfa"
a is repeated 4 times
*/
#include<iostream>
#include<algorithm>
#include<string>
#include<climits>
using namespace std;
int main()
{
string s;
cin>>s;
//transform(s.begin(),s.end(),s.begin(),::tolower);
//char ch[26];
sort(s.begin(),s.end());//aaaabbbfff after sorting 
int max=0;
int j=0;
char chr;
for(int i=0;i<s.length();i++)
{
    char ch=s[i];
    int c=0;
    for(int j=0;j<s.length();j++)
    {
    if(ch==s[j])
    {
        c++;
    }
    }
    i+=c;
    if(max<=c)
    {
    max=c;
    chr=ch;
    }
    
}
cout<<"Maximum time repeated character is "<<chr<<" and its frequency will be "<<max;



}