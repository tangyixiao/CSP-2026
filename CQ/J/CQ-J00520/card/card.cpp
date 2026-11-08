#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#define endl '\n'
using namespace std;
typedef long long ll;

vector<vector<int>> g;

void dfs(int u, vector<bool>& vis, vector<int>& ord, vector<int>& cnt, vector<int>& ans) {
    if (vis[u]) {
        return;
    }
    vis[u] = true;
    ord.push_back(u);
    for (int i = 0; i < ord.size(); i++) {
        ans[ord[i]] += cnt[u];
    }
    for (int i = 0; i < g[u].size(); i++) {
        int v = g[u][i];
        dfs(v, vis, ord, cnt, ans);
    }
    ord.pop_back();
    return;
}

int main(int argc, char* argv[]) {
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n{}, m{};
    cin >> n >> m;
    vector<int> a(n), idx(m + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i], idx[a[i]] = i;
    }
    vector<int> nxt(m + 1, -1);
    for (int i = 1; i <= m; i++) {
        nxt[a[idx[i]]] = (idx[i] == n - 1 ? -1 : a[idx[i] + 1]);
    }
    g.resize(m + 1);
    for (int i = 1; i <= m; i++) {
        if (nxt[i] == -1) {
            continue;
        }
        g[i].push_back(nxt[i]);
        g[nxt[i]].push_back(i);
    }
    vector<int> cnt(m + 1, 0);
    for (int i = 0; i < n; i++) {
        cnt[a[i]]++;
    }
    int rt = a[n - 1];
    vector<bool> vis(m + 1, false);
    vector<int> ord, ans(m + 1, 0);
    dfs(rt, vis, ord, cnt, ans);
    for (int i = 1; i <= m; i++) {
        cout << ans[i] << ' ';
    }
    cout << endl;
    return 0;
}