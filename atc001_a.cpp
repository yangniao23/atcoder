#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

//左上に原点があって，x軸が水平右向き，y軸が鉛直下向きにあるとき， d[0] => 下，d[1] => 右，d[2] => 上，d[3] => 左

bool seen[510][510]; // seen[h][w] := マス (h, w) が検知済みかどうか
int H, W;
char c[500][500];

void dfs(int h, int w) {
    seen[h][w] = true;

    // 四方向を探索
    for (int dir = 0; dir < 4; ++dir) {
        int nh = h + dx[dir];
        int nw = w + dy[dir];

        // 場外アウトしたり、移動先が壁の場合はスルー
        if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
        if (c[nh][nw] == '#') continue;

        // 移動先が探索済みの場合
        if (seen[nh][nw]) continue;

        // 再帰的に探索
        dfs(nh, nw);
    }
}

signed main(void) {

    cin >> H >> W;
    rep(i, H) rep(j, W) cin >> c[i][j];

    int sh, sw, gh, gw;
    for (int h = 0; h < H; ++h) {
        for (int w = 0; w < W; ++w) {
            if (c[h][w] == 's') sh = h, sw = w;
            if (c[h][w] == 'g') gh = h, gw = w;
        }
    }

    // 探索開始
    memset(seen, 0, sizeof(seen)); // seen 配列全体を false に初期化
    dfs(sh, sw);

    // 結果
    if (seen[gh][gw]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}