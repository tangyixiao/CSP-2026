#include <bits/stdc++.h>
using namespace std;
#define ll long long

class symbol {
    public:
        char value;
        ll pos, opposite;

        void build(char v, ll p) {
            value = v, pos = p;
        }
        void calc(int l) {
            opposite = l - pos + 1;
        }
};

ll n, a, ans = 0, len = 0, cur = 0;
char c;
vector<symbol> S;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr), cout.tie(nullptr);

    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> c;
        len += a;
        for (int j = 0; j < a; ++j) {
            symbol tmp;
            tmp.build(c, ++cur);
            S.push_back(tmp);
        }
    }

    for (auto i : S) {
        i.calc(len);
        for (auto j : S)
            if(i.opposite == j.pos && i.value != j.value)
                ++ans;
    }

    cout << ans / 2 << "\n";
    return 0;
}