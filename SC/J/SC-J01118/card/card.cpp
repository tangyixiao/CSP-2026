#include<bits/stdc++.h>
#define int long long 
using namespace std;
int s[500010];
map<int,int> mp;
map<int,int> ans;
stack<int> q;
signed main(){	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m; cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>s[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(q.empty()) q.push(s[j]),mp[s[j]]=1;
			else if(mp[s[j]]==1){
				while(q.top()!=s[j]&&!q.empty()) q.pop();
			} else{
				mp[s[j]]=1;
				q.push(s[j]);
			}
		}
		for(int j=1;j<=m;j++) mp[j]=0;
		while(!q.empty()) ans[q.top()]++,q.pop();	
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}