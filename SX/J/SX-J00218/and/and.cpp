#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	vector<int> a(n+1);
	for(int i=1;i<=n;++i){
		cin >> a[i];
	}
	if(n<=20){
		int ans=-1e9;
		function<void(int, int, int, bool)> dfs = [&](int i, int cnt, int sum, bool flag){
			if(cnt==m){
				ans=max(ans, sum);
				return;
			}
			if(i>n) return;
			if(flag) dfs(i+1, cnt+1, a[i], false);
			else dfs(i+1, cnt+1, (sum&a[i]), flag);
			dfs(i+1, cnt, sum, flag);
		};
		dfs(1, 0, 0, true);
		cout << ans << endl;
	}else if(m==1){
		int mx=-1e9;
		for(int i=1;i<=n;++i){
			mx=max(mx, a[i]);
		}
		cout << mx << endl;
	}else if(m==2){
		int ans=-1e9;
		for(int i=1;i<=n;++i){
			for(int j=i+1;j<=n;++j){
				ans=max(ans, (a[i]&a[j]));
			}
		}
		cout << ans << endl;
	}else if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;++i){
			ans=(ans&a[i]);
		}
		cout << ans << endl;
	}else{
		sort(a.begin()+1, a.end(), [&](int xx, int yy){
			return xx>yy;
		});
		int ans=a[1];
		for(int i=2;i<=m;++i){
			ans=(ans&a[i]);
		}
		cout << ans << endl;
	}
	return 0;
}
/*
5 3
31 3 1 15 7
*/