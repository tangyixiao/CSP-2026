#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
int a [N];

int main ()
{
    freopen ("and.in", "r", stdin);
    freopen ("and.out", "w", stdout);
    int n, m;
    scanf ("%d%d", &n, &m);
    vector <int> id;
    for (int i = 1; i <= n; i++)
    {
        scanf ("%d", a + i);
        id.push_back (i);
    }
    int ans = 0;
    for (int t = 30; t >= 0; t--)
    {
        int cnt = 0;
        for (int i : id)
        {
            if ((a [i] >> t) & 1)
            {
                cnt++;
            }
        }
        // printf ("%d %d\n", t, cnt);
        if (cnt >= m)
        {
            vector <int> tmp;
            for (int i : id)
            {
                if ((a [i] >> t) & 1)
                {
                    tmp.push_back (i);
                }
            }
            id = tmp;
            ans |= (1 << t);
        }
    }
    printf ("%d\n", ans);
    return 0;
}