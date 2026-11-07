#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,ans=-1;
int a[200005];
void dfs(int x,int y,int num){
	if(y==m){
		ans=max(num,ans);
		return;
	}
	if(x==n)return;
	if(n-x<m-y)return;
	dfs(x+1,y,num);
	if(y)dfs(x+1,y+1,(num&a[x]));
	else dfs(x+1,y+1,a[x]);
	return;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	int maxx=-1,s2;
	for(int i=0;i<n;i++){
		cin>>a[i];
		maxx=max(maxx,a[i]);
		if(i)s2&=a[i];
		else s2 =a[i];
	}
	if(m==1)cout<<maxx;
	else if(m==n)cout<<s2;
	else if(n<=2000){
		dfs(0,0,0);
		cout<<ans;
	}else{
		sort(a,a+n,greater<int>());
		cout<<a[m-1];
	}
	return 0;
}