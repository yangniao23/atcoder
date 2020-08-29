#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
using namespace std;

signed main(void) {
    int d, t, s;
    cin >> d >> t >> s;
    (roundup(d, s) <= t)?cout << "Yes\n":cout << "No\n";
    return 0;
}