#include <iostream>
#include<string>
using namespace std;

class Employee
{
    int id;
    string name;
    float salary, bonus, totalSalary;

public:
    // Default Constructor
    Employee()
    {
        id = 101;
        name = "siya";
        salary = 50000;
        bonus = 20000;
    }

    // Parameterized Constructor
    Employee(int i, string n, float s, float b)
    {
        id = i;
        name = n;
        salary = s;
        bonus = b;
    }

    void calculate()
    {
        totalSalary = salary + bonus;
    }

    void display()
    {
        cout << "Employee ID: " << id<<endl;
        cout << "Employee Name: " << name<<endl;
        cout << "Salary: " << salary<<endl;
        cout << "Bonus: " << bonus<<endl;
        cout << "Total Salary: " << totalSalary << endl;
    }
};

int main()
{
    Employee e1;   // Default constructor

    Employee e2(101, "Aarushi", 30000, 5000);  // Parameterized constructor

    e1.calculate();
    e2.calculate();

    cout << "Default Constructor Employee:";
    e1.display();

    cout << "Parameterized Constructor Employee:"<<endl;
    e2.display();

    return 0;
}