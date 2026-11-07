#include <iostream>
#include <unordered_map>
using namespace std;

const int maxn = 5e5 + 5;
const int maxm = 3e5 + 5;

unordered_map <int, int> em;

int ans[maxm];

int a[maxn];

int main () {
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        unordered_map <int, int> M;
        unordered_map <int, int> items;
        for (int j = i; j <= n; j++) {
            items[a[j]]++;
            if (M[a[j]]) {
                for (int k = M[a[j]]; k < j; k++) {
                    if (M[a[k]])
                        items[a[k]]--;
                    M[a[k]] = 0;
                    //cout << a[k] << "deleted! ";
                }
            }
            M[a[j]] = j;
        }
        for (int i = 1; i <= m; i++) {
            if (items[i]) {
                ans[i]++;
                cout << i << " ";
            }
        }
        M = em, items = em;
        cout << endl;
    }
    for (int i = 1; i <= m; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
