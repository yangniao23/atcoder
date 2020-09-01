#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
using namespace std;

signed main(void) {
    int h, w, k, ans=0;
    cin >> h >> w >> k;
    string c[h];
    rep(i, h) {
        cin >> c[i];
    }
    rep(i, (1<<h)) {  // 2^h回ループを回す
        rep(j, (1<<w)) { // 2^w回ループを回す
            int cnt = 0;
            rep(k, h) {
                if(( i & (i << k)) != 0) continue; // i AND (iをkビット左シフトしたもの)が0でなければcontinue(0なら続行)
                rep(l, w) {
                    if((j & (1<<l)) != 0) continue; // j AND 2^lが0ならば続行
                    if(c[k][l] == '#') cnt++; // c[k][l]が黒なら追加
                }
            }
            if(cnt == k) ans++;
        }
    }

    cout << ans << '\n';
    return 0;
}