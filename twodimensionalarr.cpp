#include<iostream>
using namespace std;
int main(){
 int r,c,**p;
 cout<<"enter row and column";
 cin>>r>>c;
 p=new int*[r];
 for(int i=0;i<r;i++)
 p[r]=new int[c];
 for(int i=0;i<r;i++){
 for(int j=0;j<c;j++){
    cin>>p[i][j];
 }
 }
 cout<<"enter value are:"<<endl;
 for(int i=0;i<r;i++){
 for(int j=0;j<c;j++){
    cout<<p[i][j]<<endl;
 }
}
}