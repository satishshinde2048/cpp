#include<iostream>
using namespace std;
int main(){
  int n,*p;
  cout<<"enter arr size:"<<endl;
  cin>>n;
  p=new int[n];
  for(int i=0;i<n;i++){
   cin>>p[i];
  }    
  cout<<"values are:"<<endl;
     for(int i=0;i<n;i++){
        cout<<p[i]<<endl;
     }
}