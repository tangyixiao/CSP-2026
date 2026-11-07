#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N],cnt[N],nw[N],ans;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]),nw[i]=1;
    for(int i=30;i>=0;i--){
        int tmp=0;
        // cout<<i<<":"<<endl;
        for(int j=1;j<=n;j++){
            if((a[j]>>i)&1) cnt[j]=1,tmp+=(nw[j]&cnt[j]);//,cout<<j<<" ";
        }
        // cout<<endl;
        if(tmp<m) continue;
        for(int j=1;j<=n;j++) nw[j]&=cnt[j],cnt[j]=0;
        ans|=(1<<i);
    }
    printf("%d\n",ans);
    return 0;
}