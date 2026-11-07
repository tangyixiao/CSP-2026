#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[200000+10];
int ansmax;
int maxn; 
int ans1=2097151;
int ansmax1;

void dfs(int x,int cnt,int ans) {
	if (cnt+n-x+1<m) return;
	if (cnt==m) {
		ansmax=max(ans,ansmax);
		return;
	}
	//ฒปัก
	dfs(x+1,cnt,ans);
	//ัก
	dfs(x+1,cnt+1,(ans&a[x])); 
}

signed main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i=1;i<=n;i++) {
		cin >> a[i];
		maxn=max(a[i],maxn);
		ans1=ans1&a[i];
	}
	if (n<=20) {
		dfs(1,0,2097151);
		cout << ansmax;
	}
	else if (m==1) cout << maxn;
	else if (m==n) cout << ans1;
	else if (m==2) {
		for (int i=1;i<=n-1;i++) {
			for (int j=i+1;j<=n;j++) {
				int a1=a[i],a2=a[j];
				ansmax1=max(ansmax1,a1&a2);
			}
		}
		cout << ansmax1;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
