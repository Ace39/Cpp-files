#include<iostream>
using namespace std;
class student{
    //by default the datamembers of the class are private so they cannot be accessed outside the class like they cannot be accessed in main()
    //function ,means outside the class so for this we have to mention datamembers as public
    public:
    string name;
    int age;
    bool gender;
    void PrintInfo(){
        cout<<"Name ="<<name<<endl;
        cout<<"Age ="<<age<<endl;
        cout<<"Gender ="<<gender;

    }
    };//semicolon after the curly braces of the class function is necessary
    int main()
    {
        student a;
        a.name="Prerna";
        a.age=19;
        a.gender=1;//0 is for male 1 is for female
        student arr[3];
        for(int i=0;i<3;i++)
        {
            cout<<"Name =";
            cin>>arr[i].name;
            cout<<endl<<"Age =";
            cin>>arr[i].age;
            cout<<endl<<"Gender =";
            cin>>arr[i].gender;

        }
        for(int i=0;i<3;i++)
        {
            arr[i].PrintInfo();//by this we can call the function defined inside the class 
        }

    }