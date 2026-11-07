#include<bits/stdc++.h>
using namespace std;

int a[200000], n, m, b = 0, bmax = 0;

int main() {
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];

    }
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            b += 2 * (a[j] and a[j + 1]);
            if (b > bmax) {
                bmax = b;

            }
        }

    }
    cout << bmax;
    return 0;
}