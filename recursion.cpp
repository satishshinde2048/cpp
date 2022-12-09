#include<iostream>
using namespace std;
int main(){
   static int i=0;
    if(i<10){
        i+=1;
        cout<<i<<endl;
        main();
    }
}