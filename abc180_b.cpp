#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;
typedef long double ld;
const ld eps = 1.0e-9; // 許容される誤差

ld mysqrtl(ld x)
{
  ld a = sqrt((double)x); // 近似値
  do {
    a = (a + x/a) / 2.0L;
  } while (fabsl(x - a*a) > eps);
  return a;
}

signed main(void) {
    int n, x[100000], m=0, c=0, u_sq=0;
    cin >> n;
    rep(i, n) {
        cin >> x[i];
    }
    rep(i, n) {
        if(m < abs(x[i])) c = abs(x[i]);
        m += abs(x[i]);
        u_sq += abs(x[i])*abs(x[i]);
    }
    ld u = mysqrtl((ld)u_sq);
    cout << m << '\n';
    printf("%.15Lf\n",u);
    cout << c << '\n';
    return 0;
}