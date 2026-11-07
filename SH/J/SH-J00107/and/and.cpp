#include <cstdio>
#include <climits>

unsigned long long res=0,a[200000];
long long n,m;

void dfs(long layer,long last,unsigned long cur)
{
    if(layer==m)
    {
        if(res<cur)
            res=cur;
        return;
    }
    for(long i=last+1;i<=n-(m-layer);i++)
        if((cur&a[i])>res)
            dfs(layer+1,i,cur&a[i]);
    return;
}

int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    scanf("%lld %lld",&n,&m);
    for(long i=0;i<n;i++)
        scanf("%llu",&a[i]);
    dfs(0,-1,UINT_MAX);
    printf("%llu",res);
    fclose(stdin);
    fclose(stdout);
    return(0);
}
