#include<iostream>
#include<string>
using namespace std;
class Student
{
    public:
    int RollNo;
    string Name;
    int Physics;
    int Chemistry;
    int Maths;

    void Get_Info()
    {
        cout<<"Enter Roll_No of student:"<<endl;
        cin>>RollNo;
        cout<<"Enter Name of student:"<<endl;
        cin>>Name;
        cout<<"Enter Physics Marks:"<<endl;
        cin>>Physics;
        cout<<"Enter Chemistry Marks:"<<endl;
        cin>>Chemistry;
        cout<<"Enter Maths Marks:"<<endl;
        cin>>Maths;
    }
    void Display_Info()
    {
        cout<<"Roll_No:"<<RollNo<<endl;
        cout<<"Name of student:"<<Name<<endl;
        cout<<"Physics Marks:"<<Physics<<endl;
        cout<<"Chemistry Marks:"<<Chemistry<<endl;
        cout<<"Maths Marks:"<<Maths<<endl;

    }
    void Result()
    {
        float percentage;
        percentage=(Physics+Chemistry+Maths)/3;
        cout<<"Percentage of student:"<<percentage<<endl;
    }

};
int main()
{
    Student S1,S2;
    S1.Get_Info();
    S1.Display_Info();
    S1.Result();
    S2.Get_Info();
    S2.Display_Info();
    S2.Result();
}
