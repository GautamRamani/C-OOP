// #include<iostream>
// using namespace std;
// class test
// {
//     //by default Private
//     int x=20;
//     public:
//     int a=10,b,y;
// };
// int main()
// {
//     test t1;
//     cout<<"\na:"<<t1.a;
// //  cout<<"\ny:"<<t1.x;   //Error--(due to the private)
// }

// public private protected

#include <iostream>
using namespace std;

class test{
    public :
    int a = 10;
    int getB() {
        return b;
    }
    
    void displayProtected() {
        cout << "\nc (protected) from base class: " << c;
    }
    
    private :
    int b = 10;

    protected :
    int c = 30;
};
class derived : public test{
    public :
    void accessFromBaseClass(){
        cout<<"access from base class c:"<<c;
    }
};
int main(){
    test t1;
    derived d1;
    cout<<"a:"<<t1.a;
     cout <<"\n b (accessed via getter): " << t1.getB();
     t1.displayProtected(); 
    d1.accessFromBaseClass();
}
