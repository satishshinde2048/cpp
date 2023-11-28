#include<iostream>
using namespace std;
class show{
    int submark[6];
    char name[20];
    public:
    void get(){
        cout<<"enter name:"<<endl;
        cin>>name;
        cout<<"enter subject mark:"<<endl;
        for(int i=0;i<6;i++){
            cin>>submark[i];
        }
    }
    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"mark:"<<endl;
        for(int i=0;i<6;i++){
            cout<<submark[i]<<endl;
        }
    }
};
int main(){
    show s;
    s.get();
    s.display();
}