#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
    ll n, m;
    cin >> n >> m;
    ll t[n], a[m], b[m], c[m];
    rep(i,n) cin >> t[i];
    rep(i, m) cin >> a[i] >> b[i] >> c[i];

    rep(i, m) {
        if(t[b[i]] == 1 && (t[c[i]] == 2 || t[c[i]] == 3) && t[a[i]] == 1) {
            cout << -1 << '\n';
            return 0;
        }
    }
    
    return 0;
}