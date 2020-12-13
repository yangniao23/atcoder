#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;
/*
int _lenght(int a, int n, string s) {
    int count=0;
    for(int i=a; i<n; ++i) {
        if(s[i] == '#') return count+1;
        count++;
    }
    return count;
}
*/
signed main(void) {
    int a, n, count=0, s_c;
    string s;
    cin >> n >> a >> s;
    /*
    rep(i, n) 
    _lenght(a, n, s);
    */
   rep(i, n) {
       if(s[i] == '#') s_c++;
   }
   while(1) {
       s_c =0;
       rep(i, n) {
       if(s[i] == '#') s_c++;
       }
       if(s_c == 0) {break; }
       for(int i=a-1; i<n;++i) {
           if(s[i] == '#') {
               count++;
               s[i] = '.';
               a=n-i-1;
               reverse(begin(s), end(s));
               break;
           }
           if(i==n-1) {
               count++;
               a=n-i+1;
               reverse(begin(s), end(s));
               count++;
               break;
           }
           count++;
           cout << count << '\n';
       }
    
   }
    cout << count << '\n';
    return 0;
}