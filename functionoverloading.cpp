#include<iostream>
using namespace std;
class show{
int a,b,c;
public:
void get(int a,int b){
   this-> a=a;
    this->b=b;
}
void get(int a,int b,int c){
   this-> a=a;
    this->b=b;
    this->c=c;
}
void display(){
  cout<<a<<endl;
  cout<<b<<endl;
   cout<<c<<endl;
}
};
int main(){
 show s;
 s.get(10,20);
 s.display();
 s.get(10,20,30);
 s.display();
}