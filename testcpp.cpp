#include <bits/stdc++.h>
#define ll long long
using namespace std;
int find(int parent[],int i){
        while(parent[i]!=i){
            i=parent[i];
        }
        return i;
    }
void Union(int parent[],int x,int y){
    int xset=find(parent,x);
    int yset=find(parent,y);
    parent[xset]=yset;
}
 
void solve(){
    ll m,n,x,y,x1,y1,sum=0,dx=1,dy=1;
    cin>>m>>n>>x>>y>>x1>>y1;
    while(x!=x1 and y!=y1){
        sum++;
        x+=dx;
        y+=dy;
        if(x==0 or x==m)dx=-dx;
        if(y==0 or y==n)dy=-dy;
    }
    cout<<sum<<endl;
}
int main() {
     cin.tie(0)->sync_with_stdio(0); 
    cin.exceptions(cin.failbit);
	int t;
	cin>>t; 
	while(t--)solve(); 
	return 0;
}