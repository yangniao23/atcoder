#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
    ll n, max_v=0, max_a=0;
    cin >> n;
    ll A[n], B[n];
    rep(i, n) cin >> A[i];
    rep(i,n) cin >> B[i];

    max_v = A[0]*B[0];

    rep(i,n) {
        max_a = max(max_a, A[i]);
        max_v = max(max_v, max_a*B[i]);
        cout << max_v << '\n';
    }
    return 0;
}