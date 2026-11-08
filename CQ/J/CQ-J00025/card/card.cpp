#include<bits/stdc++.h>
using namespace std;
stack <int> q;
int vis[500001];
int a[500001];
int ans[500001];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(vis[a[j]]){
                while(q.top()!=a[j]){
                    vis[q.top()]=0;
                    q.pop();
                }
            }
            else{
                q.push(a[j]);
                vis[a[j]]=1;
            }
        }
        while(!q.empty()){
            ans[q.top()]++;
            q.pop();
        }
        for(int i=1;i<=n;i++) vis[i]=0;
    }
    for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
    return 0;
}
