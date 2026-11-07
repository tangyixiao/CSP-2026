#include<bits/stdc++.h>
#define ll int64_t
#define endl '\n'
#define lowbit(x) x&(-x)
using namespace std;
ll n,m,a[500000+10],lst[300000+10],ans[300000+10],val[500000+10],dep[500000+10],Min[300000+10];
vector<ll> vt[500000+10];
void dfs(ll u){
	val[u]=1;
	for(auto v:vt[u]){
		dep[v]=dep[u]+1;
		dfs(v);
		val[u]+=val[v];
	}
	if(Min[a[u]]>dep[u]) ans[a[u]]=val[u],Min[a[u]]=dep[u];
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++) cin>>a[n-i+1],Min[i]=1e9;
	lst[a[1]]=1;
	for(ll i=2;i<=n;i++){
		if(lst[a[i]]!=0){
			vt[lst[a[i]]].push_back(i);
			lst[a[i]]=i;
		}
		else{
			vt[i-1].push_back(i);
			lst[a[i]]=i;
		}
	}
	dfs(1);
	for(ll i=1;i<=m;i++){
		cout<<ans[i];
		if(i<m) cout<<" ";
	}
	return 0;
}
//打了三个假做法的我可以跳了
//为什么没有谷歌我想玩小恐龙呜呜呜
//罚坐1.5h