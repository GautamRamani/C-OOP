#include<iostream>
using namespace std;
class Area
{
    public:
        float area_calc(float l,float b)
        {
            return l+b;
        }
};
class Perimeter
{
    public:
        float peri_calc(float l,float b)
        {
            return 2*(l+b);
        }
};
class Rectangle:private Area,private Perimeter
{
    private:
    float length,breadth;
    public:
    Rectangle():length(0.0),breadth(0.0){}
    void getdata()
    {
        cout<<"Enter Length:";
        cin>>length;
        cout<<"Enter Breadth:";
        cin>>breadth;
    }
float area_calc()
{
    return Area::area_calc(length,breadth);
}
float peri_calc()
{
    return Perimeter::peri_calc(length,breadth);
}
};
int main()
{
    Rectangle r;
    r.getdata();
    cout<<"\n\n";
    cout<<"Area:"<<r.area_calc();
    cout<<"\nPerimeter:"<<r.peri_calc();
}