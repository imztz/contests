#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
const int N = 1e5 + 10;
int t, n;
 
bool test (int n, string a) {
    if (a == "R" || a == "B") return false;
    if (a == "WB" || a == "BW" || a == "RW" || a == "WR")
        return false;
    /***
    int r = 0, p = 0, q = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == 'W') ++r;
        if (a[i] == 'R') ++p;
        if (a[i] == 'B') ++q;
    }
    if (r && !p && !q) return true;
    if (p && !r && !q || q && !r && !p) return false;
    if (r && p && !q || r && q && !p) return false;
    */
    a = "W" + a + "W";
    bool f = false;
    int  i = 0;
    while (i < a.size()) {
        if (a[i++] == 'W') {
            int b[2] = {0, 0};
            while (i < a.size() && a[i] != 'W') {
                if (a[i] == 'B') ++b[0];
                if (a[i] == 'R') ++b[1];
                ++i;
            }
            if (!b[0] && b[1] || b[0] && !b[1]) return false;
        }
    }
    return true;
}
 
int main() {
    cin >> t;
    while (t--) {
        scanf("%d", &n);
        string a;
        cin >> a;
        if (test(n, a)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}