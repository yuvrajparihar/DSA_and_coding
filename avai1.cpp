#include <bits/stdc++.h>
using namespace std;

#define fo(i, z, n) for (int i = z; i < n; i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define all(x) x.begin(), x.end()
#define pb push_back
// #define mp make_pair
typedef vector<int> vi;
typedef vector<ll> vl;

int main()
{
   freopen("D:/vscode/io/input.txt", "r", stdin);
   freopen("D:/vscode/io/output.txt", "w", stdout);

   int t;
   cin >> t;
   for(int k=1;k<=t;k++)
   {
      ll n;
      cin >> n;
      vl v(n);
      fo(i, 0, n)
         cin >>v[i];
      ll ans=0;
      for(int i=0;i<n-1;i++){
         ll temp=v[i],x=i;
         for(int j=i;j<n;j++){
            if(v[j]<temp){
               temp=v[j];
               x=j;
            }
         }
         ans+= x-i+1;
         ll a=i,b=x;
         while(a<b){
            swap(v[a],v[b]);
            a++;
            b--;
         }
         
      }
      cout<<"Case #"<<k<<": "<<ans<<endl;
   }
   return 0;
}












// #include <bits/stdc++.h>
// using namespace std;

// struct streets
// {
//     int start;
//     int end;
//     string name;
//     int time;
// };

// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("D:/vscode/io/input.txt", "r", stdin);
//     freopen("D:/vscode/io/output.txt", "w", stdout);
// #endif
//     ios_base::sync_with_stdio(false), cin.tie(NULL);

//     int duration, intersec, numstreet, cars, f;
//     cin >> duration >> intersec >> numstreet >> cars >> f;
//     streets street[numstreet];
//     for (int i = 0; i < numstreet; i++)
//     {
//         cin >> street[i].start >> street[i].end >> street[i].name >> street[i].time;
//     }
//     // vector<int> v(cars);
//     vector<vector<string>> strtName(cars,vector<string>(1000));
//     for (int i = 0; i < cars; i++)
//     {

//           int x;
//           cin>>x;
//         // cin>>strtName[i];
        
//         for (int j = 0; j < x; i++)
//         {
          
//             cin >> strtName[i][j];
            
//         }
//     }
//     // cout << cars;
//     // for(int i=0;i<cars;i++){

//     //     cout<<v[i]<<" ";

//     // }
//      for(int i=0;i<cars;i++){
//         cout<<strtName[i][0];
//     cout<<endl;
//     }
//     return 0;
// }
