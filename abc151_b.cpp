// 8/26
#include <iostream>
using namespace std;

int main(void) {
    int n, k, m;
    int pointsum = 0;
    int a[100];
    cin >> n;
    cin >> k;
    cin >> m;
    for(int i=0;i<n-1;++i) {
        cin >> a[i];
        pointsum += a[i];
    }
    for(int i=0;i<k+1;++i) {
        if((pointsum+i)/n >= m ) {
            cout << i << '\n';
            return 0;
        }
    }
    cout << -1 << '\n';
    return 0;
}