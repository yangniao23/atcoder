#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
    ll n, k;
    int cnt = 0, ans =0;
    cin >> n >> k;
    ll T[n][n];
    rep(i, n) {
        rep(j, n) {
            cin >> T[i][j];
        }
    }
    
    rep(w, n) {
        int h =0;
        ans = 0;
        int new_w = w;
        while(h < n) {
            if(new_w >= n) new_w = 0;
            ans += T[h][new_w];
            new_w++;
            h++;
        }
        if(ans == k) cnt++;
    }
    

    cout << cnt << '\n';
    return 0;
}