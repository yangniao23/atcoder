#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
    ll n, s, d;
    cin >> n >> s >> d;
    rep(i, n) {
        ll x, y;
        cin >> x >> y;
        if(x<s && y>d) {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
    return 0;
}