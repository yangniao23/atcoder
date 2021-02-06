#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
    ll N, count=0;
    int flug=0;

    cin >> N;
    for(int a=1; a<=N; ++a) {
       // if((N%2 == 1 && a%2 == 0) || (N%2 == 0 && a%2 == 1)) {
        //    break;
        //}
        rep(m, a+1) {
            if( ((a-m+1)*(a+m))/2 == N) {
                count++;
                break;
            }
        }
    }

    cout << count*2 << '\n';
    return 0;
}