// #include<iostream>
// using namespace std;
// int main(){
//     int *p,n;
//     cout<<"enter the data size : "<<endl;
//     cin>>n;
//     p=new int[n];
//     for(int i=0;i<n;i++){
//         cin>>p[i];
//     }
//     cout<<"enter value are : "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<p[i]<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int **p,nr,nc;
//     cout<<"enter the number of row and column : "<<endl;
//     cin>>nr>>nc;
//     p=new int*[nr];
//     for(int i=0;i<nr;i++){
//     p[nr]=new int[nc];
//     }
//     cout<<"enter"<<nr*nc<<"value : "<<endl;
//     for(int i=0;i<nr;i++){
//         for(int j=0;j<nc;j++){
//             cin>>p[i][j];
//         }
//     }
//     cout<<"enter value are : "<<endl;
//      for(int i=0;i<nr;i++){
//         for(int j=0;j<nc;j++){
//             cout<<p[i][j]<<endl;
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// class test{
//     int a;
//     int b;
//     public:
//     void get(){
//         cout<<"enter value of a and b : "<<endl;
//         cin>>a>>b;
//     }
//     void display(){
//         cout<<"a : "<<a<<endl;
//         cout<<"b : "<<b<<endl;
//     }
// };
// int main(){
//     test t;
//     t.get();
//     t.display();
// }

// #include<iostream>
// using namespace std;
// class test{
//     int a;
//     int b;
//     public:
//     void get(int x=12,int y=14){
//         a=x;
//         b=y;
//     }
//     void display(){
//         cout<<"a : "<<a<<endl;
//         cout<<"b : "<<b<<endl;
//     }
// };
// int main(){
//     test t;
//     t.get(13,16);
//     t.display();
//     t.get();
//     t.display();
// }

// #include<iostream>
// using namespace std;
// class test{
//     int a;
//     int b;
//     public:
//     void get(int x=12,int y=14){
//         a=x;
//         b=y;
//     }
//     void display(){
//         cout<<"a : "<<a<<endl;
//         cout<<"b : "<<b<<endl;
//     }
// int  big(){
//     if(a>b){
//     return a;
//     }
//     else{
//         return b;
//     }
// }
// int sum(){
//     return a+b;
// }
// };
// int main(){
//     test t;
//     t.get(13,16);
//     t.display();
//     int max=t.big();
//     cout<<max<<endl;
//     int add=t.sum();
//     cout<<add;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=100 ,&b=a;
//     cout<<a<<b;
//     b=200;
//      cout<<a<<b;
//      a=300;
//       cout<<a<<b;
// }

// #include<iostream>
// using namespace std;
// void swap(int &a,int &b){
// int temp=a;
//     a=b;
//     b=temp;
// }
// int main(){
//     int a=10,b=30;
//     swap(a,b);
//     cout<<a<<endl;
//     cout<<b;
// }


// #include<iostream>
// using namespace std;
// void swap(int *a,int *b){
// int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     int a=10,b=30;
//     swap(&a,&b);
//     cout<<a<<endl;
//     cout<<b;
// }


// #include<iostream>
// using namespace std;
// class test{
//     int a;
//     int b;
//     public:
//     void get(int x=12,int y=14){
//         a=x;
//         b=y;
//     }
//     void display(){
//         cout<<"a : "<<a<<endl;
//         cout<<"b : "<<b<<endl;
//     }
//     test sum(test t2){
//         test t3;
//         t3.a=a+t2.a;
//         t3.b=b+t2.b;
//         return t3;
//     }

// };
// int main(){
//     test t3,t1,t2;
//     t1.get(13,16);
//     t2.get(24,35);
//    t3=t1.sum(t2);
//    t3.display();
// }

// #include<iostream>
// using namespace std;
// class test{
//     int a;
//     int b;
    
