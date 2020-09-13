#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
using namespace std;

signed main(void) {
    int n;
    ll sum = 0;
    cin >>  n;
    if(n < 2) {
        cout << 0;
        return 0;
    }
    if(n == 2) {
        cout << 2;
        return 0;
    }

    int lenght = n - 2;
    rep(i, lenght) {
        sum = 20*(3 *(i+1));
        sum = sum % 1000000007;
    }
    cout << sum;
    return 0;
}