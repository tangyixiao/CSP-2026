#include<bits/stdc++.h>
//#define int long long
using namespace std;
const int N=2e6+100;
int a[N],last[N];
int n,m;
int cnt[N];
int ans[N];
bool vis[N];
vector<int>q;
vector<int>end1[N];
void find(int now){
	if(now>n)return;
	if(vis[a[now]]){
		for(auto j:end1[a[now]]){
			q.push_back(j);
		}
		return;
	}
	find(last[a[now]]+1);
	vis[a[now]]=1;
	q.push_back(a[now]);
	for(auto j:q){
		end1[a[now]].push_back(j);
		ans[j]+=cnt[a[now]];
	}
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		last[a[i]]=i;
		cnt[a[i]]++;
	}
	for(int i=1;i<=n;i++){
		if(vis[a[i]]==1)continue;
		find(i);
		vis[a[i]]=1;
		q.clear();
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
}

