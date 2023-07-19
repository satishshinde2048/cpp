#include<iostream>
using namespace std;
class show{
int a;
public:
void get(){
   cout<<"enter value of a:"<<endl;
   cin>>a;
}
void operator ==(show s2){
    if(a>s2.a){
        cout<<a;
    }
    else {
        cout<<s2.a;
    }
}
};
int main(){
 show s1,s2;
 s1.get();
 s2.get();
 s1==s2;
 
}