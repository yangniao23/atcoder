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
    int start = 0, end=n.length();
    rep(i, n.length() - 1) {
        if(n[i] != '0') {
            start = (i != 0? i-1:0);
            break;
        }
    }
    for(int i=n.length() - 1; i>=0; --i) {
        if(n[i] != '0') {
            end = i+1;
            break;
        }
    }
    string sub = n.substr(start, end-start);
    rep(i, (sub.length() - 1) / 2) {
        if(sub[i] != sub[sub.length() - 1 - i]) {
            cout << "No" << '\n';
            return 0;
        }
    }
    cout << "Yes" << '\n';
    return 0;
}