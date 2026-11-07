#include<bits/stdc++.h>
using namespace std;
int n,m,a[500009],f[500009],id[500009],p[500009];
int ans[300009];
vector<int> cnt[300009];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cnt[a[i]].push_back(i);
	}
	for(int i=1;i<=m;i++){
		for(int j=0;j<cnt[i].size();j++){
			id[cnt[i][j]]=j+1;
		}
	}
	fill(p+1,p+n+1,1);
	int cnt1=0;
	for(int i=1;i<=n;i++){
		cnt1+=p[i];
		f[i]=cnt1;
		int l=a[i];
		int h=id[i];
		int gh=f[i];
		if(h+1<=cnt[l].size()){
			int v=cnt[l][h];
			p[i+1]-=gh;
			p[v]+=gh;
		}
	}
	for(int i=1;i<=m;i++){
		int ma=0;
		for(int j=0;j<cnt[i].size();j++){
			ma=max(ma,f[cnt[i][j]]);
		}
		ans[i]=ma;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
