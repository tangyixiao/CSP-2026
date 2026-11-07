#include <bits/stdc++.h>
using namespace std;
long long maxn = 0;
long long a[200010];
int num[200010][30] = {0};
long long lowbit(long long x) {
	maxn = max(maxn,x & (-x));
	return x & (-x);
}
string change(long long x) {
	string s = "";
	for(int i = lowbit(x);i >= 2;i /= 2) {
		if(x >= i) {
			x -= i;
			s += '1';
		}
		else {
			s += '0';
		}
	}
	if(x == 1) {
		s += '1';
	}
	return s;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i = 1;i <= n;i++) {
		cin >> a[i];
		string s = change(a[i]);
		for(int j = s.size() - 1;j >= 0;j++) {
			if(s[j] == '1') {
				num[i][s.size() - j]++;
			}
		} 
	}
	for(int i = maxn;i >= 1;i--) {
		int now = 0;
		for(int j = 1;j <= n;j++) {
			if(num[j][i]) {
				now++;
			}
		}
		if(now >= m) {
			for(int j = 1;j <= n;j++) {
				if(num[j][i]) {
					
				}
			}
		}
	}
	cout << 0;
	return 0;
}
