#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
    ll r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    ll r = r2 - r1;
    ll c = c2 - c1;
    int ans = 3;
    if(r == 0 && c == 0) ans = 0;
    else if(r == c || r == -c || abs(r) + abs(c) <= 3) ans = 1;
    else if( (r1+r2+c1+c2) % 2 == 0 || abs(r) + abs(c) <= 6 || abs(r+c) <= 3 || abs(r-c) <= 3) ans = 2;
    cout << ans << '\n';
    return 0;
}