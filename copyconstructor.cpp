#include<iostream>
using namespace std;
class show{
int a,b;
public:
show(int a,int b){
   this-> a=a;
    this->b=b;
}
show(show &old){
   a=old.a;
   b=old.b;
}
void display(){
  cout<<a<<endl;
  cout<<b<<endl;
}
};
int main(){
 show t1(10,30);
 show t2(t1);
 t1.display();
t2.display();

}