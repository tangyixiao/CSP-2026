#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int a[200010];
	int ma=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ma=max(ma,a[i]);
	}
	if(m==1){
		cout<<ma;
		return 0;
	}
	int ans=0;
	if(m==2){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==n-1){
		int t=0;
		for(int i=1;i<=n;i++){
			ans=2147483647;
			for(int j=1;j<=n;j++){
				if(j==i) continue;
				ans=ans&a[i];
			}
			t=max(t,ans);
		}
		cout<<t;
		return 0;
	}
	cout<<ma;
	return 0;
}

