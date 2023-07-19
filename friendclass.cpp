#include<iostream>
using namespace std;
class show1{
    int  a,b;
    public:
    friend class show2;
    void get(){
        cout<<"enter value of a and b:"<<endl;
        cin>>a>>b;
    }
};
    class show2{
        public:
    void display(show1 s1){
      cout<<"a:"<<s1.a<<endl;
    cout<<"b:"<<s1.b;
    }
};
int main(){
    show1 s1;
    show2 s2;
    s1.get();
    s2.display(s1);
}