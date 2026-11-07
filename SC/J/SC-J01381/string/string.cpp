#include<bits/stdc++.h>
#define int lld
typedef long long lld;
using namespace std;
int n,a[200005],ans;
char c[200005];
signed main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)
        scanf("%lld %c",a+i,c+i);
    for(int i=1,j=n;i<j;){
        if(a[i]<a[j]){
            a[j]-=a[i];
            if(c[i]!=c[j])ans+=a[i];
            i++;
        }else if(a[j]<a[i]){
            a[i]-=a[j];
            if(c[i]!=c[j])ans+=a[j];
            j--;
        }else{
            if(c[i]!=c[j])ans+=a[i];
            i++,j--;
        }
    }
    printf("%lld",ans);
}