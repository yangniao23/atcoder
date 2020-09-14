#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
using namespace std;

signed main(void) {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max(max(a*c, a*d), max(b*c, b*d)) << '\n';
    return 0;
}