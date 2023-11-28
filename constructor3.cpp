#include<iostream>
using namespace std;
class show{
int a,b;
public:
show(int a=20,int b=40){
   this-> a=a;
    this->b=b;
}
void display(){
  cout<<a<<endl;
  cout<<b<<endl;
}
};
int main(){
 show s1(10,30);
 s1.display();
 show s2(12);
 s2.display();
}