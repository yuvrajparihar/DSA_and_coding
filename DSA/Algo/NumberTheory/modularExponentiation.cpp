#include <bits/stdc++.h>
using namespace std;

int rbinaryExponentiation(int x,int n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return rbinaryExponentiation(x*x,n/2);
    else                             //n is odd
        return x*rbinaryExponentiation(x*x,(n-1)/2);
}
int binaryExponentiation(int x,int n)
{
    int result=1;
    while(n>0)
    {
        if(n % 2 ==1)
            result=result * x;
        x=x*x;
        n=n/2;
    }
    return result;
}

int rmodularExponentiation(int x,int n,int M)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return rmodularExponentiation((x*x)%M,n/2,M);
    else                             //n is odd
        return (x*rmodularExponentiation((x*x)%M,(n-1)/2,M))%M;

}

int modularExponentiation(int x,int n,int M)
{
    int result=1;
    while(n>0)
    {
        if(n % 2 ==1)
            result=(result * x)%M;
        x=(x*x)%M;
        n=n/2;
    }
    return result;
}

int main(){
   freopen("/home/yuvraj/yuvi/DSA_and_coding/io/input.txt", "r", stdin);
   freopen("/home/yuvraj/yuvi/DSA_and_coding/io/output.txt", "w", stdout);

   cout<<binaryExponentiation(2,10);

}
