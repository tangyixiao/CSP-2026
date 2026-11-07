#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N],dp[N];
int ok(int x){
	int maxx=0;
	for(int i=x-m;i<=x;i++){
		int sum=a[x-m];
		for(int j=x-m+1;j<=x;j++){
			if(j!=i){
				sum=sum&a[j];
			}
		}
		maxx=max(maxx,sum);
	}
	return maxx;
} 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int maxx=0,sum;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxx=max(maxx,a[i]);
		sum=sum&a[i];
	}
	sum=a[1];
	for(int i=2;i<=n;i++){
		sum=sum&a[i];
	}
	if(n==m){
		cout<<sum;
		return 0; 
	}
	if(m==1){
		cout<<maxx;
		return 0; 
	}
	dp[1]=a[1];
	for(int i=2;i<=m;i++){
		dp[i]=dp[i-1]&a[i];
	}
	for(int i=m+1;i<=n;i++){
		dp[i]=max(dp[i-1],ok(i));
	}
	cout<<dp[n];
	return 0;
}
