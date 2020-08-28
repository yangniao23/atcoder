//copied from https://atcoder.jp/contests/abc175/editorial/50

#include <bits/stdc++.h>
#define ll long long
#define rep(i,n) for(int i=0;i<n;++i)
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
using namespace std;

signed main(void) {
    int N;
    cin >> N;
    vector<int> vec(N);
    for (int i = 0; i < N; ++i) cin >> vec[i];
    sort(vec.begin(), vec.end());
 
    int ans = 0;
 
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < i; ++j) {
            for (int k = 0; k < j; ++k) {
                if (vec[k] != vec[j] && vec[i] != vec[j] &&
                    vec[k] + vec[j] > vec[i]) {
                    ans++;
                }
            }
        }
    }
 
    cout << ans << endl;
 
    return 0;
}