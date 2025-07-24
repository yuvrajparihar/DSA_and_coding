#include <bits/stdc++.h>
using namespace std;

void insertionSort(int a[],int n){
   int j,x;
    for(int i=1;i<n;i++){
        j=i-1;
        x=a[i];
        while(j>-1&&a[j]>x){
            a[j+1]=a[j];
            j--;
        }
      a[j+1]=x;
    }
}

int main(){
   freopen("/home/yuvraj/yuvi/DSA_and_coding/io/input.txt", "r", stdin);
   freopen("/home/yuvraj/yuvi/DSA_and_coding/io/output.txt", "w", stdout);

   int a[]={10,5,8,2,4,1},n=6;
   insertionSort(a,n);
   for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
   }

   return 0;

}
