#include <bits/stdc++.h>
using namespace std;
long long sum;

struct s {
	int a;
	char c;
} s[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> s[i].a >> s[i].c;
	for (int i = 0, j = n - 1; i < j;) {
		if (s[i].c == s[j].c) {
			if (s[i].a >= s[j].a) {
				s[i].a -= s[j].a;
				s[j].a = 0;
			} else {
				s[j].a -= s[i].a;
				s[i].a = 0;
			}
		} else {
			if (s[i].a >= s[j].a) {
				sum += s[j].a;
				s[i].a -= s[j].a;
				s[j].a = 0;
			} else {
				sum += s[i].a;
				s[j].a -= s[i].a;
				s[i].a = 0;
			}
		}
		if (s[i].a == 0)
			i++;
		if (s[j].a == 0)
			j--;
	}
	cout << sum;
}