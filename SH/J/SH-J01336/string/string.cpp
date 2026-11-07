#include <iostream>
#include <vector>
using namespace std;

using LL = long long;

const LL N = 2e5 + 10;
LL a0[N], s[N];
char c0[N];

int main() {
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    LL n;
    cin >> n;
    s[0] = 0;
    for (LL i = 1; i <= n; i++) {
        cin >> a0[i] >> c0[i];
        s[i] = s[i - 1] + a0[i];
    }
    LL mid = 0;
    for (LL i = 1; i <= n; i++) {
        if (s[i - 1] <= s[n] / 2 && s[i] > s[n] / 2) {
            mid = i;
            break;
        }
    }
    vector<LL> a, b;
    vector<char> c1, c2;
    LL sum_1 = 0;
    for (LL i = 1; i < mid; i++) {
        sum_1 += a0[i];
        a.push_back(a0[i]);
        c1.push_back(c0[i]);
    }
    if (sum_1 < s[n] / 2) {
        a.push_back(s[n] / 2 - sum_1);
        c1.push_back(c0[mid]);
    }
    LL sum_2 = 0;
    for (LL i = n; i > mid; i--) {
        sum_2 += a0[i];
        b.push_back(a0[i]);
        c2.push_back(c0[i]);
    }
    if (sum_2 < s[n] / 2) {
        b.push_back(s[n] / 2 - sum_2);
        c2.push_back(c0[mid]);
    }
    LL alen = a.size();
    LL blen = b.size();
    LL i = 0;
    LL j = 0;
    LL cost_sum = 0;
    LL i_left = a[0];
    LL j_left = b[0];
    while (i < alen && j < blen) {
        if (i_left <= j_left) {
            cost_sum += (c1[i] == c2[j] ? 0 : i_left);
            j_left -= i_left; i_left = 0;
        } else {
            cost_sum += (c1[i] == c2[j] ? 0 : j_left);
            i_left -= j_left; j_left = 0;
        }
        if (i_left == 0) {
            i_left = a[++i];
        } else {
            j_left = b[++j];
        }
    }
    cout << cost_sum << endl;

    fclose(stdin);
    fclose(stdout);
    return 0;
}
