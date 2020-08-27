// 諦めた
/*
#include <bits/stdc++.h>
#define ll long long
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
using namespace std;

char s[100][100];

tuple<int, int> moveright(int ch, int cw) {
    if(s[ch+1][cw] == '.') {
        return moveright(ch, cw);
    } else {
        return forward_as_tuple(ch, cw);
    }
}
signed main(void) {
    int h, w, ch, cw, dh, dw, nh, nw;
    cin >> h >> w;
    cin >> ch >> cw >> dh >> dw;
    for (int i = 0; i < h; i++) {
        for(int j = 0; j<w; j++) {
            cin >> s[i][j];
        }
    }
    
    return 0;
}
*/

//copied by https://atcoder.jp/contests/abc176/submissions/16122222

#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<set>
#include<stack>
#include<queue>
#include<math.h>
using namespace std;
typedef long long ll;
#define int long long
#define double long double
typedef vector<int> VI;
typedef pair<int, int> pii;
typedef vector<pii> VP;
typedef vector<string> VS;
typedef priority_queue<int> PQ;
template<class T>bool chmax(T &a, const T &b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b < a) { a = b; return 1; } return 0; }
#define fore(i,a) for(auto &i:a)
#define REP(i,n) for(int i=0;i<n;i++)
#define eREP(i,n) for(int i=0;i<=n;i++)
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define eFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define SORT(c) sort((c).begin(),(c).end())
#define rSORT(c) sort((c).rbegin(),(c).rend())
#define LB(x,a) lower_bound((x).begin(),(x).end(),(a))
#define UB(x,a) upper_bound((x).begin(),(x).end(),(a))
#define INF 1000000000
#define LLINF 922337204775807
#define mod 1000000007
#define eps 1e-12 
//priority_queue<int,vector<int>, greater<int> > q2;

struct edge { int to, cost; };

int N;
vector<vector<edge>> G;
VI d;
int dx[] = { 0,0,-1,1 };
int dy[] = { -1,1,0,0 };

void dikstra(int s) {
	priority_queue<pii, vector<pii>, greater<pii> >que;
	REP(i, N)d[i] = LLINF;
	d[s] = 0;
	que.push(pii(0, s));
	while (!que.empty()) {
		pii p = que.top();
		que.pop();
		int v = p.second;
		if (d[v] < p.first)continue;
		REP(i, G[v].size()) {
			edge e = G[v][i];
			if (d[e.to] > d[v] + e.cost) {
				d[e.to] = d[v] + e.cost;
				que.push(pii(d[e.to], e.to));
			}
		}
	}
}
signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int H, W; cin >> H >> W;
	int sx, sy, gx, gy;
	cin >> sx >> sy >> gx >> gy;
	sx--, sy--, gx--, gy--;
	VS S(H);
	REP(i, H)cin >> S[i];
	

	N = H * W;
	G.resize(N);
	d.resize(N);
	//cout << N << endl;

	REP(i, H) {
		REP(j, W) {
			if (S[i][j] == '#')continue;

			REP(k, 4) {
				int nx = i + dx[k], ny = j + dy[k];
				if (nx >= 0 && nx < H&&ny >= 0 && ny < W && S[nx][ny] == '.') {

					int now = i * W + j;
					int to = nx * W + ny;

					G[now].push_back((edge) { to, 0 });
					G[to].push_back((edge) { now, 0 });
				}
			}
			//cout << i<<" "<<j << endl;
			for (int nx = i - 2; nx <= i + 2; nx++) {
				for (int ny = j - 2; ny <= j + 2; ny++) {
					if (nx >= 0 && nx < H&&ny >= 0 && ny < W && S[nx][ny] == '.') {
						int now = i * W + j;
						int to = nx * W + ny;

						G[now].push_back((edge) { to, 1 });
						G[to].push_back((edge) { now, 1 });
					}
				}
			}
		}
	}
	//cout << N << endl;
	dikstra(sx*W + sy);
	//cout << "<" << endl;
	if (d[gx*W + gy] != LLINF)cout << d[gx*W + gy] << endl;
	else cout << -1 << endl;

	return 0;
}

