#include <bits/stdc++.h>

long long a[200000];
char c[200000];

int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    long long n,res=0,i,tlen=0,midl,midr,pl,pr,l,r,el=0,er=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld %c",&a[i],&c[i]);
        tlen+=a[i];
    }
    midl=tlen/2;
    if(tlen%2)
        midr=midl+2;
    else
        midr=midl+1;
    l=0;
    r=n-1;
    pl=1;
    pr=tlen;
    el=1+a[l];
    er=tlen-a[r];
    for(;pl<=midl&&pr>=midr;)
    {
        if(c[l]!=c[r])
           res+=std::min(el-pl,pr-er);
        if(el-1<tlen-er)
        {
            pr-=el-pl;
            pl=el;
            l++;
            el+=a[l];
        }
        else
        {
            pl+=pr-er;
            pr=er;
            r--;
            er-=a[r];
        }
    }
    printf("%lld",res);
    fclose(stdin);
    fclose(stdout);
    return(0);
}
