#include <bits/stdc++.h>
using namespace std;
//max heap
void insert(int a[],int n){
    int temp=a[n],i=n;

    while(i/2>=1&&a[i/2]<temp){
         swap(a[i],a[i/2]);
         i=i/2;
    }

}
void print(int a[],int n){
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void create(int a[],int n){
       for(int i=2;i<=n;i++){
        insert(a,i);
    }
}
void Delete(int a[],int n){
    int i=1,j;
      int x=a[1];
    a[1]=a[n];
     j=2*i;
   
    while(j<n){
       
        if(a[j]<a[j+1])
            j=j+1;
        if(a[j]>a[i]){
            swap(a[i],a[j]);
            i=j;
             j=2*j;
        }
        else
        {
            break;
        }
        
    }
    a[n]=x;
    

}
void heapSort(int a[],int n){
    
    for(int i=n;i>1;i--){
        Delete(a,i);
    }
}

int main(){
   freopen("D:/vscode/io/input.txt", "r", stdin);
   freopen("D:/vscode/io/output.txt", "w", stdout);

   int a[]={0,10,20,15,30,40};
   create(a,5);
    print(a,5);
//    Delete(a,5);
//    print(a,5);
//       Delete(a,4);
//    print(a,5);
//       Delete(a,3);
//    print(a,5);
//       Delete(a,2);
//    print(a,5);
   heapSort(a,5);
   print(a,5);

   
   return 0;
}
