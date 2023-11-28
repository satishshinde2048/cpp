#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"it is base class constructor"<<endl;
    }
 virtual ~base(){
        cout<<"it is base class destructor"<<endl;
    }
};
class derived:public base{
    public:
    derived(){
        cout<<"it is derived class constructor"<<endl;
    }
    ~derived(){
        cout<<"it is   derived class destructor"<<endl;
    }
};
int main(){
    base *b= new derived;
    delete b;
}