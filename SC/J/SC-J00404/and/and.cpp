#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n,m,a[200010],ans,p[200010],q[200010];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){cin>>a[i];}
	sort(a+1,a+n+1);
	ans=a[n];
	if(m==1){
		cout<<ans;return 0;
	}
	if(m==n){
		for(int i=1;i<n;i++)ans+=a[i];
		cout<<ans;return 0;
	}
	if(m==2){
		ans=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++)ans=max(ans,a[i]&a[j]);
		}
		cout<<ans;return 0;
	}
	if(m==n-1){
		ans=0;
		int o=a[1];p[1]=o;
		for(int i=2;i<=n;i++){
			o&=a[i];p[i]=o;
		}
		o=a[n];q[n]=o;
		for(int i=n-1;i>=1;i--){
			o&=a[i];q[i]=o;
		}
		for(int i=1;i<=n;i++){
			ans=max(ans,p[i-1]&q[i+1]);
		}
		cout<<ans;return 0;
	}
	for(int i=n-1;i>=n-m+1;i--)ans&=a[i];
	cout<<ans;
	return 0;
}
/*
011

3
*/