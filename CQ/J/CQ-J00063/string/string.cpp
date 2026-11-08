#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
long long a[200001],aa[400005];
char c[200001],cc[400005];
int add=2;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    long long ans=0,len=0;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>c[i];
        len+=a[i];
    }
    long long nw=1;
    for(int i=1;i<=n;i++)
    {
        if(nw<=len/2)
        {
            //cout<<i<<"\n";
            aa[i*2-1]=nw;
            aa[i*2]=len-nw+1;
        }
        //cout<<nw<<" "<<len-nw+1<<endl;
        nw+=a[i];
    }
    long long nw2=len;
    for(int i=n;i>=1;i--)
    {
        if(nw2>len/2&&aa[i*2]==0)
        {
            //cout<<i<<"\n";
            aa[i*2-1]=nw2;
            aa[i*2]=len-nw2+1;
        }
        else if(nw2>len/2)
        {
            //cout<<i<<"\n";
            aa[n*2+3]=nw2;
            aa[n*2+4]=len-nw2+1;
            add+=2;
        }
        nw2-=a[i];
    }
    aa[n*2+1]=len/2;
    aa[n*2+2]=len/2;
    if(len%2==0)aa[n*2+2]++;
    sort(aa+1,aa+n*2+add+1);
    long long ed=0;
    int cur=0;
    for(int i=1;i<=n+add/2;i++)
    {
        if(aa[i]>ed)
        {
            cur++;
            ed+=a[cur];
        }
        cc[i]=c[cur];
    }
    long long ed2=len+1;
    int cur2=n+add/2;
    for(int i=n*2+add;i>n+add/2;i--)
    {
        if(aa[i]<ed2)
        {
            cur2--;
            ed2-=a[cur2];
        }
        cc[i]=c[cur2];
    }
    //for(int i=1;i<=n*2+2;i++)cout<<cc[i]<<" "<<aa[i]<<"\n";
    for(int i=1;i<=n+add/2;i++)if(cc[i]!=cc[n*2+add-i+1])ans+=aa[i+1]-aa[i];
    cout<<ans<<endl;
    //cout<<add<<endl;
    return 0;
}
