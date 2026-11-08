#include<bits/stdc++.h>
using namespace std;
int n,m; 
long long a[200005];
long long qz[200005]={},hz[200005]={};
long long ans=INT_MIN;
void dfs(int st,int p,long long andd){
	if(st>n){
		if(p==m){
			ans=max(ans,andd);
		}
		return;
	}
	st++;
	if(andd==0&&p==0)dfs(st,p+1,a[st]);
	else dfs(st,p+1,andd&a[st]);
	dfs(st,p,andd);
	return ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=20){
		dfs(0,0,0);
		cout<<ans;
		return 0; 
	}else if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(a[i],ans);
		}
		cout<<ans<<'\n';
		return 0; 
	}else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans<<'\n';
		return 0; 
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j) continue;
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans<<'\n';
		return 0;
	}else if(m==n-1){
		qz[1]=a[1];
		hz[n]=a[n];
		for(int i=2;i<=n;i++){
			qz[i]=qz[i-1]&a[i];
		}
		for(int i=n-1;i>=1;i--){
			hz[i]=hz[i+1]&a[i];
		}
		ans=max(qz[n-1],hz[2]);
		for(int i=2;i<=n-1;i++){
			ans=max(qz[i-1]&hz[i+1],ans);
		}
		cout<<ans<<'\n';
		return 0;
	}else{
		for(int i=1;i<=n;i++){
			ans=max(a[i],ans);
		}
		cout<<ans<<'\n';
		return 0; 
	}
	return 0;
}
/*

4 2
3 15 12 12

5 3
31 3 1 15 7


*/
