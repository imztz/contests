#include <bits/stdc++.h>
#define ll long long
using namespace std;

map<char, int> mp1, mp2;
map<string, int> mp;

void solve() {
    mp.clear(), mp1.clear(), mp2.clear();
    int n;
    cin >> n;
    ll res = 0;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        res += mp1[s[0]];
        res += mp2[s[1]];
        res -= 2 * mp[s];
        mp1[s[0]]++;
        mp2[s[1]]++;
        mp[s]++;
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
