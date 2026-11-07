#include <bits/stdc++.h>
using namespace std;
int n,l,r;
long long a[200001],ans;
char c[200001];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;i++)scanf("%lld",a+i),getchar(),c[i]=getchar();
    l=1,r=n;
    while(l<r){
        if(a[l]<a[r])ans+=(c[l]!=c[r])*1ll*a[l],a[r]-=a[l],l++;
        else ans+=(c[l]!=c[r])*1ll*a[r],a[l]-=a[r],r--;
    }
    printf("%lld",ans);
    return 0;
}