#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005],ans=0;
void dfs(int x,int d,int cnt){
	cnt&=a[x];
	if(d==m){
		ans=max(cnt,ans);
		return;
	}
	for(int i=x+1;i<=n;i++){
		dfs(i,d+1,cnt);
	}
	return;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(int i=1;i<=n-m+1;i++){
		dfs(i,1,a[i]);
	}
	cout<<ans;
	return 0;
}
/*
5
3 a
4 b
5 c
2 a
4 b

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/