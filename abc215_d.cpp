#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

bool IsPrime(int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            // 素数ではない
            return false;
        }
    }

    // 素数である
    return true;
}

signed main(void) {
    ll n, m, k;
    ll a[1000000];
    vector<ll> ans;

    cin >> n >> m;
    rep(i, n) cin >> a[i];

    sort(a, a + SIZE_OF_ARRAY(a), std::greater<>());

    rep(i,n) {
        if(! IsPrime(a[i])) continue;

        for(int j=1; j<=sqrt(n); ++j) {
            if(! IsPrime(j)) continue;
            else ans.push_back(j);
        }
    }
    return 0;
}