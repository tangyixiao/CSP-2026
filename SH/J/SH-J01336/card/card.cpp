#include <iostream>
#include <cstring>
#include <vector>
#include <set>
using namespace std;

using LL = long long;

const LL N = 5e5 + 10;
LL a[N], cnt[N], size[N];
bool visited[N];
vector<LL> graph[N];

void dfs(LL u) {
    size[u] = cnt[u];
    for (LL v : graph[u]) {
        dfs(v);
        size[u] += size[v];
    }
}

int main() {
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    LL n, m;
    cin >> n >> m;
    memset(cnt, 0, sizeof(cnt));
    for (LL i = 1; i <= n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }
    memset(visited, false, sizeof(visited));
    for (LL i = n; i >= 1; i--) {
        if (visited[a[i]]) {
            continue;
        }
        graph[a[i + 1]].push_back(a[i]);
        visited[a[i]] = true;
    }
    dfs(a[n]);
    for (LL i = 1; i <= m; i++) {
        if (i > 1) {
            cout << ' ';
        }
        cout << size[i];
    }
    cout << endl;

    fclose(stdin);
    fclose(stdout);
    return 0;
}
