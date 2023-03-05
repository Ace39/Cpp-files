#include<iostream>
using namespace std;
class Student{
string name;//private datamember
public:
int age;
bool gender;
//we will create a function inside the class and we know function created inside the class can be accessed outside the class
void GetInfo(string s)
{
    name=s;
}
void PrintInfo()
{
    cout<<"Name ="<<name<<endl;
    cout<<"Age ="<<age<<endl;
    cout<<"Gender ="<<gender<<endl;

}
};
int main()
{
//now how to access the private datamember
Student a;//an object of class student has been created
cout<<"Name =";
//cin>>a.name;// This will give an error as name is private member of the class student so how to access it
//now since name variable cannot be access we would take s as a string from the user and push it to the function info where it will assign it to name datamember
string s;
cin>>s;
a.GetInfo(s);
cout<<endl<<"Age =";
cin>>a.age;
cout<<endl<<"Gender =";
cin>>a.gender;

}