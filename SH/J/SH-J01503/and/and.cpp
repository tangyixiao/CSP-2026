#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[200050];
int n,m,ans=0;

void dfs(int cur,int x,vector<int> v , bool sf) {
	if (n-cur+1 < m - x) return;
	if (sf) {
		v.push_back(a[cur]);
		x++;
	}
	
	if (cur>n || x >= m) {
		int oo = 0;
		for (int i=0;i<v.size();i++) {
			if (i==0) {
				oo = v[i];
			}else{
				oo = oo & v[i];
				
			}
		}
		
		ans  = max(ans,oo);
		return;
	}
	
	
	
	dfs(cur+1,x,v,0);
	dfs(cur+1,x,v,1);
}

signed main() {
	bool xzb = 0;
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	int op= n,uu=0;
	
	for (int i=1;i<=n;i++) {
		cin >> a[i];
	}
	if (n <=2000) {
		vector<int> st = {};
	dfs(1,0,st,0);
	dfs(1,0,st,1);
	cout << ans;
	}else{
		
	
			sort(a+1,a+n+1);
			ans = a[n];
			for (int i=n-1;i>=n-m+1;i--) {
				ans = ans & a[i];
			}
			cout << ans;
		
		
	}
	
}
