#include<iostream>
using namespace std;
class show{
int a,b;
public:
void get(int x=25,int y=50){
    a=x;
    b=y;
}
void display(){
  cout<<a<<endl;
  cout<<b<<endl;
}
};
int main(){
 show s;
 s.get(10,20);
 s.display();
 s.get();
 s.display();
}