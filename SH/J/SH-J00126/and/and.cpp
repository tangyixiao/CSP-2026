#include <bits/stdc++.h>
using namespace std;
int n,m,ans,a[200010];
void dfs(int stp,int stt,int sum){
	if(stp>m){
		ans=max(ans,sum);
		return;
	}
	for(int i=stt;i<n;++i){
		dfs(stp+1,i+1,sum&a[i]);
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;++i) cin>>a[i];
	if(m==n){
		ans=a[0];
		for(int i=1;i<n;++i) ans&=a[i];
		cout<<ans;
	}else{
		for(int i=0;i<n;++i){
			dfs(2,i+1,a[i]);
		}
	}
	cout<<ans;
	return 0;
}
