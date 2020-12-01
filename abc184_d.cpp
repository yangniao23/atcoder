#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void){
	int a,b,c;
    double dp[101][101][101], ans=0.0;
    
    rep(i, 100) {
        rep(j, 100) {
            rep(k, 100) {
                dp[i][j][k] = 0;
            }
        }
    }

	cin >> a >> b >> c;

    dp[a][b][c] = 1;

    for(int i=a; i<101; ++i) {
        for(int j=b; j<101; ++j) {
            for(int k=c; k<101; ++k) {
                if(i == 100 || j == 100 || k == 100) {
                    ans += dp[i][j][k] * (double)((i+j+k) - (a+b+c));
                    continue;
                }
                dp[i+1][j][k] += dp[i][j][k] * (double)i / (double)(i+j+k);
                dp[i][j+1][k] += dp[i][j][k] * (double)j / (double)(i+j+k);
                dp[i][j][k+1] += dp[i][j][k] * (double)k / (double)(i+j+k);
            }
        }
    }
	printf("%.9f\n",ans);
}