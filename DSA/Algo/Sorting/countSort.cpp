#include <bits/stdc++.h>
using namespace std;

void stableCountSort(int arr[],int n){
    int m= *max_element(arr,arr+n);
   vector<int> v(m+1,0);
   
   for(int i=0;i<n;i++){
      v[arr[i]]++;
   }

   for(int i=1;i<m+1;i++){
      v[i]+=v[i-1];
   }
   vector<int> sorted(n);

   int i=0;
   while(i<n){
     sorted[--v[arr[i]]]= arr[i];
     i++;
   }

    for(int i=0;i<n;i++){
       cout<<sorted[i]<<" ";
   }
   
}

void countSort(int arr[], int n){
   int m= *max_element(arr,arr+n);
   vector<int> v(m+1,0);

   for(int i=0;i<n;i++){
      v[arr[i]]++;
   }

   int i=0,j=0;
   while(i<m+1){
      if(v[i]>0){
         arr[j++]=i;
         v[i]--;
      }
      else{
         i++;
      }
   }


}

int main(){
#ifndef ONLINE_JUDGE 
   freopen("/home/yuvraj/yuvi/DSA_and_coding/io/input.txt", "r", stdin);
   freopen("/home/yuvraj/yuvi/DSA_and_coding/io/output.txt", "w", stdout);
#endif
    int a[]={10,5,8,2,4,1,2},n=7;
   
   // countSort(a,n);
   // stableCountSort(a,n);
   for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
   }

   return 0;

}
