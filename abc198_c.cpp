#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
    ll r, x, y;
    cin >> r >> x >> y;
    ll dst = ceil(sqrt(x*x + y*y));
    ll var = roundup(dst, r);
    cout << ceil(var) << '\n';
    return 0;
}