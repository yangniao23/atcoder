#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
    ll n; 
    ll m, a_distance = 1000000000;
    vector<ll> a;
    a.push_back(1);
    cin >> n >> m;
    rep(i, m) {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }

    if(a[m-1] != n)a.push_back(n);
    sort(a.begin(), a.end());
    cout << a.size() << '\n';
    rep(i, a.size()-2-1) {
        a_distance = min(a_distance, (a[i+1] - a[i]));
        
        
    }

    // k = a_dis
    cout << roundup(n - a.size()+2, a_distance) << '\n';
    return 0;
}