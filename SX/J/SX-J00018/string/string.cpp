#include <iostream>
#include <vector>
using namespace std;

//我终于把这题做出来了！！！

struct Pg {
	long long a;
	char c;
};

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	long long n, rst = 0, l, r;
	cin >> n;
	vector<Pg> pgs;
	for (int i = 0; i < n; i++) {
		Pg in;
		cin >> in.a >> in.c;
		if (pgs.empty()) {
			pgs.push_back(in);
			continue;
		}
		if (in.c == pgs[pgs.size() - 1].c) {
			pgs[pgs.size() - 1].a += in.a;
		} else {
			pgs.push_back(in);
		}

	}
//	for (auto i : pgs) {
//		cout << i.a << ' ' << i.c << endl;
//	}
	r = pgs.size() - 1;
	l = 0;
//	cout << l << ' ' << r << endl;
	while (l < r) {
		if (pgs[l].a == pgs[r].a) {
			if (pgs[l].c != pgs[r].c)
				rst += pgs[l].a;
			l++;
			r--;
		} else if (pgs[l].a < pgs[r].a) {
			if (pgs[l].c != pgs[r].c)
				rst += pgs[l].a;
			pgs[r].a -= pgs[l].a;
			l++;
		} else {
			if (pgs[l].c != pgs[r].c)
				rst += pgs[r].a;
			pgs[l].a -= pgs[r].a;
			r--;
		}
	}
	cout << rst;
}