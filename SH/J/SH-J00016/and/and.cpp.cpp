#include <bits/stdc++.h>

using namespace std;

const int N = 200010;

int n, m, a[N], cnt[5];

namespace S1 {
    void Solve() {
        int ans = 0;
        for (int mask = 0; mask < 1 << n; ++mask) {
            if (__builtin_popcount(mask) != m) continue;
            int x = (1 << 30) - 1;
            for (int i = 0; i < n; ++i) {
                if (mask >> i & 1) {
                    x &= a[i + 1];
                }
            }
            ans = max(ans, x);
        }
        printf("%d\n", ans);
    }
};

namespace S2 {
    void Solve() {
        int ans = 0;
        for (int i = 1; i <= n; ++i) ans = max(ans, a[i]);
        printf("%d\n", ans);
    }
};

namespace S3 {
    void Solve() {
        int ans = (1 << 30) - 1;
        for (int i = 1; i <= n; ++i) ans &= a[i];
        printf("%d\n", ans);
    }
};

namespace S4 {
    void Solve() {
        int ans = 0;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (i == j) continue;
                ans = max(ans, a[i] & a[j]);
            }
        }
        printf("%d\n", ans);
    }
};

namespace S5 {
    void Solve() {
        int ans = 0, x = (1 << 30) - 1;
        for (int i = 1; i <= n; ++i) x &= a[i];
        for (int i = 1; i <= n; ++i) ans = max(ans, x & a[i]);
        printf("%d\n", ans);
    }
};

// namespace S6 {
//     void Solve() {
        
//     }
// };

// namespace S7 {
//     void Solve() {
        
//     }
// };

namespace S8 {
    void Solve() {
        vector<int> vec;
        for (int i = 1; i <= n; ++i) {
            ++cnt[a[i]];
            vec.push_back(a[i]);
        }
        sort(vec.begin(), vec.end());
        vec.erase(unique(vec.begin(), vec.end()), vec.end());
        int ans = 0;
        for (int mask = 0; mask < 1 << vec.size(); ++mask) {
            int cntt = 0, num = (1 << 30) - 1;
            for (int i = 0; i < vec.size(); ++i) {
                if (mask >> i & 1) {
                    num &= vec[i];
                    cntt += (cnt[vec[i]] - 1) / 2;
                } else {
                    cntt += cnt[vec[i]] / 2;
                }
            }
            if (cntt >= m) ans = max(ans, num);
        }

        printf("%d\n", ans);
    }
};

int main() {
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);

    scanf("%d%d", &n, &m);
    int ma = 0;
    bool flagS6 = true, flagS7 = __builtin_popcount(n) == 1;
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        ma = max(ma, a[i]);
        if (__builtin_popcount(a[i] + 1) != 1) flagS6 = false;
        else if (a[i] != i - 1) flagS7 = false;
    }

    if (n <= 20) S1::Solve();
    else if (m == 1) S2::Solve();
    else if (m == n) S3::Solve();
    else if (m == 2) S4::Solve();
    else if (m == n - 1) S5::Solve();
    // else if (flagS6) S6::Solve();
    // else if (flagS7) S7::Solve();
    else if (ma <= 4) S8::Solve();
    else S1::Solve();

    return 0;
}
// rp++ 
// jbw ORZ ORZ ORZ
