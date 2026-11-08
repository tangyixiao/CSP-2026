#include <bits/stdc++.h>
using namespace std;
int n,a[200010];
long long sum,ans;
char c[200010];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        scanf("%d %c",&a[i],&c[i]);
        sum += a[i];
    }
    int l = 1,r = n;
    while(sum > 0){
        int x = min(a[l],a[r]);
        a[l] -= x;
        a[r] -= x;
        sum -= 2LL * x;
        if(c[l] != c[r]){
            ans += x;
        }
        if(a[l] <= 0)
            l++;
        if(a[r] <= 0)
            r--;
    }
    printf("%lld\n",ans);
    return 0;
}
