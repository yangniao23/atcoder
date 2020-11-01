#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
    int n, x[100], y[100];
    cin >> n;
    rep(i, n) {
        cin >> x[i] >> y[i];
    }
    rep(i, n) {
        rep(j, n) {
            rep(k, n) {
                if(i != j && j != k && i != k) {
                    if((x[i] -x[j])*(y[k] - y[j]) - (x[k] - x[j])*(y[i] - y[j]) == 0) {
                        cout << "Yes" << '\n';
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No" << '\n';
    return 0;
}