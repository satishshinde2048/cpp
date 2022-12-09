#include<iostream>
using namespace std;
int main()
{
    int i=0;
   begin:
   i+=1;
   cout<<i<<endl;
   if(i<10){
    goto begin;
}
return 0;
}