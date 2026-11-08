#include<bits/stdc++.h>
#define int long long
#define N 500005
using namespace std;
int n;
struct node
{
    int num;
    char cnt;
}a[N];
int tot=0,ans=0;
signed main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i].num>>a[i].cnt;
    int f=1,b=n;
    while(f<=b)
    {
        int flag=1;
        if(a[f].cnt==a[b].cnt) flag=0;
        if(a[f].num>a[b].num)
        {
            a[f].num-=a[b].num;
            if(flag) ans+=a[b].num;
            a[b].num=0;
            b--;
        }
        else if(a[f].num<a[b].num)
        {
            a[b].num-=a[f].num;
            if(flag) ans+=a[f].num;
            a[f].num=0;
            f++;
        }
        else if(a[f].num==a[b].num)
        {
            if(flag) ans+=a[f].num;
            a[b].num=a[f].num=0;
            b--,f++;
        }
    }
    cout<<ans;
    return 0;
}