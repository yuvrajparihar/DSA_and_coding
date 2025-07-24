#include <bits/stdc++.h>
using namespace std;


struct member
{  
    // private:
    int data=5;
    member(int d){
        data= d;
    }
    
};
struct B: member
{
    void fun(){
        cout<<data;
    }
};

void func(int *data){
    data[1]=7;
}

int main(){
    freopen("/home/yuvraj/yuvi/DSA_and_coding/io/input.txt", "r", stdin);
    freopen("/home/yuvraj/yuvi/DSA_and_coding/io/output.txt", "w", stdout);
 
//   B m;
//   m.fun();
  member m(10);
  cout<<m.data;
return 0;
}

