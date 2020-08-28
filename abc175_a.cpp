#include <bits/stdc++.h>
#define ll long long
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
using namespace std;

signed main() {
 int ans=0,R=0;
  string s;
  cin>>s;
  for(int i=0;i<3;i++)
    if(s[i]=='R') {
        ans++;
        if(R<ans) R=ans; 
    }
    else ans=0;
  
  cout<<R << '\n';
}