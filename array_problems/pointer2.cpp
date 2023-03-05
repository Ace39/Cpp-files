#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40};
    int *ptr;
    ptr=arr;//ptr pointer takes the address of the 0th element in the array
    for(int i=0;i<3;i++)
    {
        cout<<*ptr<<endl;//*ptr means value at that address
        ptr++;
    }
    //another way without using ptr pointer
    for(int i=0;i<3;i++)
    {
        //cout<<*arr<<endl;
        //arr++; doing arr++ is illegal in c++ as arr is the address of the 0th element and it remains constant
        //so instead of doing this we would do *(arr+i) now for a second though it may
        //come in mind why we didn't do arr+4i as addresses in array are 4 bytes away {10(2000),20(2004),30(2008),40(2012)}
        //but doing arr+i refers to next index 
        cout<<*(arr+i)<<endl;
    

}
}