#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[500005],cnt[300005];bool vis[300005];stack<int>s;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		memset(vis,0,sizeof(vis));
		for(int j=i;j<=n;j++){
			while(vis[a[j]]==1){
				vis[s.top()]=0;
				s.pop();
			}
			vis[a[j]]=1;
			s.push(a[j]);
		}
		while(!s.empty()){
			cnt[s.top()]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	return 0;
}