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

   int n; cin>>n;

   vector<int>v(n);

   for(int i = 0; i<n; i++) cin>>v[i];

   sort(all(v));

   int l = 0, r = n - 1;

   // for(auto &u : v) cout<<u<<" ";
   // cout<<endl;

   if(n == 1){
      cout<<v[0]<<endl;
      return 0;
   }

   vector<int>a(n);

   for(int i = 0; i<n - 1; i+=2){
      a[i] = v[l];
      a[i + 1] = v[r];

      l++;
      r--;
   }

   // cout<<n/2<<endl;

   if(n % 2 != 0){
      a[n - 1] = v[r];
   }

   for(auto &u : a) cout<<u<<" ";
   cout<<endl;
   

}