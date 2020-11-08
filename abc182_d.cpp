#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
    ll n, a[200000], pos=0, m_pos=0;
    cin >> n;
    rep(i, n) {
        cin >> a[i];
    }
    rep(i, n) {
        for(int j=0; j<=i; ++j) {
            m_pos = max(m_pos, pos+a[j]);
            pos += a[j];
        }
    }
    
    cout << m_pos << '\n';
    return 0;
}