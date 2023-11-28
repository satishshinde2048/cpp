#include<iostream>
using namespace std;
class show{
int a,b;
public:
void get(int a,int b){
   this-> a=a;
    this->b=b;
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
}