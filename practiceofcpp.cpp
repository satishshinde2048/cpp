// #include<iostream>
// using namespace std;
// class text{
//     int a=10;
//     int b=30;
//     int c;
//     public:
//     void sum(){
//     c=a+b;
//     cout<<"add : "<<c;
//    }
// };
// int main(){
//     text t;
//     t.sum();
// }

// #include<iostream>
// class text{
//     int a=10;
//     int b=30;
//     int c;
//     public:
//     void sum(){
//     c=a+b;
//     std::cout<<"add : "<<c;
//    }
// };
// int main(){
//     text t;
//     t.sum();
// }

// #include<iostream>
// using namespace std;
// class text{
//     int a=10;
//     int b=30;
//     int c;
//     public:
//     void sum(){
//     c=a+b;
//     cout<<"add : "<<c;
//    }
// }t;
// int main(){
//     t.sum();
// }

// #include<iostream>
// using namespace std;
// class text{
//     int a=10;
//     int b=30;
//     int c;
//     public:
//     void sum();
// };
// void text::sum(){
//     c=a+b;
//     cout<<"add : "<<c;
//    }
// int main(){
//     text t;
//     t.sum();
// }

// #include<iostream>
// using namespace std;
// void swap(int &a,int &b){
// int temp=a;
//     a=b;
//     b=temp;
// }
// int main(){
//     int a=10;
//     int b=5;
//     swap(a,b);
//     cout<<"a:"<<a<<endl;
//     cout<<"b:"<<b;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int b=20;
//   int temp=a;
//     a=b;
//     b=temp;
//     cout<<"a:"<<a;
//      cout<<"b:"<<b;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     int b;
//     cout<<"enter value of a and b:"<<endl;
//     cin>>a>>b;
//    b=a-b;
//    a=a-b;
//    b=a+b;
//     cout<<"a:"<<a<<endl;
//      cout<<"b:"<<b;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int b=20,c;
//    c=a+b;
//     cout<<"c:"<<c;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int b=20,c;
//    while(b!=0){
//     b--;
//     a++;
// }
// cout<<"sum:"<<a;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int b=20,c;
//    c=a-b;
//     cout<<"c:"<<c;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int b=20,c;
//    while(b!=0){
//     b--;
//     a--;
// }
// cout<<"sum:"<<a;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int b=20,c;
//    c=a*b;
//     cout<<"c:"<<c;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int b=20;
//     int sum=0;
//    while(b!=0){
//     sum+=a;
//     b--;
// }
// cout<<"sum:"<<sum;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=45;
//     int b=20,c;
//    c=a%b;
//     cout<<"c:"<<c;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=45;
//     int b=20,c;
//     c=b;
//     int count=0;
//     while(c<=a){
//       c+=b;
//       count++;
//     }
//     int d=a-(b*count);
//     cout<<d;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=12;
//     int b=3,c;
//    c=a/b;
//     cout<<"c:"<<c;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=12;
//     int b=3,c;
//     float div=b;
//     float count=0;
//     while(div<=a){
//     div+=b;
//     count++;
//     }
//     cout<<"c:"<<count;
// }

// #include<iostream>
// using namespace std;
// int main(){
// float sum;
// float n=10;
// sum=n*(n+1)/2;
// cout<<sum;
// }

// #include<iostream>
// using namespace std;
// int main(){
// for(int i=1;i<=5;i++){
// for(int s=1;s<=5-i;s++){
//     cout<<" ";
// }
// for(int j=1;j<=(i*2)-1;j++){
//     cout<<"*";
// }
// cout<<endl;
// }
// }

// #include<iostream>
// using namespace std;
// struct text{
//     int a=10;
//     int b=30;
//     int c;
// };
// int main(){
//    struct text t;
//    t.c=t.a+t.b;
//      cout<<"add : "<<t.c;
// }

