#include<bits/stdc++.h>
using namespace std;
int n,m,a[200001],ma,ans,vis[23];
void dfs(int step,int now){
    if(step==m){
        ans = max(ans,now);
        return;
    }
    if(step==0){
        for(int i=1;i<=n;i++){
            vis[i]=1;
            dfs(step+1,a[i]);
            vis[i]=0;
        }
    }else{
        for(int i=1;i<=n;i++){
            if(!vis[i]){vis[i]=1;dfs(step+1,a[i]&now);vis[i]=0;}
        }
    }
}
int main(){
    ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        if(i==1)ans=a[i];
        ma = max(ma,a[i]);
        ans&=a[i];
    }
    if(m==1){
        cout << ma << "\n";
        return 0;
    }
    if(m==n){
        cout << ans << "\n";
        return 0;
    }
    ans=0;
    if(n<=2000&&m==2){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i!=j)ans = max(ans,a[i]&a[j]);
            }
        }
        cout << ans << "\n";
        return 0;
    }
    ans=0;
    if(n<=20){
        dfs(0,0);
        cout << ans << "\n";
        return 0;
    }
    ans=0;
    if(n>2000&&m==n-1){
        ans = a[2];
        for(int i=3;i<=n-1;i++){
            ans &= a[i];
        }
        cout << max(ans&a[1],ans&a[n]) << "\n";
        return 0;
    }
    return 0;
}