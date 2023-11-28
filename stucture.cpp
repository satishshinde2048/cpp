#include<iostream>
using namespace std;
struct show{
    int  a,b,sum;
    public:
    void get(){
        cout<<"enter value of a and b:"<<endl;
        cin>>a>>b;
    }
    void add(){
        sum=a+b;
        cout<<"sum:"<<sum<<endl;
    }
};
int main(){
    struct show s;
    s.get();
    s.add();
}