// #include<iostream>
// using namespace std;
// class text{
//     int a=10;
//     int b=30;
//     int c;
// };
// int main(){
//     text t;
//    t.c=t.a+t.b;
//      cout<<"add : "<<t.c;
// }
// #include<iostream>
// using namespace std;
// class text{
//     int a=10;
//     int b=30;
//     int c;
//     public:
//     void sum(){
//     c=a+b;
//     cout<<"add : "<<c;
//    }
// }t;
// int main(){
   
//     t.sum();
// }

//   #include<iostream>
//   #include<iomanip>
//   using namespace std;
// int main(){
//     cout<<setfill('*');
//     cout<<setw(5)<<1<<endl;
//     cout<<setw(5)<<10<<endl;
//      cout<<setfill(' ');
//     cout<<setw(5)<<100<<endl;
//     cout<<setprecision(4)<<3.1423<<endl;
//     cout<<setw(10)<<setiosflags(ios::left)<<"ramesh"<<endl;
//     cout<<setw(10)<<setiosflags(ios::left)<<"tejas";
// }

//   #include<iostream>
//   using namespace std;
// int main(){
//     int *p;
//     float *q;
//     char *r;
//     p=new int(10);
//     q=new float(2.4);
//     r=new char('r');
//     cout<<p<<endl;
//     cout<<q<<endl;
//     cout<<r<<endl;
//     cout<<*p;
// }

//   #include<iostream>
//   using namespace std;
// int main(){
//     int n,*p;
//     cout<<"enter size of array :"<<endl;
//     cin>>n;
//     p=new int[n];
//     cout<<"enter the value : "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>p[i];
//     }
//     cout<<"value are : "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<p[i]<<endl;
//     }
// }

// #include<iostream>
//   using namespace std;
// int main(){
//     int nr,nc,**p;
//     cout<<"enter nr & nc :"<<endl;
//     cin>>nr>>nc;
//     p=new int*[nr];
//     // cout<<"enter the value : "<<endl;
//     for(int i=0;i<nr;i++)
//       p[nr]=new int[nc];
//       cout<<"enter"<<nr*nc<<"value : "<<endl;
//       for(int i=0;i<nr;i++){
//        for(int j=0;j<nc;j++){
//          cin>>p[i][j];
//        }
//       }
//     cout<<"value are : "<<endl;
//     for(int i=0;i<nr;i++){
//         for(int j=0;j<nc;j++){
//          cout<<p[i][j]<<endl;
//        }
//     }
// }


//   #include<iostream>
//   using namespace std;
// int main(){
//    int x=10;
//    int *p=&x;
//    int **q=&p;
//    int ***r=&q;
//    cout<<x<<endl;
//    cout<<p<<endl;
//    cout<<*p<<endl;
//    cout<<q<<endl;
//    cout<<*q<<endl;
//    cout<<**q<<endl;
//    cout<<r<<endl;
//    cout<<*r<<endl;
//    cout<<**r<<endl;
//    cout<<***r<<endl;
// }

// #include<iostream>
//   using namespace std;
//   void sum(int a,int b){
//     cout<<a+b;
//   }
// int main(){
//    sum(20,20);

// }

// #include<iostream>
// using namespace std;
// class text{
//     int a;
//     int b;
//     int c;
//     public:
//     void sum(int x,int y){
//         a=x;
//        b=y;
//        c=x+y;
//     cout<<"sum: "<<c;
//    }
// };
// int main(){
//     text t;
//     t.sum(10,50);
// }

// #include<iostream>
// using namespace std;
// class text{
//     int a;
//     int b;
//     int c;
//     public:
//     void sum(int a,int b){
//         this->a=a;
//         this->b=b;
//    }
// int big(){
//  if(a>b){
//    return a;
//   }
//   else{ 
//     return b;
//   }
// }
// };
// int main(){
//     text t;
//     t.sum(10,50);
//     int max=t.big();
//     cout<<"max number is : "<<max<<endl;
//     }


// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int &b=a;
//   cout<<a<<b;
//  a=200;
//   cout<<a<<b; 
// }

