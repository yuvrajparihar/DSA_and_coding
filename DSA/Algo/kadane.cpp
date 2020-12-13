#include <bits/stdc++.h>
using namespace std;

//sum of contiguous subarray within a one-dimensional
//array of numbers which has the largest sum

int main(){
     freopen("D:/OneDrive/vscode/io/input.txt", "r", stdin);
    freopen("D:/OneDrive/vscode/io/output.txt", "w", stdout);
   int max=INT16_MIN,sum=0;
   int a[]={-2, -3, -4, -1, -2, -1, -5, -3};
   for(auto x: a){
       sum+=x;
       if(sum>max)
        max=sum;
        if(sum<0){
            sum=0;
        }
   }
   cout<<max;
}