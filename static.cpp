 #include<iostream>
using namespace std;
class show{
 static int a,b;
public:
static void get(){
   cout<<"enter a and b:"<<endl;
   cin>>a>>b;
  cout<<a<<endl;
  cout<<b<<endl;
}
};
int show::a;
int show::b;
int main(){
 show s;
 s.get();
}