// #include<iostream>
// using namespace std;
// void swap(int &a,int &b){
//     int temp=a;
//     a=b;
//     b=temp;
// }
// int main(){
//  int a=10;
//  int b=20;
//  swap(a,b);
//  cout<<"a : "<<a<<endl;
//  cout<<"b : "<<b;
// }

// #include<iostream>
// using namespace std;
// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//  int a=10;
//  int b=20;
//  swap(&a,&b);
//  cout<<"a : "<<a<<endl;
//  cout<<"b : "<<b;
// }

// #include<iostream>
// using namespace std;
// class text{
//     int a;
//     int b;
//     int c;
//     public:
//     void sum(int x=40,int y=30){
//         a=x;
//        b=y;
//        c=x+y;
//     cout<<"sum: "<<c<<endl;
//    }
// };
// int main(){
//     text t;
//     t.sum(10);
//      t.sum();
// }

// #include<iostream>
// using namespace std;
// class text{
//     int a;
//     public:
//     void display(){
//         cout<<"enter a : "<<endl;
//         cin>>a;
//     }
//     int big(text);
// };
// int text::big(text t2){
//     if(a>t2.a){
//         cout<<"a is big";
//     }
//     else{
//         cout<<"t2.a is big";
//     }
// }
// int main(){
//     text t1,t2;
//     t1.display();
//     t2.display();
//     t1.big(t2);
// }

// #include<iostream>
// using namespace std;
// class text{
//     int a,b;
//     public:
//     void get(){
//         cout<<"enter a &  b : "<<endl;
//         cin>>a>>b;
//     }
//     void display(){
//         cout<<"a : "<<a<<endl;
//         cout<<"b : "<<b;
//     }
//     text sum(text);
// };
//  text text::sum(text t2){
//     text t3;
//    t3.a=a+t2.a;
//    t3.b=b+t2.b;
//    return t3;
// }
// int main(){
//     text t1,t2,t3;
//     t1.get();
//     t2.get();
//    t3=t1.sum(t2);
//    t3.display();
// }

// 

//  #include<iostream>
//  #include<iomanip>
// using namespace std;
// class text{
//     char name[20];
//     int id;
//     int mark[5];
//     public:
//     void get(){
//         cout<<"enter name & id : "<<endl;
//         cin>>name>>id;
//         cout<<"enter subject mark : "<<endl;
//         for(int i=0;i<5;i++){
//             cin>>mark[i];
//         }
//     }
//         void display(){
//             cout<<"name      "<<"id      "<<"physics  chemistry  biologt  mathematics  marathi"<<endl;
//             cout<<name<<"      ";
//             cout<<id<<"      ";
//             for(int i=0;i<5;i++){
//             cout<<mark[i]<<"        ";
//         } 
//         }
//     };
//     int main(){
//         text t;
//         t.get();
//         t.display();
//     }

//  #include<iostream>
//  #include<iomanip>
// using namespace std;
// class text{
//     char name[20];
//     int id;
//     int mark[5];
//     public:
//     void get(){
//         cout<<"enter name & id : "<<endl;
//         cin>>name>>id;
//         cout<<"enter subject mark : "<<endl;
//         for(int i=0;i<5;i++){
//             cin>>mark[i];
//         }
//     }
//         void display(){
//             cout<<"name      "<<"id      "<<"physics  chemistry  biologt  mathematics  marathi"<<endl;
//             cout<<name<<"      ";
//             cout<<id<<"      ";
//             for(int i=0;i<5;i++){
//             cout<<mark[i]<<"        ";
//         } 
//         }
//     };
//     int main(){
//         text t[50];
//         int n;
//         cin>>n;
//         for(int i=0;i<n;i++){
//         t[n].get();
//         t[n].display();
//         cout<<endl;
//     }
//     }

//  #include<iostream>
//  #include<iomanip>
// using namespace std;
//     class text{
//         int a;
//         int b;
//         public:
//         text(){
//             a=30;
//             b=40;
//         }
//         void display(){
//             cout<<"a : "<<a<<endl;
//               cout<<"b : "<<b<<endl;
//         }
//     };
//     int main(){
//         text t;
//         t.display();
//     }

