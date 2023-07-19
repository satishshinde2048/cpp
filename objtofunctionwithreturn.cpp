#include<iostream>
using namespace std;
class show{
int a,b;
public:
void get(){
   cout<<"enter value of a and b:";
   cin>>a>>b;
}
void display(){
  cout<<a<<endl;
  cout<<b<<endl;
}
show sum(show s2){
    show s3;
    s3.a=a+s2.a;
    s3.b=b+s2.b;
    return s3;
}
};
int main(){
 show s1,s2,s3;
 s1.get();
 s2.get();
  s3=s1.sum(s2);
s1.display();
  s2.display();
  s3.display();
}