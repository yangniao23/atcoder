#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
    ll n, a[100], a_max=0, count=0, o_count=0, gcd;
    cin >> n;
    rep(i, n) {
        cin >> a[i];
        a_max = max(a_max, a[i]);

    }
    
    for(ll j=2; j<= a_max; ++j) {
        o_count = count;
        count = 0;
        rep(i, n) {
            if(a[i] % j == 0) count++;
        }
        count = max(count, o_count);
        if(count > o_count) gcd = j;
    }

    cout << gcd << '\n';
    return 0;
}