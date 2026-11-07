#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int a[300000]; 
int ans=0;
void dfs(int now,int al,int an){
	if(al+n-now+1<m) return ;
	if(al==m) {
		ans=max(ans,an);
		return ;
	}
	dfs(now+1,al,an);
	dfs(now+1,al+1,an&=a[now]);
	
	return ;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n>2000){
		int sum=pow(2,32)-1;
		sort(a+1,a+n+1,greater<int>());
		for(int i=1;i<=m;i++) sum&=a[i];
		cout<<sum;
		return 0;
	}
	dfs(1,0,pow(2,32)-1);
	cout<<ans;
	return 0;
}
