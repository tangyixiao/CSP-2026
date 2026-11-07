#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
const long long N = 2e5 + 5;
long long n,a[N];
char c[N];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    scanf("%lld",&n);
    for(int i = 1 ; i <= n ; i++)
    {
        scanf("%lld", &a[i]);
        cin >> c[i];
    }
    int l = 1, r = n;
    long long ans = 0;
    while(true)
    {
        if(l >= r) break;
        if(a[l] < a[r])
        {
            if(c[l] != c[r]) ans += a[l];
            a[r] -= a[l];
            l++;
            continue;
        }
        if(a[l] > a[r])
        {
            if(c[l] != c[r]) ans += a[r];
            a[l] -= a[r];
            r--;
            continue;
        }
        if(a[l] == a[r])
        {
            if(c[l] != c[r]) ans += a[l];
            l++;
            r--;
            continue;
        }
    }
    printf("%lld", ans);
    return 0;
}