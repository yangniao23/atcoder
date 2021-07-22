#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
	int n, a[1001];
	ll sum = 0;
	cin >> n;
	rep(i,n) cin >> a[i];

	rep(i,n) {
		if(a[i]<=10) continue;

		sum += a[i] - 10;
	}

	cout << sum << '\n';
	return 0;
}