//     #include<iostream>
// using namespace std;
//     class text{
//         int a;
//         int b;
//         public:
//         text(int a,int b){
//             this->a=a;
//             this->b=b;
//         }
//         void display(){
//             cout<<"a : "<<a<<endl;
//               cout<<"b : "<<b<<endl;
//         }
//     };
//     int main(){
//         text s(30,40);
//         s.display();
//     }

//  #include<iostream>
// using namespace std;
//     class text{
//         int a;
//         int b;
//         int c=0;
//         public:
//         text(int a,int b){
//             this->a=a;
//             this->b=b;
//         }
//         text(int a,int b,int c){
//             this->a=a;
//             this->b=b;
//             this->c=c;
//         }
//         void display(){
//             cout<<"a : "<<a<<endl;
//               cout<<"b : "<<b<<endl;
//               cout<<"c: "<<c<<endl;
//         }
//     };
//     int main(){
//         text s1(30,40);
//         s1.display();
//         text s2(30,40,50);
//          s2.display();
//     }


//  #include<iostream>
// using namespace std;
//     class text{
//         int a;
//         int b;
//         public:
//         text(int a,int b){
//             this->a=a;
//             this->b=b;
//         }
//        text(text &old){
//         a=old.a;
//         b=old.b;
//        }
//         void display(){
//             cout<<"a : "<<a<<endl;
//               cout<<"b : "<<b<<endl;
//         }
//     };
//     int main(){
//         text s1(30,40);
//         s1.display();
//         text s2(s1);
//          s2.display();
//     }

//     #include<iostream>
// using namespace std;
//     class text{
//         int a;
//         int b;
//         public:
//         text(int a,int b){
//             this->a=a;
//             this->b=b;
//         }
//         ~text(){
//             cout<<"a : "<<a<<endl;
//               cout<<"b : "<<b<<endl;
//         }
//     };
//     int main(){
//         text s(30,40);
//     }

// #include<iostream>
// using namespace std;
// class text{
//     int a=10;
//     int b=20;
//     int d=30;
//     int c;
//     public:
//     void sum(int x,int y){
//     c=x+y;
//     cout<<"add : "<<c;
//    }
//    void sum(int x,int y,int z){
//     c=x+y+z;
//     cout<<"add : "<<c;
//    }
// };
// int main(){
//     text t1,t2;
//     t1.sum(100,200);
//     t2.sum(100,200,300);
// }


// #include<iostream>
// using namespace std;
// class text{
//     int a;
//     int b;
//     friend void display(text);
// };
// void display(text t){
//     cout<<"enter value of a and b : "<<endl;
//     cin>>t.a>>t.b;
//     cout<<"a : "<<t.a<<endl;
//     cout<<"b : "<<t.b<<endl;
// }
// int main(){
//  text t;
// display(t);
// }

// #include<iostream>
// using namespace std;
// class text2;
// class text1{
//     int a;
    
//     public:
//     void display(){
//     cout<<"enter value of a : "<<endl;
//     cin>>a;[]
//    }
//     friend void big(text1,text2);
// };
// class text2{
//     int b;
    
//     public:
//     void display(){
//     cout<<"enter value of b : "<<endl;
//     cin>>b;
//    }
//     friend void big(text1,text2);
// };
// void big(text1 t1,text2 t2){
//     if(t1.a>t2.b){
//         cout<<"t1.a is big"<<endl;
//     }
//     else{
//         cout<<"t2.b is big"<<endl;
//     }
// }
// int main(){
//  text1 t1;
//  text2 t2;
// t1.display();
// t2.display();
// big(t1,t2);
// }

//  #include<iostream>
// using namespace std;
// class text1{
//     int a,b;
//     public:
//     friend class text2;
//     void get(){
//         cout<<"enter value of a and b : "<<endl;
//         cin>>a>>b;
//     }
// };
// class text2{
//     public:
//     void display(text1 t1){
//         cout<<"a : "<<t1.a<<endl;
//         cout<<"b : "<<t1.b<<endl;
//     }
// };
// int main(){
//     text1 t1;
//     text2 t2;
//     t1.get();
//     t2.display(t1);
// }

