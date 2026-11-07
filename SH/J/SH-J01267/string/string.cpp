#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[200010];
char c[200010];
long long ans,sum,l;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %c",&a[i],&c[i]);
        l += a[i];
    }
    int i = 1,i1 = n;
    while (sum <= l / 2 && i != i1)
    {
        int x = min(a[i],a[i1]);
        if (c[i] != c[i1]) ans += x;
        sum += x;
        a[i] -= x;
        a[i1] -= x;
        if (a[i] == 0) i++;
        if (a[i1] == 0) i1--;
    }
    cout << ans;
    return 0;
}
