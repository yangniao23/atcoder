#include <bits/stdc++.h>
#define ll long long
using namespace std;

signed main(void) {
    ll x, n, t;
    cin >> n >> x >> t;
    cout << (((n + (x -1)) / x)* t) << endl;
    return 0;
}