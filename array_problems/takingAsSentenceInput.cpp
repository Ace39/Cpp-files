#include<iostream>
using namespace std;
int main()
{
    char ch[100];
    cin.getline(ch,100);
    //cin.ignore();//to avooid any kind of buffer
    cout<<ch;
}