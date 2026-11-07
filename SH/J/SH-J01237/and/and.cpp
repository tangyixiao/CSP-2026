#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
	return x>y;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	if(m==1){
		int ans=0;
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			ans=max(ans,x);
		}
		cout<<ans<<'\n';
		return 0;
	}
	if(m==n){
		int ans=0;
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			ans&=x;
		}
		cout<<ans<<'\n';
		return 0;
	}
	if(m==2){
		int ans=0;
		int a[n+1000]={};
		for(int i=1;i<=n;i++)cin>>a[i];
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans<<'\n';
		return 0;
	}
	int ans=0;
	int a[n+1000]={};
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1,cmp);
	ans=a[1];
	for(int i=1;i<=m;i++){
		ans=ans&a[i];
	}
	cout<<ans<<'\n';
}
