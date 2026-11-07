#include<bits/stdc++.h>
using namespace std;

const int maxn=5e5+10;
int arr[maxn],sz[maxn],fa[maxn],pos[maxn];
bool vis[maxn];
signed main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
    for(int i=n;i>=1;i--){
        if(pos[arr[i]]){
            fa[i]=pos[arr[i]];
        }else{
            fa[i]=i+1;
            pos[arr[i]]=i;
        }
        sz[i]=1;
    }
    for(int i=1;i<=n;i++) sz[fa[i]]+=sz[i];
    for(int i=1;i<=m;i++){
        printf("%d ",sz[pos[i]]);
    }
    return 0;
}