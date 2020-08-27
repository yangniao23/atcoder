#include <bits/stdc++.h>
#define ll long long
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
using namespace std;

signed main(void) {
    ll a[200000];
    ll n, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(i != 0) {
            if(a[i-1] > a[i]) {
                count += (a[i-1] - a[i]);
                a[i] += (a[i-1] - a[i]);
            }
        }
    }
    cout << count << endl;
    return 0;
}