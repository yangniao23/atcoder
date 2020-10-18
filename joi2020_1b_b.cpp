#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
    int n;
    string s;
    cin >> n >> s;
    rep(i, n) {
        if(s[i] == 'I') {
            for(int j=i+1; j<n; ++j) {
                if(s[j] == 'O') {
                    for(int k=j+1; k<n; ++k) {
                        if(s[k] == 'I') {
                            cout << "Yes" <<'\n';
                            return 0;
                        }
                    }
                }
            }
        }
    }

    cout << "No" << '\n';
    return 0;
}