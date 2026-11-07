#include <bits/stdc++.h>
using namespace std;
int n,m,a[500001],ans[300001];
bool vis[300001];
vector<int>v;
stack<int>s;
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)scanf("%d",a+i);
    for(int i=n;i>=1;i--){
        while(!s.empty())s.pop();
        memset(vis,0,sizeof vis);
        for(int j=i;j<=n;j++){
            if(!vis[a[j]])vis[a[j]]=1;
            else while(s.top()!=a[j])vis[s.top()]=0,s.pop();
            s.push(a[j]);
        }
        for(int j=1;j<=m;j++)ans[j]+=vis[j];
    }
    for(int i=1;i<=m;i++)printf("%d ",ans[i]);
    return 0;
}