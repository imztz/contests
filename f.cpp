#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5 + 10;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    int res = 0, l = 0, r = n - 1, ra = 0, rb = 0, ca = 0, cb = 0;
    while (l <= r) {
        if (ra == rb) 
            res = ca + cb;
        if (ra <= rb) {
            ++ca;
            ra += a[l++];
        } else {
            ++cb;
            rb += a[r--];
        }
    }
    if (ra == rb) res = ca + cb;
    cout << res << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
