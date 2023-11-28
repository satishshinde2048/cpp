#include<iostream>
using namespace std;
struct show{
    int  a=13,b=15,sum;
};
int main(){
    struct show s;
    s.sum=s.a+s.b;
   cout<<"sum:"<<s.sum<<endl;
}