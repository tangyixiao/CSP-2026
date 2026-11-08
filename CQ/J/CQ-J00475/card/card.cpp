#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=5e5+5;
int a[N];
int mx[N];
int f[N];
int ans[N];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx[a[i]]=max(mx[a[i]],i);
	}
	for(int i=1;i<=n;i++){
		f[i]++;
		f[mx[a[i]]+1]+=f[i];
		ans[a[i]]+=f[i];
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i];
		if(i!=m)cout<<' ';
	}
	cout<<'\n';
	return 0;
}
