#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter number of row";
    cin>>r;
    for(int i=1;i<=r;i++){
        for(int s=1;s<=r-i;s++){
            cout<<" ";
        }
            for(int t=1;t<=(i*2)-1;t++){
                cout<<"*";
            }
        
        cout<<endl;
    }

}