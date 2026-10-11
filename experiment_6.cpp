
#include <iostream>
using namespace std;

class Student 
{
    private:
    int marks;
    public:
    static int count;

    Student(int m)  
    {
        marks = m;
        count++;
    }

    static void displayCount() 
    {
        cout << "Total students: " << count << endl;
    }

    friend void compareMarks(Student, Student);
    friend class Teacher;
};

int Student::count = 0;

// Friend function
void compareMarks(Student s1, Student s2) 
{
    if (s1.marks > s2.marks)
        cout << "Student 1 has higher marks." << endl;
    else if (s2.marks > s1.marks)
        cout << "Student 2 has higher marks." << endl;
    else
        cout << "Both students have equal marks." << endl;
}

// Friend class
class Teacher 
{
    public:
    void displayMarks(Student s) 
    {
        cout << "Student marks: " << s.marks << endl;
    }
};

int main() 
{
    Student s1(85);
    Student s2(92);

    // Static member function
    Student::displayCount();

    // Friend function
    compareMarks(s1, s2);

    // Friend class
    Teacher t;
    t.displayMarks(s1);
    t.displayMarks(s2);

    return 0;
}