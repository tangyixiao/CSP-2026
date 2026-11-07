#include<bits/stdc++.h>
const long long N=2e5+5;
long long n,ans,a[N];
char c[N];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    scanf("%lld",&n);
    for(long long i=1;i<=n;i++){
        scanf("%lld %c",&a[i],&c[i]);
    }
    for(long long p=1,q=n;p<q;){
        long long min=std::min(a[p],a[q]);
        a[p]-=min,a[q]-=min;
        if(c[p]!=c[q])ans+=min;
        if(a[p]==0)p++;
        if(a[q]==0)q--;
    }
    printf("%lld\n",ans);
}