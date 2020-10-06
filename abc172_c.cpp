#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
    ll n, m, k, a_c, b_c, sum, count;
    a_c = b_c = sum = count =0;
    cin >> n >> m >> k;
    ll A[n], B[m];
    rep(i, n) cin >> A[i];
    rep(i, m) cin >> B[i];
    
    rep(i, n+m) {
        static ll tmp;
        tmp = min(A[a_c], B[b_c]);
        (tmp == A[a_c])? a_c++ : b_c++;
        if((a_c > n && b_c > m)) {
            break;
        }
        if((sum + tmp) > k) {
            break;
        } else {
            sum += tmp;
            count++;
        }
    }
    cout << count << '\n';
    return 0;
}