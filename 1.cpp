#include<bits/stdc++.h>
using namespace std;

#define druto() ios::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define ff first
#define ss second
#define int long long
#define double long double
#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define deci(x) cout << fixed << setprecision(x);

const int INF = 1e18;
const int mod = 1e9 + 7;

int32_t main(){

   druto();

   int t; cin>>t;
   while(t--){
      int n, m; cin>>n>>m;

      vector<int>a(n);
      vector<int>b(m);

      for(int i = 0; i<n; i++) cin>>a[i];
      for(int i = 0; i<m; i++) cin>>b[i];

      if(n >= (2 * m)){
         sort(all(a));
         sort(all(b));

         bool f = true;

         for(int i = 0; i<m; i++){
            if(b[i] < a[i] || b[i] > a[n - m + i]){
               f = false;
               break;
            }
         }

         if(f) cout<<"YES\n";
         else cout<<"NO\n";
      }else cout<<"NO\n";
   }

}