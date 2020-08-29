#include <iostream>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
using namespace std;

signed main(void) {
    long n, A[200000];
    long sum;
    cin >> n;
    for(int i=0;i<n;++i) scanf("%ld", &A[i]);
    for(int i=0;i<n;++i) {
        for(int j=0; j<i;++j) {
            sum += ((A[j] % 1000000007)*(A[i] % 1000000007));
            sum = sum % 1000000007;
        }
    }
     

    cout << sum << "\n";
    return 0;
}