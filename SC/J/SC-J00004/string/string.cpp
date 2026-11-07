#include <iostream>
#include <vector>

using namespace std;

struct Node {
	int s, e;
	char c;
	
	Node() = default;
};

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	long long n;
	cin >> n;
	long long size = 0;
	vector<Node> a(n + 1);
	for (int i = 1; i <= n; ++i) {
		int x;
		cin >> x >> a[i].c;
		
		a[i].s = size + 1;
		size += x;
		a[i].e = size;
	}
	int t = (size + 1) / 2, sum = 0;
	if (n == 1) {
		cout << 0 << endl;
	} else if (size <= 1000000) {
		string s = "";
		for (int i = 1; i <= n; ++i) {
			for (int j = a[i].s; j <= a[i].e; ++j) {
				s += a[i].c;
			}
		}
		for (int i = 1; i <= size - t; ++i) {
			if (s[t + i - 1] == s[t - i - 1]) {
				++sum;
			}
		}
		cout << size - t - sum << endl;
	} else {
		long long ans = 0;
		int ii = 1, jj = n;
		for (int i = 1, j = size; i < j; ++i, --j) {
			if (a[ii].c == a[jj].c) {
				ans += 2;
			}
			if (i == a[ii].s) {
				--ii;
			}
			if (j == a[jj].e) {
				++jj;
			}
		}
		if (ans >= size) {
			cout << 0 << endl;
		} else {
			cout << (size - ans) / 2 << endl;
		}
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}