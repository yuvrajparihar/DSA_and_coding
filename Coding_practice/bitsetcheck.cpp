#include <bits/stdc++.h>
using namespace std;
//Counting Number Of Set Bits of a number

int main(){
   freopen("/home/yuvraj/yuvi/DSA_and_coding/io/input.txt", "r", stdin);
   freopen("/home/yuvraj/yuvi/DSA_and_coding/io/output.txt", "w", stdout);
    int n=71,cnt=0;

    while(n){
        if(n&1!=0){
            cnt++;
        }
        n=n>>1;
    }
   
//method-2
//  while(n>0){
//      cnt++;
//      n= n& (n-1);
//  }

   cout<<cnt;
   return 0;
}
