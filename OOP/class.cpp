#include <bits/stdc++.h>
using namespace std;

class A {
    public:
    int a=4;
};
struct member
{
    int data=5;
    void fun(){
        cout<<data;
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
    freopen("D:/vscode/io/input.txt", "r", stdin);
    freopen("D:/vscode/io/output.txt", "w", stdout);
  A obj;
  cout<<obj.a<<endl;
  B m;
//   m.fun();
  int data[]={1,2};
  func(data);
  cout<<data[1]<<endl;
  
return 0;
}

