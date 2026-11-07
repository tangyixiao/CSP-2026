#include <algorithm>
#include <cstdio>
#include <vector>
#include <map>

#define fi first
#define se second
#define pb push_back
#define mod(x) (x -= x >= Q ? Q : 0)

typedef long long ll;

using namespace std;

struct IO {
    IO () {
        freopen("card.in", "r", stdin);
        freopen("card.out", "w", stdout);
    }
    ~IO () {
        fclose(stdin);
        fclose(stdout);
    }
} io;

const int N = 5e5 + 5;
const int M = 3e5 + 5;

int n, m;
int a[N], s[N], val[N];
int ans[M], mx[M];

int main () {
    // zyt
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        mx[a[i]] = i;
    }
    for (int i = 1; i <= n; i++) {
        int x = val[i];
        ans[a[i]] += x + 1;
        val[mx[a[i]] + 1] += x + 1;
    }
    for (int i = 1; i <= m; i++)
        printf("%d%c", ans[i], " \n"[i == m]);
    return 0;
}