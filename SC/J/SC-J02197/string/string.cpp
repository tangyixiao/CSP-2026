#include <iostream>
#include <cmath>
using namespace std;
#define int long long
const int N = 2e5 + 10;

struct str{
	int nums; 
	char z;
}stri[N];

void solve() {
	int n, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i ++) {
		cin >> stri[i].nums >> stri[i].z;
	}
	int l = 0, r = n - 1;
	while(l < r) {
		if(stri[l].z != stri[r].z) {
			cnt += min(stri[r].nums, stri[l].nums);
		}
		int sn = stri[r].nums;
		stri[r].nums -= min(stri[r].nums, stri[l].nums);
		stri[l].nums -= min(sn, stri[l].nums);
		if(stri[r].nums == 0) r--;
		if(stri[l].nums == 0) l++;
	}
	cout << cnt;
}
signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int T = 1;
	//cin >> T;
	while(T--) {
		solve();
	}
}