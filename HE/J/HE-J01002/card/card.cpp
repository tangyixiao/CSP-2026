#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 500005
ll vis[maxn],a[maxn],n,m,ans[maxn],vis2[maxn],vis1[maxn],p;
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for (int i=1;i<=n;i++){
        cin>>a[i];
        vis[a[i]]++;
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++) vis2[j]=vis[j];
        for (int j=1;j<=m;j++) vis1[j]=0;
        for (int j=1;j<i;j++) vis2[a[j]]--;
        p=i;
        for (int j=i;j<=n;j++){
            vis1[a[j]]++;
            if (vis1[a[j]]==2){
                for (int k=j-1;k>=p;k--){
                    vis2[a[k]]--;
                }
                vis1[a[j]]--;
                p=j;
            }
        }
        for (int j=1;j<=m;j++){
            if (vis2[j]) ans[j]++;
        }
    }
    for (int i=1;i<=m;i++) cout<<ans[i]<<" ";
    fclose(stdin);
    fclose(stdout);
    return 0;
}

