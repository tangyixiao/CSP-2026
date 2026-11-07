#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N=2e5+10;
int s[N];
struct Stu
{
    int len;
    char ch;
}a[N];
struct node
{
    int id,x;
};
signed main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n,suma=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        char c;
        cin>>x;
        getchar();
        cin>>c;
        suma+=x;
        a[i]={x,c};
        s[i]=s[i-1]+a[i].len;
    }
    int x=ceil(suma*1.0/2);
    int idx=lower_bound(s+1,s+n+1,x)-s;
    node startl,startr;
    if(suma%2==0)
    {
        int l=s[idx-1];
        startl={idx,x-l};
        startr={idx,startl.x+1};
        if(startr.x>a[idx].len) startr.id++,startr.x=1;
    }
    else
    {
        int l=s[idx-1];
        startl={idx,x-l-1};
        startr={idx,x-l+1};
        if(startl.x<=0) startl.id--,startl.x=a[idx-1].len;
        if(startr.x>a[idx].len) startr.id++,startr.x=1;
    }
    node l=startl,r=startr;
    int ans=0;
    while(l.x>=1&&r.id<=n)
    {
        int tol=l.x,tor=a[r.id].len-r.x+1;
        if(tol<tor)
        {
            ans+=(a[l.id].ch!=a[r.id].ch)*tol;
            l.id--;
            l.x=a[l.id].len;
            r.x+=tol;
            if(r.x>a[r.id].len) r.x=r.x-a[r.id].len,r.id++;
        }
        else
        {
            ans+=(a[l.id].ch!=a[r.id].ch)*tor;
            r.id++;
            r.x=1;
            l.x-=tor;
            if(l.x<=0) l.id--,l.x=a[l.id].len+l.x;
        }
    }
    cout<<ans<<'\n';
    return 0;
}