#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
    string s;
    int k;
    char tmp;
    cin >> s >> k;

    sort(s.begin(), s.end());

    tmp = *(s.end());

    for (int i=s.length(); i>=0; --i) {
        if(tmp > s[i]) {
            s[i+1] = s[i];
            s[i] = tmp;
        }
    }
    return 0;
}