#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 55;
int t, n, a[N];

bool check (int b[], int c[], int p, int q) {
    for (int i = 0; i < p - 1; ++i) {
        if ((b[i] % 2) != (b[i + 1] % 2))
            return false;
    }
    for (int i = 0; i < q - 1; ++i) {
        if ((c[i] % 2) != (c[i + 1] % 2))
            return false;
    }
    return true;
}

int main() {
    scanf("%d", &t);
    while (t--) {
        int b[N] = {0}, c[N] = {0};
        scanf("%d", &n);
        int p = 0, q = 0;
        for (int i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
            if (i % 2) c[q++] = a[i];
            else b[p++] = a[i];
        }
        if (check(b, c, p, q)) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
