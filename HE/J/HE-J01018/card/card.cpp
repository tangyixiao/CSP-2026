#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> k;
vector<int> a;
vector<int> cnt;

int main(){
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    k.resize(n);
    a.resize(n);
    cnt.resize(m+1, 0);
    for (int i = 0; i < n; ++i) {
        cin >> k[i];
    }
    for (int i = 0; i < n; ++i) {
        int idx = 0;
        memset(&a[0], 0, sizeof(a));
        for (int j = i; j < n; ++j) {
            for(int jdx = 0; jdx < idx; ++jdx) {
                if (a[jdx] == k[j]) {
                    idx = jdx;
                    break;
                }
            }
            a[idx++] = k[j];
        }
        for (int j = 0; j < idx; ++j) {
            cnt[a[j]]++;
        }
    }
    for (int i = 1; i <= m; ++i) {
        cout << cnt[i] << ' ';
    }
    return 0;
}
