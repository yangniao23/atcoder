#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
    int n;
    ll count = 0;
    cin >> n;
    for(int i=1; i<n;++i) {
        for(int j=1;j<i+1;++j) {
            if(i*j < n){
                count++;
            }else{ 
                break;
            }
            if(i != j) count++;
        }
    }
    cout << count << '\n';
    return 0;
}

    