# include <bits/stdc++.h>

using namespace std;

# define int long long

const int maxn = 2 * 1e5 + 5;

struct Node {
	int times;
	char str;
}a[maxn];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	int n;
	cin >> n;
	
	for (int i = 1; i <= n; ++i) {
		cin >> a[i].times >> a[i].str;
	}
	
	int l = 1, r = n;
	int result = 0;
	
	while (l <= r) {
		int lt = a[l].times;
		char lc = a[l].str;
		
		int rt = a[r].times;
		char rc = a[r].str;
		
		// cout << "lt, lc, rt, rc is: " << lt << ' ' << lc << ' ' << rt << ' ' << rc << '\n';
		
		if (lc != rc) {
			int cnt1 = min(lt, rt);
			
			lt -= cnt1;
			rt -= cnt1;
			
			a[l].times = lt;
			a[r].times = rt;
			
			if (lt == 0) {
				l++;
			}
			if (rt == 0) {
				r--;
			}
			
			result += cnt1;
		} else {
			int cnt2 = min(lt, rt);
			
			lt -= cnt2;
			rt -= cnt2;
			
			a[l].times = lt;
			a[r].times = rt;
			
			if (lt == 0) {
				l++;
			}
			if (rt == 0) {
				r--;
			}
		}
	}
	
	cout << result << '\n';
	return 0;
}
