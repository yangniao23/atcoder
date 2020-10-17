#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;
typedef long double ld;

signed main(void) {
    cout << fixed << setprecision(15);
    ll n, x[100000], m=0, c=0, u_sq=0;
    cin >> n;
    rep(i, n) {
        cin >> x[i];
    }
    rep(i, n) {
        c = max(c, abs(x[i]));
        m += abs(x[i]);
        u_sq += abs(x[i])*abs(x[i]);
    }
    cout << m << '\n' << sqrt(u_sq) <<'\n' << c << '\n';
    return 0;
}