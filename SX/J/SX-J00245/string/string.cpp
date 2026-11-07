#include <bits/stdc++.h>
using namespace std;
int n;
string s;
long long sum;
int a;
char b;
int ct;

int main() {

//	freopen("string.in", "r", stdin);
	//freopen("string.out", "w", stdout);

	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		for (int j = 1; j <= a; j++) {
			s += b;
		}

	}


	for (int i = 1; i <= n; i++) {

		int j = n;
		if (s[i] != s[j]) {
			sum++;
		}
		j--;
	}
	cout << sum;
	return 0;
}
