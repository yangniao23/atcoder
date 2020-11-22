#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;


signed main(void) {
    int a, b, c;
    cin >> a >> b >> c;
    
    int a_c =  100-a;
    int b_c = 100-b;
    int c_c = 100-c;

    double val = (double)(a_c*a + b_c*b + c_c*c) / (double)(a+b+c);

    //cout << val << '\n';
    printf("%.9lf\n", val);

    return 0;
}