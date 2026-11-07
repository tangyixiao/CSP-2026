#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int ans;
void dfs(int step,int ans1,int cnt){
	if(cnt==m){
		if(ans1>ans)
			ans=ans1;
		return;
	}
	for(int i=step+1;i<=n;i++){
		dfs(i,ans1&a[i],cnt+1);
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n>2000){
		sort(a+1,a+1+n);
		cout<<a[n-m+1];
		return 0;
	}
	for(int i=1;i<=n;i++){
		dfs(i,a[i],1);
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout); 
	return 0;
}