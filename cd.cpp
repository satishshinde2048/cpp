#include<iostream>
using namespace std;
class text
{
 int a,b,c;
 public:
 text(int a,int b)
 {
  this->a=a;
  this->b=b;
  c=0;  
 }
 text(int a,int b,int c) 
 {
 
  this->a=a;
  this->b=b; 
  this->c=c;
 }
 void display()
 {
  cout<<"a="<<a<<endl;
  cout<<"b="<<b<<endl;
  cout<<"c="<<c<<endl;
   }
};
int main()
{ 
 text t1(10,5);
 text t2(12,2,6);
 t1.display();
 t2.display();
}