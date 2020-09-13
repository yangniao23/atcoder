#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
using namespace std;

signed main(void) {
    ll a, b, c, d, x, y;
    cin >> a >> b >> c >> d;
    if(a >= 0 && c >= 0) x = b, y = d;
    if(b <= 0 && d >= 0) x = a, y = d;
    
    cout << x*y << '\n';
    return 0;
}