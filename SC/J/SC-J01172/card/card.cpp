#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[500005],sum[300005],ans[300005],last[300005],f[300005],fl[500005],b[500005];

void solve(int st,int en){
	for(int i=st;i<=en;++i){
		if(f[a[i]]!=0){
			for(int j=f[a[i]];j<i;++j){
				fl[j]=1;
				f[a[j]]=0;
			}
		}
		f[a[i]]=i;
	}
	for(int i=st;i<=en;++i){
		if(fl[i]==1){
			continue;
		}
		ans[a[i]]+=sum[a[st]];
	}
	return ;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		sum[a[i]]++;
		last[a[i]]=i;
	}
	for(int i=1;i<=m;++i){
		for(int j=1;j<=n;++j){
			f[j]=0;
			fl[j]=0;
		}
		int st=last[i];
		int en=n;
		solve(st,en);
	}
	for(int i=1;i<=m;++i){
		cout<<ans[i]<<' '; 
	}
	return 0;
}
