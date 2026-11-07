#include<bits/stdc++.h>
using namespace std;
int vis[500005],a[500005],sum[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int q=1;q<=n;q++){
		memset(vis,0,sizeof vis);
		stack<int>s;
		for(int i=q;i<=n;i++){
			if(!vis[a[i]]){
				s.push(a[i]);
				vis[a[i]]=1;
			}
			else{
				while(s.top()!=a[i]){
					vis[s.top()]=0;
					s.pop();
				}
			}
		}
		for(int i=1;i<=m;i++)if(vis[i])sum[i]++;
	}
	for(int i=1;i<=m;i++)cout<<sum[i]<<" ";
	return 0;
}
