#include <bits/stdc++.h>
using namespace std;
int n,m,a[200005],vis[200005],maxn;
void dfs(int step){
    if(step>n){
        for(int i=1;i<=n;i++){
            int cnt=0;
            if(vis[i]==1&&cnt<=m){
                cnt++;
                int op=a[i];
                maxn=max(maxn,op*a[i]);
            }
            return ;
        }
        cout << maxn;

    }
    for(int i=0;i<=1;i++){
        vis[step]=i;
        dfs(step+1);
    }
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdin);
    dfs(1);
    return 0;
}