// #include<iostream>
// using namespace std;
// class author{
//     char aname[20];
//     public:
//     friend class book;
    
// };
// class book{
//     char bname[20];
//     int price;
//     public:
//     author a;
//      void get(){
//         cout<<"enter author name and book name and price : "<<endl;
//         cin>>a.aname>>bname>>price;
//     }
//     void display(){
//         cout<<"author name : "<<a.aname<<endl;
//         cout<<"book name : "<<bname<<endl;
//         cout<<"book price : "<<price<<endl;
//     }
// };
// int main(){
//     author a;;
//     book b;;
//     b.get();
//     b.display();
// }

//  #include<iostream>
// using namespace std;
// class author{
//     char aname[20];
//     public:
//     friend class book;
    
// };
// class book{
//     char bname[20];
//     int price;
//     public:
//     author a;
//      void get(){
//         cout<<"enter author name and book name and price : "<<endl;
//         cin>>a.aname>>bname>>price;
//     }
//     void display(){
//         cout<<"author name : "<<a.aname<<endl;
//         cout<<"book name : "<<bname<<endl;
//         cout<<"book price : "<<price<<endl;
//     }
// };
// int main(){
//     author a;;
//     book b;;
//     b.get();
//     b.display();
// }

//  #include<iostream>
// using namespace std;
// class text1{
//     public:
//     static void show(int a,int b){
//    if(a>b){
//     cout<<"a is big"<<endl;
//    }
//    else if(a==b){
//     cout<<"a si equal to b "<<endl;
//    }
//    else{
//     cout<<"b is big"<<endl;
//    }
//    }
//    };
// int main(){
//    text1 t1;
//    text1::show(30,20);
// }

// #include<iostream>
// using namespace std;
// class text1{
//     static int a,b;
//     public:
//     static void show(){
//     cout<<"enter a And b : "<<endl;
//     cin>>a>>b;    
//    if(a>b){
//     cout<<"a is big"<<endl;
//    }
//    else if(a==b){
//     cout<<"a si equal to b "<<endl;
//    }
//    else{
//     cout<<"b is big"<<endl;
//    }
//    }
//    };
//    int text1::a;
//    int text1::b;
// int main(){
//    text1 t1;
//    t1.show();
// }

// #include<iostream>
// using namespace std;
// class text1{
//      int a,b;
//      public:
//      void get(){
//       a=10;
//       b=20;
//      }
// void display() const{
// //   a=30;
// //   b=40;
//   cout<<"a : "<<a<<endl;
//   cout<<"b : "<<b<<endl;
// }
//    };
// int main(){
//    text1 t1;
//    t1.get();
//    t1.display();
// }

// #include<iostream>
// using namespace std;
// class text1{
//      const int a=10,b=20;
//      public:
   
// void display() {
//   cout<<"a : "<<a<<endl;
//   cout<<"b : "<<b<<endl;
// }
//    };
// int main(){
//    text1 t1;
//    t1.display();
// }

// #include<iostream>
// using namespace std;
// class text1{
//       int a;
//      public:
// void get() {
//    cout<<"enter a value of a : "<<endl; 
//    cin>>a;
//   cout<<"a : "<<a<<endl;
 
// }
// void operator ==(text1 t2){
//    if(a==t2.a){
//       cout<<"object are equal"<<endl;
//    }
//    else{
//       cout<<"object are  not equal"<<endl;
//    }
// }
//    };
// int main(){
//    text1 t1,t2;
//    t1.get();
//    t2.get();
//    t1==t2;
// }

// #include<iostream>
// using namespace std;
// class text1{
//       int a,b;
//      public:
// void get() {
//    cout<<"enter a value of a & b: "<<endl; 
//    cin>>a>>b;
//   cout<<"a : "<<a<<endl;
//  cout<<"b : "<<b<<endl;
// }
// void display(){
//     cout<<"a : "<<a<<endl;
//  cout<<"b : "<<b<<endl;
// }
// text1 operator +(text1 t2){
//    text1 t3;
//    t3.a=a+t2.a;
//    t3.b=b+t2.b;
//    return t3;
// }
//    };
// int main(){
//    text1 t1,t2,t3;
//    t1.get();
//    t2.get();
//    t3=t1+t2;
//    t3.display();
// }

