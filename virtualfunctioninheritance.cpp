#include<iostream>
using namespace std;
class base{
    public:
   virtual void get(){
        cout<<"it is base class get"<<endl;
    }
 virtual void show(){
        cout<<"it is base class show"<<endl;
    }
};
class derived:public base{
    public:
    void get(){
        cout<<"it is derived class get"<<endl;
    }
   void show(){
        cout<<"it is derived class show"<<endl;
    }
};
int main(){
  base *p;
  base b;
  derived d;
  p=&b;
  p->get();
  p->show();
  p=&d;
  p->get();
  p->show();
}