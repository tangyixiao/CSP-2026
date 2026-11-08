#include <bits/stdc++.h>
using namespace std;
namespace contest{
	int n,m;
	int ans=-1;
	int a[200005];
	void dfs(int i,int add,int cntt){
		if (cntt==m){
			ans=max(ans,add);
			return;
		}
		if (i==n+1) return;
		if (!cntt) dfs(i+1,a[i],cntt+1);
		else dfs(i+1,add&a[i],cntt+1);
		dfs(i+1,add,cntt);
	}
	int main(){
		cin>>n>>m;
		int mx=-1;
		for (int i=1;i<=n;i++) cin>>a[i];
		if (m==1){
			int mx=-1;
			for (int i=1;i<=n;i++) mx=max(mx,a[i]);
			cout<<mx;
			return 0;
		}
		if (m==n){
			int ad=a[1];
			for (int i=2;i<=n;i++) ad&=a[i];
			cout<<ad;
			return 0;
		}
		if (m==n-1){
			for (int no=1;no<=n;no++){
				int ad=a[1];
				if (no==1){
					ad=a[2];
					for (int j=3;j<=n;j++) ad&=a[j];
				}
				else{
					for (int j=2;j<=n;j++){
						if (no==j) continue;
						ad&=a[j];
					}
				}
				ans=max(ans,ad);
			}
			cout<<ans;
			return 0;
		}
		if (m<=20){
			dfs(1,0,0);
			cout<<ans;
			return 0;
		}
		sort(a+1,a+1+n);
		cout<<a[n-m+1];
		return 0;
	}
};
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	contest::main();
	return 0;
}
