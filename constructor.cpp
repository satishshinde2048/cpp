#include<iostream>
using namespace std;
class show{
int a,b;
public:
show(){
  a=10;
  b=20;
}
void display(){
  cout<<a<<endl;
  cout<<b<<endl;
}
};
int main(){
 show s;
 s.display();
}