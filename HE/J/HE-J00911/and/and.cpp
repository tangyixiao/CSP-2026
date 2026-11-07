#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	if(m==1){
		cout<<a[n];
	} 
	else if(m==2){
		int ans=INT_MIN;
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				ans=max(ans,a[i]&a[j]);
		cout<<ans;
		return 0;
	}
	else if(m==n-1){
		int ans1=a[2],ans2=a[1];
		for(int i=3;i<=n;i++) ans1&=a[i];
		for(int i=2;i<=n;i++) ans2&=a[i];
		cout<<max(ans1,ans2);
	}
	else if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++) ans&=a[i];
		cout<<ans;
	}
	else{
		int ans=INT_MIN,cnt;
		for(int i=n;i>=1;i--){
			cnt=a[i];
			for(int k=1;k<=m;k++){
				if(i-k>0) cnt&=a[i-k];
				else cnt&=a[i+n-k];
}
			ans=max(ans,cnt);
}
		cout<<ans;
}
	return 0;
} 
