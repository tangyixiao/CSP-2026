#include <algorithm>
#include <cstdio>
#include <vector>

#define fi first
#define se second
#define pb push_back
#define mod(x) (x -= x >= Q ? Q : 0)

typedef long long ll;

using namespace std;

struct IO {
    IO () {
        freopen("and.in", "r", stdin);
        freopen("and.out", "w", stdout);
    }
    ~IO () {
        fclose(stdin);
        fclose(stdout);
    }
} io;

const int N = 2e5 + 5;

int n, m, ans;
int a[N];
vector < int > s, t;

int main () {
    // zyt
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]), s.pb(a[i]);
    for (int i = 29; i >= 0; i--) {
        for (int x : s) {
            if (x & (1 << i))
                t.pb(x);
        }
        if ((int)t.size() >= m)
            s = t, ans |= (1 << i);
        t.clear();
    }
    printf("%d\n", ans);
    return 0;
}