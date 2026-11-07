#include <bits/stdc++.h>
using namespace std;
const int N = 200010;
typedef long long LL;
string ss;
int n;
LL a[N];
char c[N];
int main()
{
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 1; i <= n; ++ i )
    {
        cin >> a[i] >> c[i];
    }
    LL l = 1, r = n;
    LL ans = 0;
    while (l < r)
    {
        LL xx = min(a[l], a[r]);
        if (c[l] != c[r])
        {
            ans += xx;
        }
        a[l] -= xx;
        a[r] -= xx;
        if (a[l] == 0) l ++ ;
        if (a[r] == 0) r -- ;
    }
    cout << ans << endl;
    fclose(stdin);
    return 0;
}