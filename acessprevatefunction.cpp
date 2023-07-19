#include<iostream>
using namespace std;
class show{
    int  a,b,sum;

    void get(){
        cout<<"enter value of a and b:"<<endl;
        cin>>a>>b;
    }
     public:
    void add(){
        get();
        sum=a+b;
        cout<<"sum:"<<sum<<endl;
    }
};
int main(){
    show s;
    s.add();
}