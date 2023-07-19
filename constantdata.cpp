  #include<iostream>
using namespace std;
class show{
 const int a=100;
 int b;
public:
show(){
   b=20;
}
void display() const
{
  cout<<a<<endl;
  cout<<b<<endl;
}
};
int main(){
 show s;
 s.display();
}