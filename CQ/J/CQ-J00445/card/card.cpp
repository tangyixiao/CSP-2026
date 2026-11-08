#include<bits/stdc++.h>
#define int long long
#define F for
#define W while
using namespace std;
char buf[1<<23],*p1=buf,*p2=buf;
#define gc() (p1==p2&&(p2=(p1=buf)+fread(buf,1,1<<23,stdin),p1==p2)?EOF:*p1++)
static inline int read()
{
    int x=0,f=1;char ch=gc();
    W(!isdigit(ch)){if(ch=='-')f=-1;ch=gc();}
    W(isdigit(ch)) x=x*10+(ch^48),ch=gc();
    return x*f;
}
const int MAXN=5e5+5;
int n,m;
int a[MAXN],l[MAXN],r[MAXN];
int keng[MAXN],dp[MAXN],ans[MAXN];
signed main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    n=read(),m=read();
    F(int i=1;i<=n;i++)
    {
        dp[i]=1;
        a[i]=read();
        if(!keng[a[i]])
        {
            l[i]=r[i]=-1;
            keng[a[i]]=i;
        }
        else
        {
            r[keng[a[i]]]=i;
            l[i]=keng[a[i]];
            r[i]=-1;
            keng[a[i]]=i;
        }
    }
    F(int i=1;i<=n;i++)
    {
        if(r[i]!=-1) 
        {
            dp[r[i]]+=dp[i];
        }
        else
        {
            ans[a[i]]+=dp[i];
            dp[i+1]+=dp[i];
        }
    }
    F(int i=1;i<m;i++) cout<<ans[i]<<' ';
    cout<<ans[m]<<'\n';
    return 0;
}//rp++