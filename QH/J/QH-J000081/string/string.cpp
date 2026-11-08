#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);

    int n;
    cin >> n;

    string s = "";
    for (int i = 0; i < n; i++) {
        int a;
        char c;
        cin >> a >> c;
        s.append(a, c);  
    }

    int ans = 0;
    int L = s.length();
    for (int i = 0; i < L / 2; i++) {
        if (s[i] != s[L - 1 - i]) ans++;
    }

    cout << ans << endl;
    return 0;
}

