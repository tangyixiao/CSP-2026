#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,ans=0,maxl=0;
int a[200010];
int b[200010];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int j=30;j>=0;j--){
		bool bb[n];
		for(int i=1;i<=n;i++)bb[i]=0;
		int x=1<<j,ok=0;
		for(int i=1;i<=n;i++){
			if(a[i]&x && b[i]==0)
				ok++;
			else bb[i]=1;
		}
		if(ok>=m){
			ans+=x;
			for(int i=1;i<=n;i++)
				b[i]=bb[i];
		}
	}
	cout<<ans;
	return 0;
}
