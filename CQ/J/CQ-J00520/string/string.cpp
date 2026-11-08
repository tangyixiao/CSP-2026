#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#define endl '\n'
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]) {
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n{}; cin >> n;
    struct stt {
        ll len{}; int c{};
        stt() {}
        stt(ll _len, int _c) : len(_len), c(_c) {}
    };
    vector<stt> a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        ll len{}; char c{};
        cin >> len >> c;
        a[i] = stt(len, c - 'a');
        sum += len;
    }
    vector<stt> s1{}, s2{};
    ll mid = sum / 2 + 1, i = 0;
    for (ll cur = 0; i < n; i++) {
        if (cur + a[i].len >= mid) {
            ll clen = mid - cur - 1;
            s1.emplace_back(clen, a[i].c);
            s2.emplace_back(a[i].len - clen - (sum % 2), a[i].c);
            i++; break;
        }
        cur += a[i].len;
        s1.push_back(a[i]);
    }
    for (i; i < n; i++) {
        s2.emplace_back(a[i]);
    }
    reverse(s2.begin(), s2.end());
    ll ans = 0;
    while (!s1.empty()) {
        ll len = min(s1.back().len, s2.back().len);
        ans += (s1.back().c != s2.back().c) * len;
        s1.back().len == len ? s1.pop_back(), 0 : s1.back().len -= len;
        s2.back().len == len ? s2.pop_back(), 0 : s2.back().len -= len;
    }
    cout << ans << endl;
    return 0;
}