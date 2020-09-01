#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
using namespace std;

signed main(void) {
    int h, w, k, white=0, black=0;
    int c[6][6];
    cin >> h >> w >> k;
    rep(i, h) {
        rep(j, w) {
            cin >> c[i][j];
            if(c[i][j] == '-') {
                white++;
            } else if(c[i][j] == '#') {
                black++;
            }
        }
    }
    return 0;
}