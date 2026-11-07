#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200010],dp[200010];

signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	bool flag1=1,flag2=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>4){
			flag1=0;
		}
		int flaging2=0;
		for(int j=1;j<=30;j++){
			if(1<<j==a[i]+1){
				flaging2=1;
				break;
			}
		}
		if(flaging2==0){
			flag2=0;
		}
	}
	if(n==m){
		int ans=INT_MAX;
		for(int i=1;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==1){
		int ans=-1;
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		int ans=-1;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if(flag1==1){
		cout<<"1";
		return 0;
	}
	if(flag2==1){
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
		return 0;
	}
	cout<<"0";
	return 0;
}
