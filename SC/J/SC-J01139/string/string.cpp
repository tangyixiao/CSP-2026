#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, t, ans;
char c;
deque<pair<int, char>> dq;
signed main() {
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);

    ios :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> t >> c;
        dq.push_back({t, c});
    }
    while (dq.size() >= 2) {
        auto &ft = dq.front(), &ed = dq.back();
        if (ft.first > ed.first) {
            ans += (ft.second != ed.second) * ed.first;
            ft.first -= ed.first;
            dq.pop_back();
        } else if (ft.first < ed.first) {
            ans += (ft.second != ed.second) * ft.first;
            ed.first -= ft.first;
            dq.pop_front();
        } else {
            ans += (ft.second != ed.second) * ft.first;
            dq.pop_back();
            dq.pop_front();
        }
    }
    cout << ans;
    return 0;
}