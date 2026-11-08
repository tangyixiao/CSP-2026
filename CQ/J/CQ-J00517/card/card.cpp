#include<bits/stdc++.h>
using namespace std;
int n,m,a[500003],ans[503];
vector<int> op;
int main(){
    ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin >> n >> m;
    for(int i=1;i<=n;i++)cin >> a[i];
    for(int i=1;i<=n;i++){
        int vis[503];
        memset(vis,0,sizeof(vis));
        op.clear();
        for(int j=i;j<=n;j++){
            if(vis[a[j]]){
                while(op.back()!=a[j]){
                    vis[op.back()]--;
                    op.pop_back();
                }
            }else{
                op.push_back(a[j]);
                vis[a[j]]++;
            }
        }
        for(auto x:op){
            //cout << x << " ";
            ans[x]++;
        }
        //cout << "\n";
    }
    for(int i=1;i<=m;i++)cout << ans[i] << " ";
    return 0;
}
//我无疑是愤怒的