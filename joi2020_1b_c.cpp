#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
    int n, A[100], B[101];
    B[0] = 0;
    cin >> n;
    rep(i, n) {
        cin >> A[i];
    }
    int tmp=0, index;
    rep(i, n) {
        tmp=max(tmp, A[i]);
        if(tmp == A[i]) index=i;
    }
    rep(i, n) {
        B[i+1] = A[i] + B[i];
    }

    cout << B[index] << '\n' << B[n] - B[index+1] << '\n';
    return 0;
}