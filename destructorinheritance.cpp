#include<iostream>
using namespace std;
class base{
    public:
    ~base(){
        cout<<"it is base class"<<endl;
    }
};
class derived:public base{
    public:
    derived(){
        cout<<"it is derived class"<<endl;
    }
};
int main(){
    derived d;
}