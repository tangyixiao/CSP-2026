#include <bits/stdc++.h>
#define int long long
using namespace std;

namespace _ {

    const int N = 2e5+10;

    int n;
    int a[N];

    char c[N];

    signed main() {
        
        freopen("string.in","r",stdin);
        freopen("string.out","w",stdout);

        if (!(cin >> n)) return 0;
        for (int i = 1;i<= n;i++) {
            cin >> a[i] >> c[i];
        }

        int ans = 0;

        int i = 1, j = n;

        while (i < j) {

            if (a[i] < a[j]) {

                if (c[i] != c[j]) ans += a[i];

                a[j] -= a[i], a[i] = 0, i++;

            } else if (a[i] == a[j]) {

                if (c[i] != c[j]) ans += a[j];

                i++, j--;

            } else {

                if (c[i] != c[j]) ans += a[j];
                a[i] -= a[j], a[j] = 0, j--;

            }

        }

        cout << ans << endl;


        return 0;
    }

}

signed main() {
    return _::main();
}