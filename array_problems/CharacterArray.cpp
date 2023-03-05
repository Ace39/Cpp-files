#include<iostream>
using namespace std;
int main()
{
    char ch[100]="apple";//character array 
    int i=0;
    while(ch[i]!='\0')//in array the characters are stored in form [a| p| p| l| e| \0]
    {
        cout<<ch[i]<<endl;
        i++;
    }
}