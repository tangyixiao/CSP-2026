#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int a[N],ed[M],ans[M],tms[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ed[a[i]]=i;
	}
	for(int i=1;i<=n;i++) tms[i]=1;
	for(int i=1;i<=n;i++){
		ans[a[i]]+=tms[i];
		tms[ed[a[i]]+1]+=tms[i];
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
} 