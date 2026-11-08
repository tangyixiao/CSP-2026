/* 考完仔细检查，不要在考场上睡觉。 */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN=2e5+5;
int n,a[MAXN];
char c[MAXN];
ll ans;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("string.in","r",stdin);
        freopen("string.out","w",stdout);
    #endif
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d %c",&a[i],&c[i]);
    int j=1,k=n;
    while(j<k){
        int tmp=min(a[j],a[k]);
        a[j]-=tmp;
        a[k]-=tmp;
        if(c[j]!=c[k]) ans+=tmp;
        if(a[j]==0) j++;
        if(a[k]==0) k--;
    }
    printf("%lld",ans);
    return 0;
}
// 致敬名言：感觉做题不如被草