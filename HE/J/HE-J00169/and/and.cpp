#include <bits/stdc++.h>
using namespace std;
int a[200010];
bool cmp(int x,int y)
{
    return x>y;
}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m,maxx=-10000,o=2;
    cin >> n >> m;
    for (int i = 1;i<=n;i++)
    {
        cin >> a[i];
    }
    sort(a+1,a+n+1,cmp);
    int ans = a[1];
    for (int i = 2;o<=m;i++)
    {
        while ((a[i] & ans) == 0)
        {
            ans = a[i];
            i++;
        }
        ans = ans & a[i];
        o++;
    }
    cout << ans;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
