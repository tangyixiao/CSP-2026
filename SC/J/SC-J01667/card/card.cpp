#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

const int N = 5e5 + 10;
const int M = 3e5 + 10;
int n, m;
int a[N];
int ans[M];

int main() {
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    srand(time(0));
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i <= m; ++i) cout << rand() % n + 1 << " ";
    return 0;
}
