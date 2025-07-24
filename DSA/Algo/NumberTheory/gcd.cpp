#include <bits/stdc++.h>
using namespace std;

//naive
//TC- min(A,B)
int GCD(int A, int B) {   
    int m = min(A, B), gcd;
    for(int i = m; i > 0; --i)
        if(A % i == 0 && B % i == 0) {
            gcd = i;
            return gcd;
        }
        return 0;
}

//euclid
//O(log(max(A, B))).
int euclid(int a,int b){
    if(b==0)
    return a;
    else
    {
        return euclid(b,a%b);
    }    
}

int main(){
   freopen("/home/yuvraj/yuvi/DSA_and_coding/io/input.txt", "r", stdin);
   freopen("/home/yuvraj/yuvi/DSA_and_coding/io/output.txt", "w", stdout);
   int a=10,b=13;
   cout<<GCD(a,b)<<endl;
   cout<<euclid(a,b);

   return 0;
}
