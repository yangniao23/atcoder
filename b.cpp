#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

char s[500][500];
bool reached[500][500];
int h, w;

int search(int x, int y, char before_state, int i) {
    if ((x < 0 || x >= w) || (y < 0 || y >= h)) return -1;
    if (reached[x][y]) return -1;
    char state =  s[x][y];
    if (state == before_state) return -1;

    if (x == w-1 && y == h-1) return i+1;
    
    reached[x][y] = true;
    i++;

    search(x-1, y, state, i);
    search(x+1, y, state, i);
    search(x, y-1, state, i);
    search(x, y+1, state, i);
}

signed main(void) {
    cin >> h >> w;

    rep(i,h) rep(j,w) cin >> s[j][i];

    cout << search(0, 0, '?', 0) << '\n';

    return 0;
}