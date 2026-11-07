#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,a[N],d[N],sum[N],ans[N];
vector<int>w[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		w[a[i]].push_back(i);
	}
	for(int i=1;i<=n;i++){
		d[i]+=d[i-1];
		sum[i]=i+d[i];
		int sw=w[a[i]].size();
		int k=upper_bound(w[a[i]].begin(),w[a[i]].end(),i)-w[a[i]].begin();
		if(k==sw)continue;
		d[i+1]-=sum[i];
		d[w[a[i]][k]]+=sum[i];
	}
	for(int i=1;i<=n;i++)
		ans[a[i]]=max(ans[a[i]],sum[i]);
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" ";
	return 0;
}