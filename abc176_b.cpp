#include <bits/stdc++.h>
#define ll long long
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
using namespace std;

signed main(void) {
    int sum = 0;
    string n;
    cin >> n;
    for (int  i = 0; i < (int)n.size(); ++i)
    {
        sum += (n.at(i) - '0');
    }
    cout << ((sum % 9 == 0 || sum == 0)? "Yes": "No") << endl;
    return 0;
}