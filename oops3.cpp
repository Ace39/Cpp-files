#include<iostream>
using namespace std;
class student{
  public:
string name;
int age;
bool gender;

student(string s, int a, bool g)
{
    cout<<"Parameterised Constructor"<<endl;
name=s;
age=a;
gender=g;
}//this is parametarized consttructor
//a constructor should be defined inside the class
student()
{
cout<<"Default constructor"<<endl;
}//default constructor
student(student &a1)
{
//pointer stores the address of the variable student *ptr=&a;
//or we can directly access the address by taking ampersand of the variable
cout<<"Copy Constructor"<<endl;
name=a1.name;
age=a1.age;
gender=a1.gender;
}//copy constructor
~student()
{
    cout<<"Default Constructor"<<endl;
}//destructor
//A DESTRUCTOR GETS CALLED WHEN THE OBJECTS CREATED GETS DESTROYED
//LIKE OBJECTS a1,b,c when gets destroyed then this destructor will get called

bool operator ==(student &a1)
{
    if(name==a1.name&&age==a1.age&&gender==a1.gender)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
};
int main()
{//now we want as soon as object created the variables get passed to the datamembers directly to the class
string s;
cin>>s;
int a;
cin>>a;
bool g;
cin>>g;

student a1(s,a,g);
student b;//when this kind of object is created then default constructor gets called
//student c=a;//for this copy constructor is required
student c=a1;//student c(a1);

//Another thing is operator overloading here we have to declare the meaning of the operator used for objects like for comparing two objects == or!= or< or >
//or adding two object + or unary operator ++ likewise
//this we do by creating a function inside the class and datatype of the function depends on the return type or what it will be returning
if(a1==c)
{
    cout<<"Same"<<endl;
}
else
{
    cout<<"Not Same"<<endl;
}

return 0;//when we will exit the main fuction, means the objects a1,b ,c created intially  gets destroyed later after reaching (return 0);
}
