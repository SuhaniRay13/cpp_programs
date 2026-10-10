#include<iostream>
using namespace std;
class Product
{
    public:
    int product_id;
    string product_name;
    float price;
    int MonthlySales[12];
    void GetInfo()
    {
        cout<<"Enter product_id:"<<endl;
        cin>>product_id;
        cout<<"Enter product_name:"<<endl;
        cin>>product_name;
        cout<<"Enter product_price:"<<endl;
        cin>>price;

        cout<<"Enter Monthly_sales:"<<endl;
        for(int i=0;i<12;i++)
        {
            cout<<"Month:"<<i+1<<endl;
            cin>>MonthlySales[i];
        }
    }
    int Total_Quantity()
    {
        int total=0;
        for(int i=0;i<12;i++)
        {
            total=total+MonthlySales[i];
        }
        return total;

    }
    float bill()
    {
        return price*Total_Quantity();
    }
    void Display()
    {
        cout<<"Product_id    :"<<product_id<<endl;
        cout<<"Product_name  :"<<product_name<<endl;
        cout<<"Product_price :"<<price<<endl;
        cout<<"Total_quantity:"<<Total_Quantity()<<endl;
        cout<<"Total_bill   :"<<bill()<<endl;
    }
};
int main()
{
    int number;
    cout<<"Enter number of products:"<<endl;
    cin>>number;
    Product products[number];
    for(int i=0;i<number;i++)
    {
        cout<<"Enter details of product "<<i+1<<endl;
        products[i].GetInfo();
    }
    cout<<"All product details:"<<endl;
    for(int i=0;i<number;i++)
    {
        cout<<"Details of product "<<i+1<<endl;
        products[i].Display();
    }
    return 0;
}
