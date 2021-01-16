#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
    __uint128_t l;
    cin >> l;
    cout << (__uint128_t)((l-1)*(l-2)*(l-3)*(l-4)*(l-5)*(l-6)*(l-7)*(l-8)*(l-9)*(l-10)*(l-11))/(__uint128_t)(11*10*9*8*7*6*5*4*3*2*1) << '\n';
    return 0;
}