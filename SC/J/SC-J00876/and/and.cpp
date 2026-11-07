#include<bits/stdc++.h>
using namespace std;
int a[200006];
int n,m;
//dp[i][j] 意为前i个元素选择j个按位与的最大值 
long long dfs(int i,int num,long long sum){
	long long ma=-1;
	if(num==0){
		return sum;
	}
	for(int j=i+1;j<=n;j++){
		//cout<<(sum&a[j])<<" "<<num<<" "<<j<<"\n";
		ma=max(ma,dfs(j,num-1,(sum&a[j])));
	}
	return ma;
}
int main(){ 
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	long long ma=-1;
	for(int i=1;i<=n;i++){
		ma=max(ma,dfs(i,m-1,a[i]));
	}
	cout<<ma;
	return 0;
}
