#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
    ll a;
    double b;
    cin >> a >> b;
    ll c = b*100;
    if(fabs(c/100 - b) > 0.0000000000001) c++;
    cout << (a*c)/100 << '\n';
    return 0;
}