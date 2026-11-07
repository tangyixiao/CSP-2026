#include <bits/stdc++.h>
using namespace std;
int n,m,a[200010],ans;
void dfs(int now,int cnt,int vla){
	if (now>n){
		if (cnt==m) ans=max(ans,vla);
		return;
	}
	dfs(now+1,cnt,vla);
	dfs(now+1,cnt+1,vla&a[now]);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++) cin>>a[i];
	if (n<=20){
		dfs(1,0,1073741823);
		cout<<ans<<endl;
		return 0;
	}
	if (n<=2000){
		if (m==1){
			for (int i=1;i<=n;i++) ans=max(ans,a[i]);
			cout<<ans<<endl;
			return 0;
		}
		if (m==n){
			ans=1073741823;
			for (int i=1;i<=n;i++) ans&=a[i];
			cout<<ans<<endl;
			return 0;
		}
		for (int i=1;i<n;i++)
			for (int j=i+1;j<=n;j++) ans=max(ans,a[i]&a[j]);
		cout<<ans<<endl;
		return 0;
	}
	sort(a+1,a+n+1);
	ans=1073741823;
	for (int i=n;i>=n-m+1;i--) ans&=a[i];
	cout<<ans<<endl;
	return 0;
}
