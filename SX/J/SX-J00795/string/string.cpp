#include <bits/stdc++.h>
using namespace std;

struct Block {
	long long len;
	char c;
};

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	vector<Block> blk(n);
	for (int i = 0; i < n; i++) {
		cin >> blk[i].len >> blk[i].c;
	}
	long long ans = 0;
	int l = 0, r = n - 1;
	while (l <= r) {
		if (l == r) {
			break;
		}
		if (blk[l].c == blk[r].c) {
			long long mi = min(blk[l].len, blk[r].len);
			blk[l].len -= mi;
			blk[r].len -= mi;
			if (blk[l].len == 0)
				l++;
			if (blk[r].len == 0)
				r--;
		} else {
			long long mi = min(blk[l].len, blk[r].len);
			ans += mi;
			blk[l].len -= mi;
			blk[r].len -= mi;
			if (blk[l].len == 0)
				l++;
			if (blk[r].len == 0)
				r--;
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
