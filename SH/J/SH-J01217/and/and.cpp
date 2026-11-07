#include<bits/stdc++.h>
using namespace std;
int n,m,maxn,qqdr;
int a[200500];
int mark[25];
void dfs(int i,int l){
	if(i>n){
		if(l==m){
			int cnt=0,ans;
			for(int i=1;i<=n;i++){
				if(mark[i]==1){
					if(cnt==0){
						ans=a[i];
						cnt=1;	
					}
					else {
						ans=ans&a[i];
					}
				}
			}
			qqdr=max(qqdr,ans);
		}
		return ;
	}
	mark[i]=1;
	dfs(i+1,l+1);
	mark[i]=0;
	dfs(i+1,l);
	return ;
}
int main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i],maxn=max(maxn,a[i]);
	if(m==1){
		cout<<maxn;
		return 0;
	}
	if(m==n){
		int cnt=a[1];
		for(int i=2;i<=n;i++){
			cnt=cnt&a[i];
		} 
		cout<<cnt;
		return 0;
	}
	if(m==2){
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j){
					ans=max(ans,a[i]&a[j]);
				}
			}
		}
		cout<<ans;
		return 0;
	}
	sort(a+1,a+1+n);
	int ans=a[n-m+1];
	for(int i=n-m+2;i<=n;i++){
		ans=ans&a[i];
	}
	cout<<ans;
	return 0;
	if(n<=20){
		dfs(1,0);
		cout<<qqdr;
		return 0; 
	}
	
	return 0;
}
