#include<iostream>
using namespace std;
class Person
{
    public:
    int RollNo;
    int Name;
    void Person_Info()
    {
        cout<<"Enter Rollno:"<<endl;
        cin>>RollNo;
        cout<<"Enter Name:"<<endl;
        cin>>Name;
    }
};
class Student:public Person
{
    public:
    void Student_Info()
    {
        cout<<"Student information"<<endl;
    }
};
int main()
{
    Student s1;
    s1.Person_Info();
    s1.Student_Info();
    return 0;
};