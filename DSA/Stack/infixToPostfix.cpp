#include <bits/stdc++.h>
using namespace std;

#define fo(i,z,n) for(int i=z;i<n;i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
#define gcd(x,y) __gcd(x,y)
#define endl "\n"
typedef vector<int> vi;
typedef vector<ll> vl;
int const mod = 1e9 + 7;
template <typename T>
void debug(T v[],int m){ fo(i,0,m) cout<<v[i]<<" "; cout<<endl;}
template <typename T>
void debug(vector<T> v){ T m=v.size(); fo(i,0,m) cout<<v[i]<<" "; cout<<endl;}
ll power(ll x, ll n){ ll result = 1; while (n > 0){if (n % 2 == 1) result = (result * x)%mod; x = (x * x)%mod; n = n / 2;}return result;}

int pre(char c)
{
    if(c=='-'||c=='+'){
        return 1;
    }
    else if(c=='/'||c=='*')
    return 2;
    else if(c=='^')
    return 3;
    else 
    return 0;

}

string infiToPost(string infi)
{
    string post="";
    stack<char> st;
    int n=infi.size();
    fo(i,0,n)
    { 
        // deb(i);
        // cout<<infi[i]<<endl;
        if(infi[i]==')')
        {
            while(st.top()!='(')
            {
                post+= st.top();
                st.pop();
            }
            st.pop();
        }
        else if(pre(infi[i])==0)
        {
            if(infi[i]=='(')
            {
             st.push(infi[i]);
            }   
            else 
            post+= infi[i];
        }
        else{
            if(st.empty()||(pre(st.top()))<pre(infi[i]))
            {
                st.push(infi[i]);
            }
            else{
                while(!st.empty()&&(pre(st.top()))>=pre(infi[i]))
                {
                    post+=st.top();
                    st.pop();
                }
                st.push(infi[i]);
            }
        }
        
    }
      while(!st.empty())
     {
        post+=st.top();
        st.pop();
    }
    // cout<<post;
    return post;
}

int operations(int a,int b,char c)
{
    if(c=='-')
    return a-b;
    else if(c=='+')
    return a+b;
    else if(c=='*')
    return a*b;
    else if(c=='/')
    return a/b;
    else
    return power(a,b);
}

int evalPost(string s)
{
    int n=s.size();
    stack<int> st;

    for(int i=0;i<n;i++)
    {
        if(s[i]>47&&s[i]<58)
        {
            st.push(s[i]-48);
        }
        else
        {
            int a,b;
            b=st.top();
            st.pop();
            a=st.top();
            st.pop();
            int res=operations(a,b,s[i]) ;
            st.push(res);
        }
        
    }
    return st.top();
}

int main(){
#ifndef ONLINE_JUDGE 
   freopen("D:/vscode/io/input.txt", "r", stdin);
   freopen("D:/vscode/io/output.txt", "w", stdout);
#endif
   ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t=1;
    // cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<evalPost(infiToPost(s));
    }

return 0;
}
