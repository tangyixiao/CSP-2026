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
const int MAXN=2e5+5,MAXM=30+5;
int n,m;
int a[MAXN];
bitset<MAXN> b[MAXM];
signed main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    n=read(),m=read();
    bitset<MAXN> now;
    F(int i=1;i<=n;i++)
    {
        now[i]=1;
        a[i]=read();
        F(int j=1;j<=30;j++)if(a[i]&(1<<(j-1)))
        {
            b[j][i]=1;
        }
    }
    int ans=0;
    F(int i=30;i>=1;i--)
    {
        bitset<MAXN> did=(now&b[i]);
        if(did.count()>=m)
        {
            now&=b[i];
            ans+=(1<<(i-1));
        }
    }
    cout<<ans<<'\n';
    return 0;
}//rp++