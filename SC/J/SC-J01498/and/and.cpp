#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int n,m,ans;
void dfs(int x,int d,int s){
	if(s==m){
		ans=max(ans,d);
	}
	if(s==m-1){
		ans=max(ans,d&a[x]);
	}
	if(x==n-1){
		return;
	}
	dfs(++x,d,s);
	if(d==-1){
		dfs(x,a[x-1],++s);
	}
	else{
		dfs(x,d&a[x-1],++s);
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	a.resize(n);
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	if(m==n){
		ans=a[0];
		for(int i=1;i<n;++i){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==1){
		for(int i=0;i<n;++i){
			ans=max(ans,a[i]);
		}
		cout<<ans;
		return 0;
	}
	if(m==n-1){
		int ans1=a[1];
		ans=a[0];
		for(int i=1;i<n-1;++i){
			ans&=a[i];
		}
		for(int i=2;i<n;++i){
			ans1&=a[i];
		}
		cout<<max(ans,ans1);
		return 0;
	}
	if(m==2){
		for(int i=0;i<n-1;++i){
			for(int j=i+1;j<n;++j){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if(n<=20){
		dfs(0,-1,0);
		cout<<ans;
		return 0;
	}
	sort(a.begin(),a.end());
	ans=a[n-1];
	for(int i=n-2;i>=n-m;--i){
		ans&=a[i];
	}
	cout<<ans;
	return 0;
}