// 

// #include<iostream>
// using namespace std;
// class base{
//    int id;
//    char name[20];
//     public:
//      void getb(){
//       cout<<"enter name and id : "<<endl;
//       cin>>name>>id;
//     }
//     void displayb(){
//       cout<<"name : "<<name<<endl;
//       cout<<"id : "<<id<<endl;
//     }
//    };
//    class child:public base{
//       int height,weight;
//       public:
//    void getc(){
//       cout<<"enter height and weight : "<<endl;
//       cin>>height>>weight;
//     }
//     void displayc(){
//       cout<<"height : "<<height<<endl;
//       cout<<"weight : "<<weight<<endl;
//     }
//    };
// int main(){
//    child c;
//    c.getb();
//    c.getc();
//    c.displayb();
//    c.displayc();
  
// }

// #include<iostream>
// using namespace std;
// class base{
//    int id;
//    char name[20];
//     public:
//      void getb(){
//       cout<<"enter name and id : "<<endl;
//       cin>>name>>id;
//     }
//     void displayb(){
//       cout<<"name : "<<name<<endl;
//       cout<<"id : "<<id<<endl;
//     }
//    };
//    class child:private base{
//       int height,weight;
//       public:
//    void getc(){
//       getb();
//       cout<<"enter height and weight : "<<endl;
//       cin>>height>>weight;
//     }
//     void displayc(){
//       displayb();
//       cout<<"height : "<<height<<endl;
//       cout<<"weight : "<<weight<<endl;
//     }
//    };
// int main(){
//    child c;
   
//    c.getc();
  
//    c.displayc();
  
// }

// #include<iostream>
// using namespace std;
// class base{
//    int id;
//    char name[20];
//     public:
//      void getb(){
//       cout<<"enter name and id : "<<endl;
//       cin>>name>>id;
//     }
//     void displayb(){
//       cout<<"name : "<<name<<endl;
//       cout<<"id : "<<id<<endl;
//     }
//    };
//    class child1:public base{
//       int height,weight;
//       public:
//    void getc(){
//       cout<<"enter height and weight : "<<endl;
//       cin>>height>>weight;
//     }
//     void displayc(){
//       cout<<"height : "<<height<<endl;
//       cout<<"weight : "<<weight<<endl;
//     }
//    };
//   class child2:public child1{
//    int mark;
//       public:
//    void get(){
//       cout<<"enter mark : "<<endl;
//       cin>>mark;
//     }
//     void display(){
//       cout<<"mark : "<<mark<<endl;
//     }
//   };
// int main(){
//    child2 c2;
//    c2.getb();
//    c2.getc();
//    c2.displayb();
//    c2.displayc();
//    c2.get();
//    c2.display();
// }

// #include<iostream>
// using namespace std;
// class base{
//    int id;
//    char name[20];
//     public:
//      void getb(){
//       cout<<"enter name and id : "<<endl;
//       cin>>name>>id;
//     }
//     void displayb(){
//       cout<<"name : "<<name<<endl;
//       cout<<"id : "<<id<<endl;
//     }
//    };
//    class child1:public base{
//       int height,weight;
//       public:
//    void getc(){
//       cout<<"enter height and weight : "<<endl;
//       cin>>height>>weight;
//     }
//     void displayc(){
//       cout<<"height : "<<height<<endl;
//       cout<<"weight : "<<weight<<endl;
//     }
//    };
//   class child2:public base{
//    int mark;
//       public:
//    void get(){
//       cout<<"enter mark : "<<endl;
//       cin>>mark;
//     }
//     void display(){
//       cout<<"mark : "<<mark<<endl;
//     }
//   };
// int main(){
//    child2 c2;
//    child1 c1;
//    c2.getb();
//    c1.getc();
//    c2.displayb();
//    c1.displayc();
//    c2.get();
//    c2.display();
// }

