#include <iostream>
#include <cstring>
using namespace std;
int n, m, a[500001], t[300001], card[500001], idx;
bool flag, A = 1;
long long sum;
int main() {
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i-1] > a[i]) A = 0;
    }
    if (A) {
        for (int i = 1; i <= n; i++) t[a[i]]++;
        for (int i = 1; i <= m; i++) {
            sum += t[i];
            cout << sum << ' ';
        }
    } else {
        for (int i = 1; i <= n; i++) {
            memset(card, 0, sizeof(int) * (idx + 1));
            idx = 0;
            for (int j = i; j <= n; j++) {
                flag = 0;
                for (int k = idx; k >= 1; k--) 
                    if (card[k] == a[j]) {
                        for (int l = k + 1; l <= idx; l++) card[l] = 0;
                        flag = 1;
                        break;
                    }
                if (!flag) card[++idx] = a[j];
            }
            for (int j = 1; j <= idx; j++) t[card[j]]++;
        }
        for (int i = 1; i <= m; i++) cout << t[i] << ' ';
    }
    return 0;
}