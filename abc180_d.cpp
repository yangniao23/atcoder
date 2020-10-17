#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
    ll x, y, a, b, s=0;
    cin >> x >> y >> a >> b;
    while((double)a*x<=2e18 && a*x<=x+b && a*x<y) {
        x*=a;
        s++;
    }
    cout << s+(y-1-x)/b << '\n';
    return 0;
}