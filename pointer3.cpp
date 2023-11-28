#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *p=&x;
    int **q=&p;
    int ***r=&q;
    cout<<x<<endl;//10
    cout<<p<<endl;//add
    cout<<*p<<endl;
    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;
    cout<<r<<endl;

}