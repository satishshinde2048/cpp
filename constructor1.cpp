#include<iostream>
using namespace std;
class show{
int a,b;
public:
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
 show s(10,30);
 s.display();
}