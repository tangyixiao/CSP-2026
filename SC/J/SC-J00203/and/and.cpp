#include <iostream>
#include <vector>
using namespace std;
using uint = unsigned int;

const int maxn = 2e5 + 5;

const int maxm = 2e5 + 5;

uint a[maxn];
uint n, m;
//uint dp[maxn][maxm];
//bool visited[maxn][maxm];

uint solve (int i, int m1) {
    if (m1 <= 0) return -1;
    if (n - i + 1 < m1) return 0;
    if (i > n) return 0;
    uint ans;
    uint a1 = solve(i + 1, m1);
    uint b1 = solve(i + 1, m1 - 1) & a[i];
    ans = max(a1, b1);
    return ans;
}

int main () {
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cout << solve(1, m);
    return 0;
}
