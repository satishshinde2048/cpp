#include<iostream>
using namespace std;
class show{
int a,b;
public:
show(){
    a=50;
    b=60;
}
show(int a,int b){
   this-> a=a;
    this->b=b;
}
void display(){
  cout<<a<<endl;
  cout<<b<<endl;
}
};
int main(){
 show t1;
 show t2(10,30);
 t1.display();
t2.display();

}