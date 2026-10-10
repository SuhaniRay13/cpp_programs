#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length, breadth;
    public:
    void get_data()
    {
        cout<<"Enter Length:"<<endl;
        cin>>length;
        cout<<"Enter Breadth:"<<endl;
        cin>>breadth;
    }
    int area()
    {
        int area= length*breadth;
        return area;
    }
        int Perimeter();
        void Display();
    
};
int Rectangle::Perimeter()
{
    int perimeter= 2*(length+breadth);
    return perimeter;
    

}
void Rectangle::Display()
{
    cout<<"Area of rectangle="<<area()<<endl;
    cout<<"Perimeter of rectangle="<<Perimeter();
}
int main()
{
    Rectangle R;
    R.get_data();
    R.Display();
}
