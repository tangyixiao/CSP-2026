#include<bits/stdc++.h>
using namespace std;
int cnt[100],ma=-2e9,n,m,a[1000005],bj2,sum[1000005],sum1[1000005],bj,bj1;
void dfs(int x,int su,int qs){
	if(x>m){
		ma=max(ma,su);
		return;
	}
	if(x==1){
		for(int i=1;i<=n;i++)dfs(2,a[i],i+1);
		return;
	}
	for(int i=qs;i<=n;i++){
		dfs(x+1,su&a[i],i+1);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	cin>>a[1];
	if(a[1]!=0)bj2=1;
	sum[1]=a[1];
	for(int i=2;i<=n;i++){
		cin>>a[i];
		if(a[i]!=i-1)bj2=1;
		if(a[i]>=4)bj1=1;
		if(int(log2(a[i]))==int(log2(a[i]+1)))bj=1;
		sum[i]=sum[i-1]&a[i];
	}
	sum1[n]=a[n];
	for(int i=n-1;i>=1;i--)sum1[i]=sum1[i+1]&a[i];
	if(bj==0){
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
		return 0;
	}
	if(n==m){
		cout<<sum;
		return 0;
	}
	if(m==n-1){
		int maxx=-2e9;
		maxx=max(maxx,sum[2]);
		maxx=max(maxx,sum1[n-1]);
		for(int i=2;i<n;i++){
			maxx=max(maxx,sum[i-1]&sum1[i+1]);
		}
		cout<<maxx;
		return 0; 
	}
	if(m==1){
		int m=-2e9;
		for(int i=1;i<=n;i++)m=max(m,a[i]);
		cout<<m;
		return 0;
	}
	if(bj1==0){
		for(int i=1;i<=n;i++)cnt[a[i]]++;
		if(cnt[3]>=m)cout<<"3";
		else if(cnt[3]+cnt[2]>=m)cout<<"2";
		else if(cnt[3]+cnt[1]>=m)cout<<"1";
		else cout<<"0";
		return 0;
	}
	if(pow(2,int(log2(n)))==n&&bj2==0){
		if(m<=(n+1)/2){
			int sss=a[n];
			for(int i=n-1;i>=n-m+1;i--)sss&=a[i];
			cout<<sss;
			return 0;
		}
		else {
			cout<<"0";
			return 0;
		}
	}
	else{
		dfs(1,0,1);
		cout<<ma;
	}
	return 0;
}