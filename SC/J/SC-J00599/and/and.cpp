#include <bits/stdc++.h>

#define int long long

using namespace std;

const int N = 2e5+10;
string s[N];
int a[N];
bool flag[N];

void change(int x, int p) {
	for (int i = 0; i <= 31; ++i) {
		s[p] += ((x % 2) + '0');
		x /= 2;
	}
	return ;
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		change(a[i], i);
	}
	
//	for (int i = 1; i <= n; ++i) {
//		cout << s[i] << endl;
//	}
	
	vector <int> ace; // 存通过检查的下标
	vector <int> tmp;
	memset(flag, true, sizeof(flag));
	for (int j = 31; j >= 0; --j) {
		ace.clear();
		tmp.clear();
		for (int i = 1; i <= n; ++i) {
			if (flag[i] == false) continue;
			
			if (s[i][j] == '1') ace.push_back(i);
			else tmp.push_back(i);
		}
		
//		for (int i : ace) {
//			cout << a[i] << " ";
//		}
//		cout << endl;
		
		if (ace.size() >= m) {
			for (int i : tmp) {
				flag[i] = false;
			}
		}
		
		if (ace.size() == m) break;
	}
	
	int ans = 4294967296 - 1;
	for (int i = 1; i <= n; ++i) {
		if (flag[i] == true) {
			ans &= a[i];
		}
	}
	cout << ans << endl;
	
	return 0;
}