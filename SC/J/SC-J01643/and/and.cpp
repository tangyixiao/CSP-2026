#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[200010];
int ans=-1;
int ans6=-1;
int ans7=0;
int ans8=-1;
int ans11=0;
//int dp[25][25];
void dfs(int p,int step,int cnt){
//	cout<<p<<" "<<step<<" "<<cnt<<endl;
	if(step>m){
		ans=max(ans,cnt);
		return ;
	}
	for(int i=p+1;i<=n-(m-step);i++){
		dfs(i,step+1,cnt&a[i]);
	}
	return ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ans6=max(ans6,a[i]);
	}
	if(m==1){
		cout<<ans6;
		return 0;
	}
	if(m==n){
		ans7=a[1];
		for(int i=2;i<=n;i++){
			ans7=ans7&a[i];
		}
		cout<<ans7;
		return 0;
	}
	if(m==2){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				ans8=max(ans8,a[i]&a[j]);
			}
		}
		cout<<ans8;
		return 0;
	}
	if(n>3000){
		if(m!=n-1){
			cout<<ans6;
			return 0;
		}
		if(m==n-1){
			ans11=a[1];
			for(int i=2;i<=n;i++){
				ans11=ans11&a[i];
			}
			cout<<ans11;
			return 0;
		}
	}
	for(int i=1;i<=n-m+1;i++){
		dfs(i,2,a[i]);
	}
	cout<<ans;
//int a=3,b=12;
//	cout<<(a&b);
	return 0;
}