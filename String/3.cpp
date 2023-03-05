/*
form the biggest number from the numeric string
eg:- "53214" to "54321"
*/
#include<iostream>
#include<algorithm>//to include sort function
#include<string>
using namespace std;
int main()
{
    string s;
    string str=" ";
    cout<<"Enter a number"<<endl;
    cin>>s;
    sort(s.begin(),s.end());//this would sort the array in order of ascending order
    cout<<"The sorted array in ascending order "<<s<<endl;
    sort(s.begin(),s.end(),greater<int>());//to sort array in descending order
    ///if suppose we had given string of characters then in greater<char>() char would be used
    cout<<"The sorted array in descending order is "<<s<<endl;
}