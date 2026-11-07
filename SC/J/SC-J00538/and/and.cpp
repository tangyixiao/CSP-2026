#include<bits/stdc++.h>
using namespace std;
	long long n,m,qwq=0;
	long long a[200005];
	long long vis[200005];
	long long pre[200005];
	long long suf[200005];
void dfs_1(long long ad,long long p){
	if(p==m){
		qwq=max(qwq,ad);
		return ;
	}
	long long ans=0,mx=0;
	for(long long i=1;i<=n;i++){
		if(p==0){
			vis[i]=1;
			dfs_1(a[i],p+1);
			vis[i]=0;
		}else{
			if((ad&a[i])>mx && vis[i]==0){
				mx=ad&a[i];
				ans=i;
			}
		}
	}
	vis[ans]=1;
	dfs_1(mx,p+1);
	vis[ans]=0;
}
int main(){

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);

	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	if(n<=20){
		dfs_1(0,0);
		cout<<qwq;
	}else if(m==1){
		cout<<a[n];
	}else if(n==m){
		long long sum=a[1];
		for(long long i=2;i<=n;i++){
			sum&=a[i];
		}
		cout<<sum;
	}else if(m==2){
		long long mx=0;
		for(long long i=1;i<=n;i++){
			for(long long j=i+1;j<=n;j++){
				mx=max(mx,(a[i]&a[j]));
			}
		}
		cout<<mx;
	}else if(m==(n-1)){
		long long mx=0;
		for(long long i=1;i<=n;i++){
			if(i==1){
				pre[i]=a[1];
			}else{
				pre[i]=pre[i-1]&a[i];
			}
		}
		for(long long i=n;i>=1;i--){
			if(i==n){
				suf[i]=a[i];
			}else{
				suf[i]=suf[i+1]&a[i];
			}
		}
		for(long long i=1;i<=n;i++){
			if(i==1){
				mx=max(mx,suf[2]);
			}else if(i==n){
				mx=max(mx,pre[n-1]);
			}else{
				mx=max(mx,(pre[i-1]&suf[i+1]));
			}
		}
		cout<<mx;
	}else{
		cout<<a[n-m+1];
	}
	return 0;
}
