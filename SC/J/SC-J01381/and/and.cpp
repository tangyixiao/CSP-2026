#include<bits/stdc++.h>
#define int lld
typedef long long lld;
using namespace std;
int n,m,a[200005],sum,ans=0;
bool vis[200005];
signed main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    scanf("%lld%lld",&n,&m);
    for(int i=1;i<=n;i++)
        scanf("%lld",a+i);
    for(int i=30;i>=0;i--){
        sum=0;
        for(int j=1;j<=n;j++)
            if(!vis[j]&&(a[j]&(1ll<<i)))
                sum++;
        if(sum>=m){
            ans|=1ll<<i;
            for(int j=1;j<=n;j++)
                if(!(a[j]&(1ll<<i)))
                    vis[j]=1;
        }
    }
    printf("%lld\n",ans);
}