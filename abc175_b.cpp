#include <bits/stdc++.h>
#define ll long long
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
using namespace std;

signed main(void) {
    int n, l[100], count=0;
    
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &l[i]);
    }
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-1; j++) {
            if( (l[j] != l[j+1])) {
                if((l[j] + l[j+1]) > l[i] && l[i] > (l[j] && l[j+1])) {
                    count++;
                }
            }
        }
    }
    cout << count << '\n';
    return 0;
}