// #include<iostream>
// using namespace std;
// class base1{
//    int id;
//    char name[20];
//     public:
//      void getb(){
//       cout<<"enter name and id : "<<endl;
//       cin>>name>>id;
//     }
//     void displayb(){
//       cout<<"name : "<<name<<endl;
//       cout<<"id : "<<id<<endl;
//     }
//    };
//    class base2{
//       int height,weight;
//       public:
//    void getc(){
//       cout<<"enter height and weight : "<<endl;
//       cin>>height>>weight;
//     }
//    void displayc(){
//       cout<<"height : "<<height<<endl;
//       cout<<"weight : "<<weight<<endl;
//     }
//    };
//   class child:public base1,public base2{
//    int mark;
//       public:
//    void get(){
//       cout<<"enter mark : "<<endl;
//       cin>>mark;
//     }
//     void display(){
//       cout<<"mark : "<<mark<<endl;
//     }
//   };
// int main(){
//    child c2;
//    c2.getb();
//    c2.getc();
//    c2.displayb();
//    c2.displayc();
//    c2.get();
//    c2.display();
// }

// #include<iostream>
// using namespace std;
// class base{
//    public:
//    base(){
//       cout<<"base class constructor"<<endl;
//    }
// };
   
//   class child:public base{
//     public:
//    child(){
//        cout<<"child class constructor"<<endl;
//    }
//   };
// int main(){
//    child c;
// }

// 


// #include<iostream>
// using namespace std;
// class base{
//    int id;

//     public:
//     base(){

//     }
//      base(int id){
//      this->id=id;
    
//     }
//     void displayb(){
     
//       cout<<"id : "<<id<<endl;
//     }
//    };
//    class child:public base{
//       int height,weight;
//       public:
//    child(int id,int height,int weight):base(id){
//     this-> height=height;
//      this->weight=weight;
//     }
//     void displayc(){
//       cout<<"height : "<<height<<endl;
//       cout<<"weight : "<<weight<<endl;
//     }
//    };
// int main(){
//    child c(12,160,67);
//    c.displayb();
//    c.displayc();
  
// }

// #include<iostream>
// using namespace std;
// class text{
//    int id;
//    int height;
//     public:
//     text(int x){
//       id=x;
//     }
//     text(int x,int h1):text(x){
//       height=h1;
//     }
//     void display(){
//       cout<<"id : "<<id<<endl;
//       cout<<"height : "<<height;
//     }
//    };
// int main(){
//    text t1(14,23);
//   t1.display();
// }

// #include<iostream>
// using namespace std;
// int x=200;
// void fun(){
// class text{
//  int x;
//  public:
//  void get(){
//    x=100;
//    cout<<"x : "<<x<<endl;
//    cout<<"x : "<<::x<<endl;
//  }
// }t;
// t.get();
// }
// int main(){
//    fun();
// }

//  #include<iostream>
// using namespace std;
// void sum(int a,int b){
//    cout<<a+b<<endl;
// }
// void sum(double a,double b){
//    cout<<a+b;
// }
// int main(){
//    sum(10,20);
//    sum(12.3,14.5);
// }

//  #include<iostream>
// using namespace std;
// template <class t>
// t sum(t a,t b){
//    cout<<a+b<<endl;
// }
// int main(){
//    sum(10,20);
//    sum(12.3,14.5);
// }

//  #include<iostream>
// using namespace std;
// template <class t1,class t2>
// float sum(t1 a,t2 b){
//    cout<<a+b<<endl;
// }
// int main(){
//    sum(10,20.12);
//    sum(12.3,14.5);
//     sum(12,14.5);
// }

//  #include<iostream>
// using namespace std;
// template <class t>
// t sum(t a[],t size){
//   t temp=0;
//   for(int i=0;i<size;i++){
//    temp+=a[i];
//   }
//   cout<<temp;
// }
// int main(){
//    int a[5]={10,20,30,40,50};
//    sum(a,5);
  
