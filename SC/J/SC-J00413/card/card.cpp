#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500010],cnt[300010];
signed main(){
	freopen("card.in","r",stdin);freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		stack<int>s;
		bool vis[500010];
		memset(vis,0,sizeof vis);
		for(int j=i;j<=n;j++){
			while(vis[a[j]]&&!s.empty()){
				vis[s.top()]=0;
				s.pop();
			}s.push(a[j]);vis[a[j]]=1;
		}while(!s.empty()){
			cnt[s.top()]++;
			s.pop();
		}
	}for(int i=1;i<=m;i++)cout<<cnt[i]<<' ';
	return 0;
}