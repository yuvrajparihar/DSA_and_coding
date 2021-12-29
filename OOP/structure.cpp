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
    freopen("D:/vscode/io/input.txt", "r", stdin);
    freopen("D:/vscode/io/output.txt", "w", stdout);
 
//   B m;
//   m.fun();
  member m(10);
  cout<<m.data;
return 0;
}

