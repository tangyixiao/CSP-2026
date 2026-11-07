#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e6 + 25;

int n, m, a[N], ans[N];

signed main() {
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);

    ios :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        stack<int> st;
        map<int, int> mp;
        for (int j = i; j <= n; j++) {
            if (mp[a[j]]) {
                while (a[j] != st.top()) {
                    mp[st.top()]--;
                    st.pop();
                }
            } else st.push(a[j]), mp[a[j]] ++;
        }
        while (st.size()) ans[st.top()]++, st.pop();
    }
    for (int i = 1; i <= m; i++) cout << ans[i] << ' ';
    return 0;
}