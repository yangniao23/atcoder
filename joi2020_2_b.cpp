#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

int _return_fly(string s, int n) {
    int count=0;
    while(is_sorted(s.begin(), s.end())) {
        rep(i, n) {
            if(s[0] == s[i] && i!=0 && i!=1 || i == n-1) {
                reverse(s.begin(), s.begin()+i);
                count++;
            }
        }
    }
    return count;
}

signed main(void) {
    int n, q;
    cin >> n >> q;
    string s[q];
    rep(i, q) {
        cin >> s[i];
    }

    rep(i, q) {
        cout << _return_fly(s[i], n) << '\n';
    }
    
    return 0;
}