// }

//  #include<iostream>
// using namespace std;
// template <class t>
// class text{
//    t a,b;
//    public:
//    void get(){
//       cin>>a>>b;
//    }
//    t sum();
// };
// template <class t>
// t text<t>::sum(){
//       return a+b;
//    }
// int main(){
//    text <float>p;
//    p.get();
//    cout<<p.sum();
// }

//  #include<iostream>
// using namespace std;
// template <class t>
// t sum(t a,t b){
//    cout<<a+b<<endl;
// }
// template <class t>
// t sum(t a,t b,t c){
//    cout<<a+b+c<<endl;
// }
// int main(){
//    sum(10,20);
//    sum(12.3,14.5,23.4);
// }

// #include<iostream>
// using namespace std;
// int main(){
//    try{
//       int a,b;
//       cout<<"enter value of a &b : "<<endl;
//       cin>>a>>b;
//       if(b==0) throw 10;
//       cout<<"division : "<<a/b;
//    }
//    catch(int x){
//       cout<<"division is not possible"<<endl;
//    }
// }

// #include<iostream>
// using namespace std;
// int main(){
//    try{
//       int a,b;
//       cout<<"enter value of a &b : "<<endl;
//       cin>>a>>b;
//       if(b==0) throw "raj";
//       cout<<"division : "<<a/b;
//    }
//    catch(...){
//       cout<<"division is not possible"<<endl;
//    }
// }


// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//    ofstream File("data.txt");
//    File<<"my name is satish shinde"<<endl;
//    File.close();
//    ifstream RFile("data.txt");
//    string str;
//    while(getline(RFile,str)){
//       cout<<str;
//    }
//    RFile.close();
// }

// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//    int id;
//    char name[20];
//    cout<<"enter name And id : "<<endl;
//    cin>>name>>id;
//    ofstream WriteFile("data.txt");
//    WriteFile<<"name : "<<name<<endl;
//     WriteFile<<"id : "<<id<<endl;
//    WriteFile.close();
//    ifstream RFile("data.txt");
//    string str;
//    while(getline(RFile,str)){
//       cout<<str<<endl;
//    }
//    RFile.close();
// }

//coading practice>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// #include<iostream>
// using namespace std;
// int main(){
// int a=10,b=20;
// while(b>0){
//    b--;
//    a++;
// }
// cout<<a;
// }


// #include<iostream>
// using namespace std;
// int main(){
// int a=30,b=20;
// while(b>0){
//    b--;
//    a--;
// }
// cout<<a;
// }


// #include<iostream>
// using namespace std;
// int main(){
// int a=10,b=20;
// int temp=0;
// while(a>0){
//  temp+=b;
//  a--;
// }
// cout<<temp;
// }

// #include<iostream>
// using namespace std;
// int main(){
// float a=10,b=4;
// int count=0;
// int c=b;
// while(c<=a){
//    c+=b;
//    count++;
// }
// cout<<count;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int a=37,b=20;
// int c=a/b;
// int remainder=a-(b*c);
// cout<<remainder;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int temp=1;
// for(int i=10;i>0;i--){
//    temp*=i;
// }
// cout<<temp;
// }

// #include<iostream>
// using namespace std;
// int facto(int n){
//    if(n<1){
//       return 1;
//    }
//    return n*facto(n-1);
// }
// int main(){
//    int m=5;
//    cout<<facto(m);
// }

// #include<iostream>
// using namespace std;
// int main(){
// int t1=0,t2=1,t3;
// cout<<t1;
// cout<<t2;
// for(int i=2;i<=5;i++){
//    t3=t1+t2;
//    cout<<t3;
//    t1=t2;
//    t2=t3;
// }
// }


// #include<iostream>
// using namespace std;
// int fibo(int n){
//    if(n<2){
//       return n;
//    }
//    return fibo(n-1)+fibo(n-2);
// }
// int main(){
// int m=7;
// for(int i=0;i<=m;i++){
//    cout<<fibo(i)<<endl;
// }
// }

