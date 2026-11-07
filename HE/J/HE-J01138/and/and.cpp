#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N],dp[N];//dp数组是指i大小的最大与
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans=-1;
	sort(a+1,a+n+1);
	bool flag=false;
	for(int i=1;i<=n;i++){
		if(a[i]==a[i-1]){
		flag=true;
		ans=max(ans,a[i]);
	}
	}
	if(flag==true){
		cout<<ans;
		return 0;
	}
	for(int i=1;i<=n;i++){
		int num=max(num,a[i]&a[i-1]);
		dp[i]=num;
	}
	for(int i=1;i<=n;i++){
		int w=1,v=a[i];
		for(int j=m;j>=w;j--){
			dp[i]=max(dp[i],dp[j-w]&v);
		}
	}
	cout<<dp[m];
}
