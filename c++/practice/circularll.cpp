#include<iostream>
using namespace std;
class Base{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
    void setVal(int x,int y,int z){
        a=x; b=y; c=z;
    }
    void display(){
cout<<"Base:\n"<<"a:"<<a<<",b:"<<b<<",c:"<<c<<endl;
    }
};

class publicDerived: public Base{
    public:
        void display(){
            cout<<"public:\n"<<",b:"<<b<<",c:"<<c<<endl;
        }
};
class protectedDrived:protected Base{
    public:
        void display(){
            cout<<"protected:\n"<<",b:"<<b<<",c:"<<c<<endl;
        }
};
class privateDrived:private Base{
    public:
        void display(){
            cout<<"private:\n"<<",b:"<<b<<"c:"<<c<<endl;
        }
};

    int main(){
        Base base;
        base.setVal(1,2,3);
        base.display();
        publicDerived obj1;
        obj1.display();
        protectedDrived obj2;
        obj2.display();
        privateDrived obj3;
        obj3.display();
        return 0;

    }