#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200010],ans=0;
bool cmp(long long x,long long y){
	return x>y;
}
void dfs(long long k,long long j,long long sum){
	if(k>=m){
		ans=max(ans,sum);
		return ;
	}
	for(int i=j+1;i<=n-m+k+1;i++){
		dfs(k+1,i,sum&a[i]);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++)ans=max(ans,a[i]);
		cout<<ans;
		return 0;
	}
	if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++)ans=ans&a[i];
		cout<<ans;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if(n>2000){
		sort(a+1,a+1+n,cmp);
		ans=a[1];
		for(int i=2;i<=m;i++)ans=ans&a[i];
		cout<<ans;
		return 0;
	}
	for(int i=1;i<=n-m+1;i++){
		dfs(1,i,a[i]);
	}
	cout<<ans;
	return 0;
}