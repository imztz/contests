#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, r;

int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &r);
        if (r >= 1900) printf("Division 1\n");
        else if (r >= 1600) printf("Division 2\n");
        else if (r >= 1400) printf("Division 3\n");
        else printf("Division 4\n");
    }
    return 0;
}
