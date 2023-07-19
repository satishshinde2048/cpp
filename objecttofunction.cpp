#include<iostream>
using namespace std;
class show{
int a;
public:
void get(){
  cout<<"enter value of a:";
  cin>>a; 
}
void display(){
  cout<<"a:"<<a<<endl;
}
void big(show s2){
    if(a>s2.a){
        cout<<a<<endl;
    }
    else{
        cout<<s2.a<<endl;
    }
}
};
int main(){
 show s1,s2;
 s1.get();
 s2.get();
 s1.display();
 s2.display();
 s1.big(s2);
}