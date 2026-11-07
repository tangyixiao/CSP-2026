#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,h,a[200005],d[200005],v[200005],ans=0;
void dfs(int x,int y){
	if(x>m){
//		for(int i=1;i<=m;i++){
//			cout<<d[i]<<' ';
//		}
//		cout<<"\n";
		ans=max(ans,y);
		return;
	}
	for(int i=1;i<=n;i++){
		if(v[i]||i<=h)continue;
		v[i]=1;
		d[x]=a[i];
		int yy=y;
		yy&=a[i];
		h=i;
		dfs(x+1,yy);
		h=i;
		v[i]=0;
		d[x]=0;
	}
}
signed main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n-m+1;i++){
		memset(v,0,sizeof(v));
		d[1]=a[i];
		v[i]=1;
		h=i;
		dfs(2,a[i]);
		v[i]=0;
		//cout<<i<<"\n";
	}
	cout<<ans;
}
/*
4 2
3 15 12 12
5 3
31 3 1 15 7
*/
