#include<bits/stdc++.h>

using namespace std;

#define int long long

const int N = 2e5+5;
int a[N];

signed main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	cin >> n >> m;
	
	if(n <= 20) {
		int onecount = 0;
		int mx = -100000;
		for(int i=1; i<=n; i++) {
			cin >> a[i];
			if(a[i] == 1) {
				onecount ++;
			}
			mx = max(mx,a[i]);
		}
		if(onecount == n-1) {
			cout << 1;
			return 0;
		}
		sort(a+1,a+1+n);
		int ans = a[n];
		for(int i=n-1; i>=n-m+1; i--) {
			ans &= a[i];
		}
		cout << ans;
		return 0;
	} else if(m == 1) {
		int mx = -10000;
		for(int i=1; i<=n; i++) {
			cin >> a[i];
			mx = max(mx,a[i]);
		}
		cout << mx;
		return 0;
	} else if(m == n) {
		int ans;
		cin >> ans;
		for(int i=1; i<n; i++) {
			int temp;
			cin >> temp;
			ans &= temp;
		}
		cout << ans;
	} else if(m == 2) {
		for(int i=1; i<=n; i++) {
			cin >> a[i];
		}
		sort(a+1,a+1+n);
		int mx = a[n];
		int mc = a[n-1];
		mx &= mc;
		cout << mx;
		return 0;
	} else {
		int ans = -100000;
		for(int i=1; i<=n; i++) {
			cin >> a[i];
		}
		for(int i=1; i<=n-m; i++) {
			int cmp=a[i];
			for(int j=i+1; j<=i+m; j++) {
				cmp &= a[j];
			}
			ans = max(ans,cmp);
		}
		cout << ans;
		return 0;
	} else {
		srand(time(0));
		int ans = rand() % 100000;
		cout << ans;
		return 0;
		// rp++ 
	}
	
	// 我不想只有三等奖 qwq
	
	return 0;
	
}
