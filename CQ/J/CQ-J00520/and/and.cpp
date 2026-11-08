#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
#include <bitset>
#define endl '\n'
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]) {
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n{}, m{}, i{};
    cin >> n >> m;
    array<bitset<int(2e5) + 5>, 35> res{};
    for (int i = 0; i < n; i++) {
        ll x{}; cin >> x;
        for (int d = 0; d <= 32; d++) {
            res[d][i] = (x & (1ll << d));
        }
    }
    bitset<int(2e5) + 5> num{};
    for (i = 32; i >= 0; i--) {
        if (res[i].count() >= m) {
            num = res[i]; break;
        }
    }
    bitset<35> ans{};
    for (i; i >= 0; i--) {
        if ((num & res[i]).count() < m) {
            continue;
        }
        num &= res[i], ans[i] = true;
    }
    cout << ans.to_ullong() << endl;
    return 0;
}