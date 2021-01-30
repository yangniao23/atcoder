#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
    int n, k;
    cin >> n >> k;
    vector<int> a;
    a.reserve(n);

    rep(i, n) {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }

    sort(a.begin(), a.end());


    auto begin_old = a.begin();
    auto n_begin = upper_bound(a.begin(), a.end(), 1);
    rep(i, n) {
        n_begin = upper_bound(a.begin(), a.end(), n+1);
        int dist = distance(begin_old, n_begin);
        begin_old = n_begin;


    }
    return 0;
}