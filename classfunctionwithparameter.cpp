#include<iostream>
using namespace std;
class show{
int a,b;
public:
void get(int x,int y){
    a=x;
    b=y;
}
void display(){
  cout<<a<<endl;
  cout<<b<<endl;
}
int big(){
    if(a>b){
        return a;
    }
    else {
        return b;
    }
}
};
int main(){
 show s;
 s.get(10,20);
 s.display();
 cout<<s.big()<<" is big value";
}