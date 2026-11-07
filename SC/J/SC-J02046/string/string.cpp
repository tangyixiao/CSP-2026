#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
int a [N];
char c [N];

int main ()
{
    freopen ("string.in", "r", stdin);
    freopen ("string.out", "w", stdout);
    int n;
    scanf ("%d", &n);
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf ("%d %c", a + i, c + i);
        sum += a [i];
    }
    // printf ("%d\n", sum);
    long long cnt = 0, ans = 0;
    int lt = 0, r = n;
    for (int i = 1; i <= n; i++)
    {
        int ttt;
        if (cnt + a [i] > sum / 2)
        {
            ttt = (sum / 2) - cnt;
            cnt = sum / 2;
        }
        else
        {
            cnt += a [i];
            ttt = a [i];
        }
        // printf ("%d ttt:%d ans:%d r:%d\n", i, ttt, ans, r);
        while (r >= 1 && ttt > 0)
        {
            if (a [r] - lt <= ttt)
            {
                if (c [r] != c [i])
                {
                    ans += a [r] - lt;
                }
                ttt -= a [r] - lt;
                lt = 0;
                // printf ("%d r:%d ar:%d lt%d\n", i, r, a [r], lt);
            }
            else
            {
                // printf ("ar::%d lt:%d ttt:%d\n", a [r], lt, ttt);
                lt += ttt;
                if (c [r] != c [i])
                {
                    ans += ttt;
                }
                ttt = 0;
                break;
            }
            r--;
        }
        if (cnt == sum / 2)
        {
            break;
        }
    }
    printf ("%lld\n", ans);
    return 0;
}