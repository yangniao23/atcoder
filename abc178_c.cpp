#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long

const ll mod=1000000007;

inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}


using namespace std;


signed main(void) {
    int n;
    cin >>  n;
    ll ans = (powmod(10, n) - powmod(9, n) - powmod(9, n) + powmod(8, n))%mod;
    ans=(ans+mod)%mod; // ansが負の値になることを予期する

    cout << ans << '\n';
    return 0;
}