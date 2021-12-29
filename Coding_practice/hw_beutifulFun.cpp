#include <bits/stdc++.h>

using namespace std;

int beautifulFunction(long long n){
    long long ans=0;
     if(n%10==0){
            ans++;
        }
    while(1){
        if(n<10){
            ans+=9;
            break;
        }
        if(n%10==0){
            while(n%10==0){
                n=n/10;
            }
             if(n<10){
            ans+=9;
            break;
        }
           else{
                ans++;
            n++;
           }
        }
        else{
             ans++;
              n++;
        }
    }
    return ans;
}
int main(){
    long long n;
    cin>>n;
    long long result;
    result = beautifulFunction(n);
    cout<<result;
    return 0;
}