#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct stu
{
    ll num;
    bool num2[35];
}a[200005];
int n,m;
bool cmp(stu x,stu y)
{
    return x.num>y.num;
}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for (int i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        a[i].num=x;
        int k=1;
        while (x!=0)
        {
            if (x%2==1)a[i].num2[k]=1;
            else a[i].num2[k]=0;
            k++;
            x/=2;
        }
    }
    sort(a+1,a+n+1,cmp);
    for (int i=35;i>=1;i--)
    {
        int cnt=0;
        ll ans=pow(2,35)-1;
        for (int j=1;j<=n;j++)
        {

            if (a[j].num2[i]==1)
            {

                cnt+=a[j].num2[i];
                ans=(ans&a[j].num);
                if (cnt==m)
                {
                    cout<<ans;
                    return 0;
                }
            }
        }
    }
    return 0;
}
