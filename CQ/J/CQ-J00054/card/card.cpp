#include <bits/stdc++.h>
#define int long long
using namespace std;

namespace _ {

    const int N = 5e5+10;
    const int M = 1e6+10;

    int n, m;
    int a[N];

    int lst[N];

    int fath[N];

    int cnt, head[N];
    int nxt[M], to[M];

    int siz[N];

    void connect(int u, int v) {
        cnt++, nxt[cnt] = head[u];
        head[u] = cnt, to[cnt] = v;
    }

    void dfs(int u, int from) {

        siz[u] = 1;
        for (int i = head[u];i;i=nxt[i]) {

            int v = to[i];
            if (v == from) continue;
            dfs(v, u); siz[u] += siz[v];

        }

    }

    signed main() {

        freopen("card.in","r",stdin);
        freopen("card.out","w",stdout);

        cin.tie(0)->sync_with_stdio(false);

        if (!(cin >> n >> m)) return 0;
        for (int i = 1;i<= n;i++) {
            cin >> a[i];
        }

        for (int i = 1;i<= n;i++) {
            if (lst[a[i]]) {
                fath[lst[a[i]]] = i;
            }
            lst[a[i]] = i;
        }

        for (int i = 1;i<= m;i++) {
            fath[lst[i]] = lst[i]+1;
        }

        for (int i = 1;i<= n;i++) {
            connect(i, fath[i]);
            connect(fath[i], i);
        }

        dfs(n, n+1);

        for (int i = 1;i<= m;i++) {
            cout << siz[lst[i]];
            if (i != m) cout << " ";
        } cout << endl;

        return 0;
    }

}

signed main() {
    return _::main();
}