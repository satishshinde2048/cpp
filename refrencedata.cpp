#include<iostream>
using namespace std;
int main(){
    int a=100;
    int &b=a;
    a=200;
    cout<<a<<b;
    a=300;
    cout<<a<<b;
}