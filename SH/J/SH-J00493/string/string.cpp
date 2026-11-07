#include<bits/stdc++.h>
using namespace std;

struct node
{
    int pos;
    int m;
    char c;
}a[200010],l[100010],r[100010];
int n;
int cnt = 0;
long long tot = 0;
long long ans = 0;
int gcd = 0;

bool check()
{
    for (int i = 1;i <= n / 2 + 1;i++)
    {
        if (a[i].m != a[n-i+1].m or a[i].c != a[n-i+1].c) return false;
    }
    return true;
}

bool cmp(node x,node y)
{
    return (x.m == y.m and x.c == y.c);
}

void solve1()
{
    string s;
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= a[i].m;j++)
        {
            s += a[i].c;
        }
    }
    for (int i = 0;i < tot / 2 + 1;i++)
    {
        if (s[i] != s[n - i])
        {
            ans++;
        }
    }
    cout << ans * gcd;
}

int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        cin >> a[i-cnt].m >> a[i-cnt].c;
        //a[i-cnt].pos = tot;
        tot += a[i-cnt].m;
        if (a[i-cnt].c - 'a' == a[i-cnt-1].c - 'a')
        {
            a[i-cnt-1].m += a[i-cnt].m;
            cnt++;
        }
        //cout << cnt << " " << a[i-cnt].c << endl;
    }
    n -= cnt;
    for (int i = 1;i <= n;i++)
    {
        gcd = __gcd(gcd,a[i].m);
    }
    for (int i = 1;i <= n;i++)
    {
        a[i].m /= gcd;
    }
    tot /= gcd;
    if (check())
    {
        cout << 0;
        return 0;
    }
    if (tot <= 500000)
    {
        solve1();
    }


    int pos = 0;
    for (int i = 1;i <= n / 2 + 1;i++)
    {
        if (cmp(a[i],a[n-i]))
        {
            continue;
        }
    }
    return 0;
}
