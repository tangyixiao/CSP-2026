#include <bits/stdc++.h>
using namespace std;
long long n;

struct node {
	long long t;
	char c;
};
deque<node> que;
long long ans;

inline void efpush(long long ft, long long bt, char c) {
	node t = {ft - bt, c};
	que.push_front(t);
}

inline void ebpush(long long ft, long long bt, char c) {
	node t = {bt - ft, c};
	que.push_back(t);
}

inline void ufpush(long long ft, long long bt, char c) {
	node t = {ft - bt, c};
	que.push_front(t);
	ans += bt;
}

inline void ubpush(long long ft, long long bt, char c) {
	node t = {bt - ft, c};
	que.push_back(t);
	ans += ft;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	cin >> n;
	for (int i = 1 ; i <= n ; i++) {
		long long t;
		char c;
		cin >> t >> c;
		que.push_back(node{t, c});
	}


	while (!que.empty()) {

		long long ft = 	que.front().t, bt = que.back().t;
		char fc = que.front().c, bc = que.back().c;
		que.pop_front();
		if (!que.empty()) {
			que.pop_back();
		}


		if (fc == bc) {
			if (ft == bt) {

			} else if (ft > bt) {
				efpush(ft, bt, fc);
			} else {
				ebpush(ft, bt, bc);
			}
		} else {
			if (ft == bt) {
				ans += ft;
			} else if (ft > bt) {
				ufpush(ft, bt, fc);
			} else {
				ubpush(ft, bt, bc);
			}
		}


	}

	cout << ans;
	return 0;
}
