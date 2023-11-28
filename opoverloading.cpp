#include<iostream>
using namespace std;
class show2;
class show1{
    int a;
    public:
    void get(){
        cout<<"enter value of a:"<<endl;
        cin>>a;
    }
    friend void operator >(show1,show2);
};
    class show2{
        int b;
        public:
      void get1(){
        cout<<"enter value of b:"<<endl;
        cin>>b;
    }
     friend void operator >(show1,show2);
};
void operator >(show1 s1,show2 s2){
    if(s1.a>s2.b){
        cout<<"a is big";
    }
    else{
         cout<<"b is big";
    }
}
int main(){
    show1 s1;
    show2 s2;
    s1.get();
    s2.get1();
    s1>s2;
}