#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
    ll n, m, t, bat;
    cin >> n >> m >> t;
    bat = n;
    ll a[m+2], b[m+1];
    a[0] = 0;
    b[0] = 0;
    a[m+1] = t;
    rep(i, m) cin >> a[i+1] >> b[i+1];

    rep(i, m+1) {
        if((bat - (a[i+1] - b[i])) > 0) {
            bat -= (a[i+1] - b[i]);
            bat += (b[i+1] - a[i+1]);
            if(bat > n) bat = n;
        } else {
            cout << "No" << '\n';
            return 0;
        }
    }
    cout << "Yes" << '\n';
    return 0;
}