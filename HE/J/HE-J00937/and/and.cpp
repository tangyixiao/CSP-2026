#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],ans=0,b[200005],c;
int v[200005];
/*void dfs(int i){
	if(i==m){
		for(int j=1;j<=m;j++){
			c=c&b[j];
		}
		ans=max(ans,c);
		return;
	}
	for(int j=1;j<=n;j++){
		if(v[i])continue;
		if(i==1)c==a[j];
		v[i]=1;
		b[i]=a[j];
		dfs(i+1);
	}
}*/
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	//dfs(1);
	//cout<<ans;
	sort(a+1,a+n+1);
	cout<<a[n-m+1];
	return 0;
}
