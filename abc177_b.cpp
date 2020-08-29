#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
using namespace std;

signed main(void) {
    string s, t;
    cin >> s >> t;
    if(s.find(t) != string::npos){
        cout << "0\n"; return 0;
    }
    for (int i = t.size() -1; i >= 0; i--)
    {
        for(int j=0;j<(t.size()-i);++j) {
            if(s.find(t.substr(j, i+j)) >= j && s.find(t.substr(j, i+j)) != string::npos){
                 cout << (t.size()-i) <<'\n'; return 0;
            }
        }
    }
    
    cout << t.size() << '\n';
    return 0;
}