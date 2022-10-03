#include<iostream>
using namespace std;
class text
{
    static int a,b;
 public:
 static void get()
 {
  cout<<"enter a and b"<<endl;
  cin>>a>>b;
  cout<<"a="<<a<<endl;
  cout<<"b="<<b<<endl;
 }
};
int text::a;
int text::b;
int main()
{
int n;
 text t;
 text::get();
}