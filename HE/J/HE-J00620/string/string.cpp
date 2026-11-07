#include <bits/stdc++.h>
using namespace std;
long long a[200005],m=0;
char c[200005];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    long long n,ans=0;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i] >> c[i];
    }
    if(n%2==1)
    {
        for(int i=1;i<=n/2;i++)
        {
            if(c[i]!=c[n-i+1])
            {
                ans+=(a[i],a[n-i+1]);
                if(a[i]!=a[n-i+1])
                {
                    m+=(a[i]-a[n-i+1]);
                }
            }
        }
    }
    else
    {
        for(int i=1;i<=n/2;i++)
        {
            if(c[i]!=c[n-i+1])
            {
                ans+=(a[i],a[n-i+1]);
                if(a[i]!=a[n-i+1])
                {
                    m+=(a[i]-a[n-i+1]);
                }
            }
        }
    }
    cout << ans+m;
    return 0;
}
