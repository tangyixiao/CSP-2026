#include <cstdio>
#include <vector>
using namespace std;

vector <int> card;
int n, m;
int a[500005], ans[500005];

int main() {
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);

    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    for (int i = 1; i <= n; i++) {
        card.clear();
        for (int j = i; j <= n; j++) {
            if (j == i) {
                card.push_back(a[j]);
                continue;
            }
            if (a[j] == a[j - 1] && !card.empty())
                card.pop_back();
            card.push_back(a[j]);
        }
        for (int x : card) {
            if (x > m) break;
            ans[x]++;
        }
    }

    for (int i = 1; i <= m; i++)
        printf("%d ", ans[i]);

    return 0;
}
