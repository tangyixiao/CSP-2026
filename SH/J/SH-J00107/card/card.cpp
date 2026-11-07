#include <cstdio>

#define MAXN 500000
#define MAXM 300000
typedef long long ll;

ll next[MAXN]={},last[MAXM]={},cnt[MAXM]={},point[MAXN];
bool added[MAXM];

int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    long long n,m,i,j;
    scanf("%lld %lld",&n,&m);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&point[i]);
        if(last[point[i]]!=0)
            next[last[point[i]]]=i;
        last[point[i]]=i;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            added[j]=0;
        for(j=i;j<=n;j++)
        {
            if(!added[point[j]])
            {
                cnt[point[j]]++;
                added[point[j]]=1;
            }
            while(next[j])
                j=next[j];
        }
    }
    for(i=1;i<=m;i++)
        printf("%lld ",cnt[i]);
    fclose(stdin);
    fclose(stdout);
    return(0);
}
