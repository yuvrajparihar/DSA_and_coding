#include <bits/stdc++.h>
using namespace std;


int main(){
   freopen("D:/vscode/io/input.txt", "r", stdin);
   freopen("D:/vscode/io/output.txt", "w", stdout);
  int t;
  cin>>t;
  while (t--)
  { 
	  int n,k;
	  cin>>n>>k;
	  string str="";
   int i=0;
  while(i<n){
	  str+="a";
	  i++;
	  if(i<n){
		str+="b";
	  i++;  
	  }
	   if(i<n){
		str+="c";
	  i++;  
	  }
  }
  cout<<str;
  }
  
    
   return 0;
}
