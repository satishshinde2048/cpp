#include<iostream>
using namespace std;
class show{
int a,b;
public:
show(){
    a=50;
    b=60;
}
~show(){
  cout<<a<<endl;
  cout<<b<<endl;
}
};
int main(){
    show s;
}