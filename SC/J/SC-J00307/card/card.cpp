#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int a[500005],ans[500005];
void solve(int s){
	vector<int> p(n+5,0);
	map<int,int> vis;
	int pos=1;
	for(int i=s;i<=n;i++){
		if(vis[a[i]]==0){
			vis[a[i]]=i;
			p[pos]=a[i];
		}else{
			pos=vis[a[i]];
		}
		pos++;
	}
	for(int i=1;i<pos;i++)	ans[p[i]]++;
	
	return ;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);

	bool oup=true;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i-1]>a[i])	oup=false;
	}
	if(oup){
		map<int,int> mp;
		for(int i=1;i<=n;i++)	mp[a[i]]=i;
		for(int i=1;i<=m;i++)	cout<<mp[i]<<' ';
		return 0;
	}else{
		for(int i=1;i<=n;i++)	solve(i);
		for(int i=1;i<=m;i++)	cout<<ans[i]<<' ';
	}
	return 0;
}
