#include<bits/stdc++.h>
const long long N=2e5+5;
long long n,m,cnt,ans,a[N],b[N];
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    scanf("%lld%lld",&n,&m);
    for(long long i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }
    for(long long i=30;i>=0;i--){
        cnt=0;
        for(long long j=1;j<=n;j++){
            if((a[j]>>i)&1)cnt++;
        }
        if(cnt<m)continue;
        cnt=0;
        for(long long j=1;j<=n;j++){
            if((a[j]>>i)&1)b[++cnt]=a[j];
        }
        n=cnt;
        for(long long j=1;j<=n;j++)a[j]=b[j];
        ans|=1<<i;
    }
    printf("%lld\n",ans);
}