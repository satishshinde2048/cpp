#include<iostream>
using namespace std;
int main(){
    int *p;
    float *q;
    char *r;
     p=new int(10);
     q=new float(10.45);
     r=new char('s');
     cout<<p<<endl<<q<<endl<<r<<endl;
     cout<<*p<<endl<<*q<<endl<<*r<<endl;
}