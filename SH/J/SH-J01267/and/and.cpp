#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n,m;
int s = 2;
int a[200010],num[30];
bool c[200010][30];
int t[30];
void check(int j)
{
    int x = a[j],ss = s;
    for (int i = 29; i >= 0; i--)
    {
        if (x < ss)
        {
            ss /= 2;
            continue;
        }
        c[j][i] = true;
        num[i]++;
        x -= ss;
        ss /= 2;
    }
}
void uncheck(int j)
{
    int x = a[j],ss = s;
    for (int i = 29; i >= 0; i--)
    {
        if (x < ss)
        {
            ss /= 2;
            continue;
        }
        c[j][i] = false;
        num[i]--;
        x -= ss;
        ss /= 2;
    }
}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        scanf("%d",&a[i]);
    if (n > 2000)
    {
        sort(a + 1,a + n + 1);
        cout << a[n - m + 1];
        return 0;
    }
    if (m == 1)
    {
        sort(a + 1,a + n + 1);
        cout << a[n];
        return 0;
    }
    for (int i = 2; i <= 29; i++)
        s *= 2;
    for (int i = 1; i <= n; i++)
        check(i);
    bool f = false;
    int id = 30;
    int ans = 0;
    while (!f)
    {
        for (int i = id - 1; i >= 1; i--)
        {
            if (num[i] == m) f = true;
            if (num[i] >= m)
            {
                id = i;
                break;
            }
            s /= 2;
        }
        ans += s;
        s /= 2;
        for (int i = 1; i <= n; i++)
            if (!c[i][id]) uncheck(i);
    }
    if (id > 0)
    {
        int i,sz = 0;
        for (i = 1; i <= n; i++)
            if (c[i][id]) t[++sz] = i;
        for (i = id - 1; i >= 0; i--)
        {
            bool flag = true;
            for (int j = 1; j <= sz; j++)
                if (!c[t[j]][i])
                {
                    flag = false;
                    break;
                }
            if (flag) ans += s;
            s /= 2;
        }
    }
    cout << ans;
    return 0;
}
