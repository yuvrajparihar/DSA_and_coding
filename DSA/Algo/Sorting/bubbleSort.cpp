#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int a[],int n){
    int flag;
    for(int i=0;i<n-1;i++){
        flag=0;
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
}

int main(){
   freopen("D:/vscode/io/input.txt", "r", stdin);
   freopen("D:/vscode/io/output.txt", "w", stdout);

   int a[]={10,5,8,2,4,1},n=6;
   bubbleSort(a,n);
   for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
   }

   return 0;

}
