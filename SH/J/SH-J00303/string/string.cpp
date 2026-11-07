#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,sum,l,r,x,y,ans;
ll a[200005];
char c[200005];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i]>>c[i];
        sum+=a[i];
    }
    l=1,r=sum;
    x=1,y=n;
    while (l<=r)
    {
        if (c[x]==c[y])
        {
            if (a[x]>a[y])
            {
                l+=a[y],r-=a[y];
                a[x]-=a[y];
                a[y]=0;
                y--;
            }
            else if (a[x]==a[y])
            {
                l+=a[x],r-=a[x];
                a[x]=0,a[y]=0;
                x++,y--;
            }
            else{
                l+=a[x],r-=a[x];
                a[y]-=a[x];
                a[x]=0;
                x++;
            }
        }
        else{
            if (a[x]>a[y])
            {
                l+=a[y],r-=a[y];
                a[x]-=a[y];
                ans+=a[y];
                a[y]=0;
                y--;
            }
            else if (a[x]==a[y])
            {
                l+=a[x],r-=a[x];
                ans+=a[x];
                a[x]=0,a[y]=0;
                x++,y--;
            }
            else{
                l+=a[x],r-=a[x];
                ans+=a[x];
                a[y]-=a[x];
                a[x]=0;
                x++;
            }
        }

    }
    cout<<ans;
    return 0;
}
