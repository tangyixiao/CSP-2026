#include <bits/stdc++.h>
using namespace std;
int a[200005];
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m,x=-1,cnt=0;
    bool flag=1;
    cin>>n>>m;
    a[0]=-1;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        x=max(x,a[i]);
        if(a[i]!=a[i-1]+1)
        {
            flag=0;
        }
    }
    if(flag)
    {
        cout<<n-m;
        return 0;
    }
    sort(a+1,a+n+1);
    for(int i=n; i>=n-m+1; i--)
    {
            x&=a[i];
    }
    cout<<x;
    return 0;
}
