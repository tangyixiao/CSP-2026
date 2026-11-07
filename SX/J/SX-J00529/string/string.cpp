#include <bits/stdc++.h>
using namespace std;

struct ker {
	int a;
	int b;
} too[200050];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, sum = 0, answer = 0; //sum字符总长度
	cin >> n;
	for (long long int i = 1; i <= n; i++) {
		int v, name;
		char x;
		cin >> v >> x;
		name = x - 'a';
		too[i].a = v;
		too[i].b = name;
		sum += v;
	}
	long long num = (sum) / 2;
	long long int r = 1, right = 0;
	while (right < num) {
		right += too[r].a;
		r++;
	}
	r--;
	long long int l = 1;
	long long int left1 = 0, left2 = 0, rr = 0; //l节点字符已经用了几个,l对应节点用了几个,rr到了哪里
	while (l < r) {
		if (too[l].a == too[n + 1 - l - rr].a && left1 == 0 && left2 == 0) {
			if (too[l].b != too[n + 1 - l - rr].b) {
				answer += too[l].a;
				l++;
			} else {
				l++;
			}
		} else {
			if (too[l].b == too[n + 1 - l - rr].b) {
				if (too[l].a > too[n + 1 - l - rr].a) {
					left1 += too[n + 1 - l - rr].a;
					rr ++;
				} else {
					l++;
					rr--;
					left2 += too[l].a;
				}
			} else {
				if (too[l].a > too[n + 1 - l - rr].a) {
					left1 += too[n + 1 - l - rr].a;
					rr ++;
					answer += too[n + 1 - l - rr].a;
				} else {
					l++;
					r--;
					left2 += too[l].a;
					answer += too[l].a;
				}
			}
		}
	}
	cout << answer;
	return 0;
}