#include<bits/stdc++.h>
using namespace std;
long long n,m,maxn=0;
long long a[200010],dp[200010];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
		//dp[i]=a[i];
	}
	if(m==1){
		cout<<maxn;
		return 0;
	}else if(m==2){
		int oo=0;
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				oo=max(oo,a[i]&a[j]);
			}
		}
		cout<<oo;
		return 0;
	}else if(m==n){
		int oo=a[1];
		for(int i=2;i<=n;i++){
			oo&=a[i];
		}
		cout<<oo;
		return 0;
	}
	/*
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=n;i++){
		if(a[i]==a[i+1])
	}
	maxn=a[i];
	for(int i=2;i<=m;i++){
		maxn&=a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=m;j>=1;j--){
			if(j>=1){
				dp[j]=max(dp[i-1],dp[j-1]&a[i]);
			}
		}
	}
	for(int i=1;i<=n;i++){
		maxn=max(dp[i],maxn);
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(j!=i){
				int o=a[i]&a[j];
				maxn=max(o,maxn);
			}
		}
	}
	cout<<maxn;
	*/
	return 0;
} 
