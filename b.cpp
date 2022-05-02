#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2 * 1e5 + 10;
int t, n;

int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int a[N] = {0};
        unordered_map<int, int> mp;
        bool f = false;
        int t;
        for (int i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
            mp[a[i]]++;
        }
        for (auto it : mp) {
            if (it.second >= 3) {
                f = true;
                t = it.first;
                continue;
            }
        }
        if (f) printf("%d\n", t);
        else printf("%d\n", -1);
    }
    return 0;
}



