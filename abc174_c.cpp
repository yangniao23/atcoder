#include <bits/stdc++.h>
#define ll long long
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
using namespace std;

signed main(void) {
    int a[1000001];
    int k;
    scanf("%d", &k);
    a[1]=7%k;
    for(int i=2;i<=k;i++){
        a[i]=(a[i-1]*10+7)%k;
    }
    for(int i=1;i<=k;i++){
        if(a[i]==0){
            printf("%d\n", i);
            return 0;
        }
    }
    printf("-1\n");
}