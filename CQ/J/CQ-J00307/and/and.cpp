#include <bits/stdc++.h>
using namespace std;
using ll = long long;

namespace code {
	const int N = 2e5 + 5;
	int n, m, a[N];
	
	void niam() {
		cin >> n >> m;
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		int mxn = n, ans = 0;
		vector<int> tmp;
		for(int w = 30; w >= 0; w--) {
			tmp.clear();
			for(int i = 1; i <= mxn; i++)
				if(a[i] >> w & 1)
					tmp.push_back(a[i]);
//			cout << w << ": ";
//			for(auto c : tmp)
//				cout << c << ' ';
//			cout << '\n';
			if((int)tmp.size() >= m) {
				ans += (1 << w);
				for(int i = 1; i <= (int)tmp.size(); i++)
					a[i] = tmp[i - 1];
				mxn = tmp.size();
			}
		}
		cout << ans;
	}
}

int main() {
#ifndef _NO_FREOPEN_
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
#endif
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	code::niam();
	
	return 0;
}

/*
40min
*/
/*
ohoh, i got breaking news and it's not about you, ohoh
...
i am out of salt
*/
