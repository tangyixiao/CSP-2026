#include <bits/stdc++.h>
#define int long long
using namespace std;

namespace _ {

    const int N = 2e5+10;

    int n, m;
    int a[N];

    bool vis[N];

    int res;

    signed main() {

        freopen("and.in","r",stdin);
        freopen("and.out","w",stdout);

        cin.tie(0)->sync_with_stdio(false);

        if (!(cin >> n >> m)) return 0;
        for (int i = 1;i<= n;i++) {
            cin >> a[i];
        }

        for (int j = 30;j>= 0;j--) {

            int cnt = 0;

            for (int i = 1;i<= n;i++) {

                if (vis[i]) continue;

                if ((a[i] >> j) & 1) cnt++;

            }

            if (cnt < m) continue;

            res |= (1ll << j);

            for (int i = 1;i<= n;i++) {

                if (vis[i]) continue;

                if ((a[i] >> j) & 1) continue;
                else vis[i] = 1;

            }

        } 

        cout << res << endl;

        return 0;
    }

}

signed main() {
    return _::main();
}