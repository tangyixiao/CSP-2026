#include <bits/stdc++.h>
using namespace std;
const int MAXN=2e5+10;
int a[MAXN],n,m,f[MAXN][2];
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(n<=22){
		for(int i=1;i<=n;i++) cin>>a[i];
		int ans=0;
		for(int p=1;p<1<<n;p++){
			int ct=0,np=0;
			for(int i=1;i<=n;i++) if((1<<(i-1))&p){
				ct++;
				np=(ct==1?a[i]:np&a[i]);
			} if(ct==m) ans=max(ans,np);
		} cout<<ans;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++) cin>>a[i];
		int ans=0;
		for(int i=1;i<n;i++) for(int j=i+1;j<=n;j++)
			ans=max(ans,a[i]&a[j]);
		cout<<ans;
		return 0;
	}
	if(m==n){
		int ans; cin>>ans;
		for(int i=2;i<=n;i++) cin>>a[i],ans&=a[i];
		cout<<ans;
		return 0;
	}
	bool is_A=1,is_B=1;
	for(int i=1;i<=n;i++) cin>>a[i],f[i][1]=a[i],is_B=(a[i]==i-1);
	if(is_B){
		sort(a+1,a+1+n);
		cout<<a[n-m+1];
		return 0;
	}
	if(m==1){
		sort(a+1,a+1+n);
		cout<<a[n];
		return 0;
	}
	for(int c=2;c<=m;c++){
		for(int i=1;i<=n;i++){
			int mx=0;
			for(int j=i-1;j;j--) mx=max(mx,f[j][(c-1)&1]&a[i]);
			f[i][c&1]=mx;
		}
	} cout<<f[n][m&1];
	return 0;
}
