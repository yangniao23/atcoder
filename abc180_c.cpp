#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
    unsigned ll n;
    vector<ll> ans;
    cin >> n;
    for(ll i=1; i*i <= n; ++i) {
        if(n%i == 0) {
            ans.push_back(i);
            if(n != i*i) ans.push_back(n/i);
        }
    }
    sort(ans.begin(), ans.end());
    for(ll x: ans) cout << x << '\n';
    return 0;
}