//     void get(int x=12,int y=14){
//         a=x;
//         b=y;
//     }
//     public:
//     void display(){
//         get(23,34);
//         cout<<"a : "<<a<<endl;
//         cout<<"b : "<<b<<endl;
//     }
// };
// int main(){
//     test t;
  
//     t.display();
    
// }

// #include<iostream>
// using namespace std;
// class test{
//     int a;
//     int b;
    
//     void get(int a=12,int b=14){
//         this->a=a;
//         this->b=b;
//     }
//     public:
//     void display(){
//         get(  );
//         cout<<"a : "<<a<<endl;
//         cout<<"b : "<<b<<endl;
//     }
// };
// int main(){
//     test t;
  
//     t.display();
    
// }

// #include<iostream>
// using namespace std;
// class test{
//     int a,b;
//     public:
//   test(){
//     a=20;
//     b=30;
//   }
//   void display(){
//     cout<<a<<endl<<b;
//   }
// };
// int main(){
//     test t;
//     t.display();
// }

// #include<iostream>
// using namespace std;
// class test{
//     int a,b;
//     public:
//   test(int x=10,int y=50){
//     a=x;
//     b=y;
//   }
//   void display(){
//     cout<<a<<endl<<b;
//   }
// };
// int main(){
//     test t1(30,20);
//     t1.display();
//     test t2(12);
//     t2.display();
// }

// #include<iostream>
// using namespace std;
// class test{
//     int a,b;
//     public:
//   test(int x=10,int y=50){
//     a=x;
//     b=y;
//   }
//   test(test &old){

//     a=old.a;
//     b=old.b;
//   }
//   void display(){
//     cout<<a<<endl<<b;
//   }
// };
// int main(){
//     test t1(30,20);
//     t1.display();
//     test t2(12);
//     t2.display();
//     test t3(t1);
//     t3.display();
// }

// #include<iostream>
// using namespace std;
// class test{
//     int a,b;
//     public:
//   test(){
//     a=20;
//     b=30;
//   }
//   ~test(){
//     cout<<a<<endl<<b;
//   }
// };
// int main(){
//     test t;
    
// }

// #include<iostream>
// using namespace std;
// class test{
//     int a=10,b=20;
//     public:
// friend void sum(test);
// };
// void sum(test t){
//     int c=t.a+t.b;
//     cout<<c;
// }
// int main(){
//     test t;
//     sum(t);
// }

// #include<iostream>
// using namespace std;
// class test{
//     int a=10,b=20;
//     public:
// friend class child;
// };
// class child{
//     public:
//     void display(test t){
//         cout<<t.a<<endl;
//         cout<<t.b;
//     }

// };
// int main(){
//     test t;
//     child c;
//     c.display(t);
// }

// #include<iostream>
// using namespace std;
// class test{
//  static int a,b;
//  public:
//  static void get(){
//     cin>>a>>b;
//     cout<<a<<endl<<b;
//  }
// };
// int test::a;
// int test::b;
// int main(){
//     test t;
//     t.get();
// }

// #include<iostream>
// using namespace std;
// class test{
// int a=100,b=200;
//  public:
//   void display() const{
 
//     cout<<a<<endl<<b;
//  }
// };

// int main(){
//     test t;
//     t.display();
// }

// #include<iostream>
// using namespace std;
// class test{
//  int a;
//  public:
//  void get(){
//     cin>>a;
//  }
//  void operator ==(test t2){
//     if(a==t2.a){
//         cout<<"equal";
//     }
//     else{
//         cout<<"not equal";
//     }
//  }
// };
// int main(){
//     test t1,t2;
//     t1.get();
//     t2.get();
//     t1==t2;
// }

#include<iostream>
using namespace std;
class test{
 int a,b,c;
 public:
 void sum(int x,int y){
    a=x;
    b=y;
    cout<<a+b<<endl;
 }
 void sum(int x,int y,int z){
    a=x;
    b=y;
    c=z;
    cout<<a+b+c;
 }
 };
int main(){
    test t;
    t.sum(10,20);
    t.sum(10,20,30);
} 
