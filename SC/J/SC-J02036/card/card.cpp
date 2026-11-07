#include<bits/stdc++.h>
using namespace std;
const int N=500009;
int n,m,a[N],fst[N],lst[N],ans[N],ok=1,cnt,leng[N],help[N],suf[N];
signed main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i],ok&=(a[i]>=a[i-1]),cnt+=(a[i]!=a[i-1]);
    if(cnt<=5000){
        int t=0,pre=0;
        for(int i=1;i<=n;i++)if(a[i]!=a[i+1])lst[++t]=a[i],leng[t]=i-pre,pre=i;
        for(int i=1;i<=t;i++)a[i]=lst[i];
        n=t;
    }
    if(n<=5000){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++)lst[j]=0;
            for(int j=n;j>=i;j--)if(!lst[a[j]])lst[a[j]]=j;
            int j=i;
            while(j<=n)ans[a[j]]+=leng[i],j=lst[a[j]]+1;
        }
        for(int i=1;i<=m;i++){cout<<ans[i];if(i!=m)cout<<' ';}
        cout<<'\n';
        exit(0);
    }
    if(m<=2){
        for(int i=1;i<=n;i++)
            if(a[i]==a[n])++ans[a[i]];
            else ++ans[a[i]],++ans[a[n]];
        for(int i=1;i<=m;i++){cout<<ans[i];if(i!=m)cout<<' ';}
        cout<<'\n';
        exit(0);
    }
    if(ok){
        for(int i=1;i<=n;i++)if(a[i]!=a[i+1])ans[a[i]]=i;
        for(int i=1;i<=m;i++){cout<<ans[i];if(i!=m)cout<<' ';}
        cout<<'\n';
        exit(0);
    }
}