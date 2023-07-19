#include<iostream>
using namespace std;
class show{
int a,b;
public:
friend void display(show);
};
void display(show s){
    s.a=10;
    s.b=20;
    cout<<"a:"<<s.a<<endl;
    cout<<"b:"<<s.b;
}
int main(){
    show s;
    display(s);
}