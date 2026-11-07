#include<bits/stdc++.h>
using namespace std;
int n,m,q,w,e,l,r,mid,ans,a[200005];
bool check(int x)
{
    q=0;
    for(int i=1;i<=n;i++)
    {
        if((a[i]&x)==x)
        {
            q++;
        }
    }
    if(q>=m)
    {
        return 1;
    }
    return 0;
}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=30;i>=0;i--)
    {
        ans+=(1<<i);
        if(check(ans)==0)
        {
            ans-=(1<<i);
        }
    }
    cout<<ans;
    return 0;
}