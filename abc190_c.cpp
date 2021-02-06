#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
const ll mod=1000000007;
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
inline ll powmod(ll x, ll y) {ll res=1; for(ll i=0;i<y;i++){ res=res*x%mod; } return res;}
using namespace std;

signed main(void) {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> dish;
    dish.reserve(n);
    rep(i, n) {
        vector<int> tmp;
        int ai, bi;
        cin >> ai >> bi;
        tmp.push_back(ai);
        tmp.push_back(bi);
        dish.push_back(tmp);
    }

    int k;
    cin >> k;
    vector<vector<int>> human;
    human.reserve(k);
    rep(i, k) {
        vector<int> tmp;
        int ci, di;
        cin >> ci >> di;
        tmp.push_back(ci);
        tmp.push_back(di);
        human.push_back(tmp);
    }
    
    sort(dish.begin(),dish.end(),[](const vector<int> &alpha,const vector<int> &beta){return alpha[0] < beta[0];});
    sort(human.begin(),human.end(),[](const vector<int> &alpha,const vector<int> &beta){return alpha[0] < beta[0];});

    


    return 0;
}