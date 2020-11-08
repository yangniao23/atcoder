#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
    string n;
    cin >> n;
    if(stoll(n) % 3 == 0) {
        cout << 0 << '\n';
        return 0;
    }

    for(int i=1; i<n.size(); ++i) {
        rep(j, n.size()) {
            string tmp = n;
            tmp.erase(j, i);
            if(stoll(tmp) % 3 == 0) {
                cout << i << '\n';
                return 0;
            }
        }
    }

    cout << -1 << '\n';
    return 0;
}