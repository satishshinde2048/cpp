#include<iostream>
using namespace std;
class show{
int a,b;
public:
show(int x){
   a=x;  
}
show(int y,int b){
    'show::show(x)';
    this->b=b;
}
void display(){
  cout<<a<<endl;
  cout<<b<<endl;
}
};
int main(){
 show t1(12);
 show t2(10,30);
 t1.display();
t2.display();

}