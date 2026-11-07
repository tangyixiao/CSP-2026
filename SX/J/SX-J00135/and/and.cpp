#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=2e5+5;
ll n,m,a[N],f[N],ans,tong[30];//xuanle i geshidezuidazhi
bool fff=1;

int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=1; i<=n; i++)

    {
        cin>>a[i];
        if((a[i]+1)%2!=0)
            fff=0;
    }
    if(m==n)
    {
        ll sum1=a[1];
        for(int i=2; i<=n; i++)

        {
            sum1=(sum1&a[i]);
        }
        cout<<sum1;
        return 0;
    }
    if(m==1)
    {
        ll sum2=-1;
        for(int i=1; i<=n; i++)
        {
            sum2=max(sum2,a[i]);
        }
        cout<<sum2;
        return 0;
    }
    if(m==n-1)
    {
        ll sum3=1e18;
        for(int i=1; i<=n; i++)
        {
            sum3=min(sum3,a[i]);
        }
        cout<<sum3;
        return 0;
    }
    if(n>=200000&&fff==1)
    {
        sort(a+1,a+n+1);
        ll sum4=a[m];
        cout<<sum4;
        return 0;
    }
    for(int k=1; k<=n; k++)
    {
        f[1]=a[k];
        for(int i=1; i<=n; i++)

        {
            for(int j=m; j>=2; j--)

            {
                if(i==k)
                    continue;
                f[j]=max(f[j], (f[j-1]&a[i]));
            }
        }
        ans=max(ans,f[m]);
        for(int i=1; i<=m; i++)
        {
            f[i]=0;
        }
    }
    cout<<ans;
    return 0;
}
// 4 2 3 15 12 12
