#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
    int n, d1[100], d2[100];
    cin >> n;
    rep(i,n) {
        cin >> d1[i] >> d2[i];
    }
    rep(i,n){
        if(i < n-2) {
            if(d1[i] == d2[i] && d1[i+1] == d2[i+1] && d1[i+2] == d2[i+2]) {
                cout << "Yes";
                return 0;
            }
        }
    }

    cout << "No" ;
    return 0;
}