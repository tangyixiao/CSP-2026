#include<iostream>
#include<vector>
using namespace std;
int n, m, a[500004], tmp[500004];
vector<int> v;
int main() {
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            if (v.size() == 0) {
                v.push_back(a[j]);
            }
            else {
                int t = -1;
                for (int k = 0; k < v.size(); k++) {
                    if (v[k] == a[j]) {
                        t = k;
                        break;
                    }
                }
                if (t == -1) {
                    v.push_back(a[j]);
                }
                else {
                    v.erase(v.begin() + t, v.end());
                    v.push_back(a[j]);
                }
            }
        }
        for (int j : v) {
            tmp[j]++;
        }
        v.erase(v.begin(),v.end());
    }
    for (int i = 1; i <= m; i++) {
        printf("%d ", tmp[i]);
    }
    return 0;
}
