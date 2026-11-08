#include<bits/stdc++.h>
using namespace std;
const long long N=pow(2,31);
int n,m;
long long a[200005],ans=0;
void dfs(int k,long long cnt,int sum){
	if(k==n+1){
		if(sum==m)ans=max(ans,cnt);
		return ;
	}
	dfs(k+1,cnt & a[k],sum+1);
	dfs(k+1,cnt,sum);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	long long mx=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	if(m==1){
		cout<<mx;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i] & a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n){
		long long sum=N;
		for(int i=1;i<=n;i++){
			sum&=a[i];
		}
		cout<<sum;
	}
	if(m==n-1){
		for(int i=1;i<=n;i++){
			long long sum=N;
			for(int j=1;j<=n&&j!=i;j++){
				sum&=a[j];
			}
			ans=max(ans,sum);
		}
		cout<<ans;
		return 0;
	}
	int q=log2(mx)+1;
	dfs(0,N,0);
	cout<<ans;
	return 0;
}
