#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int>a;
vector<int>ans;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    a.resize(n+1);
    ans.resize(m+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++){
        deque<int> q;
        vector<int>vis(m+1);
        for(int j=i;j<=n;j++){
            if(vis[a[j]]==0){
            	q.push_back(a[j]);
            	vis[a[j]]=1;
			}
            else{
                int now=-1;
                while(now!=a[j]){
                    now=q.back();
                    q.pop_back();
                    if(q.size()<=0) break;
                    vis[now]=0;
                }
                q.push_back(a[j]);
                vis[a[j]]=1;
            }
        }
        while(q.size()>0){
            int l=q.front();
            q.pop_front();
            ans[l]++;   
        }
    }
    for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
    return 0;
}
