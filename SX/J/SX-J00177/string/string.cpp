#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int n, num = 1, cnt = 0;
string a[N];

int main() {
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int c;
		string b;
		cin >> c >> b;
		for (int i = num; i <= num + c; i++) {
			a[i] = b;
		}
		num = num + c;
	}
	int s = 0;
	while (s < num / 2) {
		if (a[s] != a[num - s + 1]) {
			cnt++;
		}
		s++;
	}
	cout << cnt;
	return 0;
}