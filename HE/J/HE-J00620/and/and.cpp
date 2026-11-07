#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m,mx=-1,cnt;
    cin >> n >>m;
    int a[200005];
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        mx=max(mx,a[i]);
    }
    if(m==1)
    {
        cout << mx;
    }
    else if(n==m)
    {
        cnt=a[1];
        for(int i=1;i<=n;i++)
        {
            cnt=cnt&a[i];
        }
        cout << cnt;
    }
    else if(m==2)
    {
        int mx2;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                int lin=a[i]&a[j];
                mx2=max(lin,mx2);
            }
        }
        cout << mx2;
    }
    return 0;
}
