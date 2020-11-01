#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

ll _sum(ll a, ll b) {
    ll sum = 0;
    if((a+b) % 2 == 0) {
        ll len =b-a+1;
        sum = (a+b)*(len / 2) + (a+b)/2;
    } else {
        ll len = b-a+1;
        sum = (a+b)*(len /2);
    }
    return sum;
}

signed main(void) {
    ll n, A[100000], B[100000];
    ll sum = 0;
    cin >> n;
    rep(i, n) {
        cin >> A[i] >> B[i];
    }
    rep(i, n) {
        sum += _sum(A[i], B[i]);
    }
    
    cout << sum << '\n';
    return 0;
}