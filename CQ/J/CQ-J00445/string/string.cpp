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
static inline string read_str()
{
    string s=" ";char ch=gc();
    W(!isalpha(ch)) ch=gc();
    W(isalpha(ch)) s+=ch,ch=gc();
    return s;
}
static inline char read_char()
{
    char ch=gc();
    W(!islower(ch)) ch=gc();
    return ch;
}
const int MAXN=2e5+5;
int n,sum,ans;
int a[MAXN],L[MAXN],R[MAXN];
char c[MAXN];
signed main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    n=read();
    F(int i=1;i<=n;i++)
    {
        L[i]=sum+1;
        a[i]=read(),c[i]=read_char();
        sum+=a[i];
        R[i]=sum;
    }
    int i=1,j=sum,bli=1,blj=n;
    W(i<=sum/2)
    {
        // cout<<i<<' '<<j<<' '<<bli<<' '<<blj<<'\n';
        int did=min(R[bli]-i+1,j-L[blj]+1);
        if(i+did+1>sum/2) did=sum/2-i+1;
        if(c[bli]!=c[blj]) ans+=did;
        i+=did,j-=did;
        if(R[bli]<i) bli++;
        if(L[blj]>j) blj--;
    }
        // cout<<i<<' '<<j<<' '<<bli<<' '<<blj<<'\n';
    cout<<ans<<'\n';
    return 0;
}//rp++