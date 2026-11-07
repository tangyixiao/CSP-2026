#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
int n,m,a[200050],k_[50],flag1=1,flag2=1,ans;
void dfs(int last,int stp,int res){
	if(stp==m){
		ans=max(ans,res);
		return;
	}
	for(int i=last;i<=n;i++){
		if(stp==0){
			res=a[i];
		}
		dfs(i+1,stp+1,res&a[i]);
	}
	return;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	long long r=1;
	k_[0]=0;
	for(int i=1;i<=30;i++){
		r*=2;
		k_[i]=r-1;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int t=0;
		for(int j=0;j<=30;j++){
			if(a[i]==k_[j]){
				t=1;
			}
		}
		if(t==0){
			flag1=0;
		}
		if(a[i]!=i-1){
			flag2=0;
		}
	}
	if(n<=20){
		dfs(0,0,0);
		cout<<ans; 
	}else if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
		cout<<ans;
	}else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
	}else if(m==2){
		dfs(0,0,0);
		cout<<ans;
	}else if(m==n-1){
		int y;
		y=a[1];
		for(int i=2;i<=n;i++){
			y&=a[i];
		}
	}else if(flag1){
		sort(a+1,a+n+1);
		ans=a[n];
		for(int i=n-1;i>=n-m+1;i++){
			ans&=a[i];
		}
		cout<<ans;
	}else if(flag2){
		cout<<a[n]-m+1;
	}
	return 0;
} 